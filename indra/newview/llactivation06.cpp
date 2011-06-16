// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation06.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 06

void _activation_check_proc_06_func_66800765(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_fscked.mData[0xb];

}

void _activation_check_proc_06_func_927538883(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_06_func_1404364038(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_167115758();
}

void _activation_check_proc_06_func_167115758()
{
	
}

void _activation_check_proc_06_func_577195332(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_9.mData[0xe] |= _activatnvar_confusing_chararray_a[0x9];

}

void _activation_check_proc_06_func_631985476(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_577195332(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_a);
	_activation_check_proc_06_func_1259652712(_activatnvar_confusing_char_f);
}

void _activation_check_proc_06_func_1259652712(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_06_func_156197903(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_e *= 0x0;

}

void _activation_check_proc_06_func_1166459252(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 ^= 0xa;

}

void _activation_check_proc_06_func_1676300802(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1477740923(U8& _activatnvar_t0, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

	/* inline */ _activation_check_proc_06_func_1375298575(_activatnvar_t0);
	/* inline */ _activation_check_proc_06_func_69628713();
}

void _activation_check_proc_06_func_1657344135(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_c++;

	_activation_check_proc_06_func_203936179(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_06_func_1706087499(_activatnvar_confusing_int_f, _activatnvar_confusing_int_1);
}

void _activation_check_proc_06_func_203936179(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_06_func_1257330957(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x0] != 0xb) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_06_func_70545140(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x4] != 0xd) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_06_func_1806111092(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_f[0xd] *= _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_06_func_1528934418(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1936692202(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_06_func_1414910971(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 |= 0x4;

}

void _activation_check_proc_06_func_52721607(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_2)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_2 >>= _activatnvar_confusing_char_4;

}

void _activation_check_proc_06_func_1610301840(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activatnvar_confusing_LLUUID_d.mData[0xb] += _activatnvar_lace.mData[0xf];

	_activation_check_proc_06_func_52721607(_activatnvar_confusing_char_4, _activatnvar_confusing_bool_c, _activatnvar_confusing_U8_2);
	_activation_check_proc_06_func_1362013899(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_06_func_2047761671(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_06_func_1362013899(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_06_func_940999419(U8& _activatnvar_confusing_U8_8, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c *= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_06_func_1980420030(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_06_func_2095893728(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xc] != 0xb) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_06_func_1884220951(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_f;

	/* inline */ _activation_check_proc_06_func_1049998598(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_06_func_248860302(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_06_func_951486421(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_06_func_1963080580(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1487175592(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_2 = true;

	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_7;

	_activation_check_proc_06_func_248860302(_activatnvar_confusing_U8_2);
	/* inline */ _activation_check_proc_06_func_994052201(_activatnvar_confusing_bool_e, _activatnvar_confusing_U8_5);
	_activation_check_proc_06_func_951486421(_activatnvar_confusing_U8_4);
	_activation_check_proc_06_func_1963080580(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_607450636(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 <<= 0xf;

}

void _activation_check_proc_06_func_2005654400(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_06_func_440948224(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x2] |= _activatnvar_confusing_chararray_4[0x5];

}

void _activation_check_proc_06_func_1896304585(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_7, LLMD5*& _activatnvar_mmd5, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_8, LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
	_activation_check_proc_06_func_607450636(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_06_func_32729143(_activatnvar_mmd5);
	/* inline */ _activation_check_proc_06_func_301651362(_activatnvar_confusing_int_c);
	_activation_check_proc_06_func_2005654400(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_3);
	_activation_check_proc_06_func_885770489(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_2);
	_activation_check_proc_06_func_440948224(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_06_func_885770489(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_combined_id;

}

void _activation_check_proc_06_func_925320299(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_06_func_459350180(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_06_func_285256193(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("7a2fb38d-b754-af20-40d6-66797a1a4afd");

	_activation_check_proc_06_func_925320299(_activatnvar_so, _activatnvar_t0);
	_activation_check_proc_06_func_459350180(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_06_func_1096586269(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("12941912-5ab6-105c-d5df-fec6f3b50993");

}

void _activation_check_proc_06_func_249051584(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x1] >>= _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_06_func_1622629118(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("617c8c79-9ba6-24e8-8a8a-a19390a7f3c9");

	_activation_check_proc_06_func_1096586269(_activatnvar_confusing_LLUUID_3);
	_activation_check_proc_06_func_249051584(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_06_func_688575140(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_t1)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x7] != _activatnvar_t1) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_06_func_94604981(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_2124175150(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_06_func_1541596298(LLUUID& _activatnvar_code, char* _activatnvar_strbuf_0)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_06_func_1973991050(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_06_func_1782664183(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_1[0x4] += _activatnvar_confusing_chararray_9[0x5];

	/* inline */ _activation_check_proc_06_func_1567295864(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_06_func_915243729(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_b = false;

	_activation_check_proc_06_func_346510788(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_06_func_346510788(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_06_func_1913947938(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 22; _activatnvar_strbuf_0[0] ^= 39; _activatnvar_strbuf_0[1] = 70; _activatnvar_strbuf_0[1] ^= 118; _activatnvar_strbuf_0[2] = 124; _activatnvar_strbuf_0[2] ^= 79; _activatnvar_strbuf_0[3] = 125; _activatnvar_strbuf_0[3] ^= 73; _activatnvar_strbuf_0[4] = 34; _activatnvar_strbuf_0[4] ^= 64; _activatnvar_strbuf_0[5] = 44; _activatnvar_strbuf_0[5] ^= 74; _activatnvar_strbuf_0[6] = 56; _activatnvar_strbuf_0[6] ^= 94; _activatnvar_strbuf_0[7] = 51; _activatnvar_strbuf_0[7] ^= 5; _activatnvar_strbuf_0[8] = 85; _activatnvar_strbuf_0[8] ^= 120; _activatnvar_strbuf_0[9] = 4; _activatnvar_strbuf_0[9] ^= 102; _activatnvar_strbuf_0[10] = 10; _activatnvar_strbuf_0[10] ^= 61; _activatnvar_strbuf_0[11] = 114; _activatnvar_strbuf_0[11] ^= 70; _activatnvar_strbuf_0[12] = 18; _activatnvar_strbuf_0[12] ^= 34; _activatnvar_strbuf_0[13] = 20; _activatnvar_strbuf_0[13] ^= 57; _activatnvar_strbuf_0[14] = 73; _activatnvar_strbuf_0[14] ^= 121; _activatnvar_strbuf_0[15] = 60; _activatnvar_strbuf_0[15] ^= 90; _activatnvar_strbuf_0[16] = 42; _activatnvar_strbuf_0[16] ^= 72; _activatnvar_strbuf_0[17] = 6; _activatnvar_strbuf_0[17] ^= 98; _activatnvar_strbuf_0[18] = 73; _activatnvar_strbuf_0[18] ^= 100; _activatnvar_strbuf_0[19] = 75; _activatnvar_strbuf_0[19] ^= 122; _activatnvar_strbuf_0[20] = 54; _activatnvar_strbuf_0[20] ^= 85; _activatnvar_strbuf_0[21] = 17; _activatnvar_strbuf_0[21] ^= 115; _activatnvar_strbuf_0[22] = 23; _activatnvar_strbuf_0[22] ^= 113; _activatnvar_strbuf_0[23] = 5; _activatnvar_strbuf_0[23] ^= 40; _activatnvar_strbuf_0[24] = 94; _activatnvar_strbuf_0[24] ^= 106; _activatnvar_strbuf_0[25] = 91; _activatnvar_strbuf_0[25] ^= 109; _activatnvar_strbuf_0[26] = 96; _activatnvar_strbuf_0[26] ^= 85; _activatnvar_strbuf_0[27] = 35; _activatnvar_strbuf_0[27] ^= 64; _activatnvar_strbuf_0[28] = 32; _activatnvar_strbuf_0[28] ^= 16; _activatnvar_strbuf_0[29] = 52; _activatnvar_strbuf_0[29] ^= 5; _activatnvar_strbuf_0[30] = 123; _activatnvar_strbuf_0[30] ^= 31; _activatnvar_strbuf_0[31] = 55; _activatnvar_strbuf_0[31] ^= 5; _activatnvar_strbuf_0[32] = 38; _activatnvar_strbuf_0[32] ^= 23; _activatnvar_strbuf_0[33] = 30; _activatnvar_strbuf_0[33] ^= 124; _activatnvar_strbuf_0[34] = 68; _activatnvar_strbuf_0[34] ^= 32; _activatnvar_strbuf_0[35] = 40; _activatnvar_strbuf_0[35] ^= 29; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_06_func_2146668129(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_1[0xd] = _activatnvar_confusing_LLUUID_e.mData[0xf];

}

void _activation_check_proc_06_func_936100196(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xe;

}

void _activation_check_proc_06_func_320947797(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_06_func_2081734445(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_06_func_1298064582(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
}

void _activation_check_proc_06_func_320491015(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
	_activation_check_proc_06_func_1298064582(_activatnvar_t1);
}

void _activation_check_proc_06_func_1227761483(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_488775262(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_code;

}

void _activation_check_proc_06_func_2073518929(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("aadf1140-b8c5-f3b6-6076-a016e98b4728");

	_activation_check_proc_06_func_1459401614(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_06_func_1459401614(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x6] += _activatnvar_confusing_chararray_0[0x9];

}

void _activation_check_proc_06_func_1455935611(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_section2;

}

void _activation_check_proc_06_func_1340037955(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] = _activatnvar_confusing_chararray_a[0x5];

}

void _activation_check_proc_06_func_411485568(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_06_func_1651258809(char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_06_func_295753075(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("5be6fec1-7791-9d92-5d17-f91faf67b40e");

}

void _activation_check_proc_06_func_543107889(char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_06_func_653620457(_activatnvar_generic_bool_1, _activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_feat);
}

void _activation_check_proc_06_func_1290539432(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_06_func_947424422(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_06_func_1491909894(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_06_func_2135253498(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_c;

	_activation_check_proc_06_func_598029130(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_7);
	/* inline */ _activation_check_proc_06_func_603559438(_activatnvar_confusing_char_7, _activatnvar_confusing_U8_1, _activatnvar_confusing_bool_f);
	_activation_check_proc_06_func_1491909894(_activatnvar_confusing_int_1);
}

void _activation_check_proc_06_func_598029130(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_06_func_280597696(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 *= 0x3;

}

void _activation_check_proc_06_func_1396742703(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1226332663(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_06_func_248485837(int& _activatnvar_confusing_int_6)
{
	
	_activation_check_proc_06_func_1711194261(_activatnvar_confusing_int_6);
}

void _activation_check_proc_06_func_1711194261(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_06_func_1068994639(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] &= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_06_func_67914805(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c)
{
	
	/* inline */ _activation_check_proc_06_func_228154414(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_06_func_1475164082(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_c &= _activatnvar_lace.mData[0x0];

	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_06_func_2091898590(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_3.mData[0xc] |= _activatnvar_confusing_LLUUID_1.mData[0xf];

	/* inline */ _activation_check_proc_06_func_1815789973(_activatnvar_confusing_LLUUID_0);
	_activation_check_proc_06_func_1751187664(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_06_func_1751187664(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("c765a74f-0b6b-ca44-8b8d-57876afb791c");

}

void _activation_check_proc_06_func_1233096701(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_06_func_2107601749(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1726515489(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_e >>= _activatnvar_confusing_char_1;

}

void _activation_check_proc_06_func_1645739751(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_b.mData[0x1];

	_activation_check_proc_06_func_1726515489(_activatnvar_confusing_char_e, _activatnvar_confusing_bool_b, _activatnvar_confusing_char_1);
}

void _activation_check_proc_06_func_1142710398(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_06_func_471888887(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_c.mData[0xa];

}

void _activation_check_proc_06_func_2074087734(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_06_func_34273551(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_6.mData[0x9] |= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_06_func_2009207661(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_c, char& _activatnvar_confusing_char_d)
{
	
	_activation_check_proc_06_func_1474289716(_activatnvar_confusing_int_c, _activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_06_func_2046543554(_activatnvar_confusing_char_d);
}

void _activation_check_proc_06_func_1474289716(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_c;

}

void _activation_check_proc_06_func_1532351050(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xf] >>= _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_06_func_1533132283(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x5] >>= _activatnvar_section1.mData[0xd];

}

void _activation_check_proc_06_func_1655564198(char& _activatnvar_confusing_char_7, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_9, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_06_func_451149606(_activatnvar_confusing_char_7, _activatnvar_confusing_U8_9);
	_activation_check_proc_06_func_1968886115(_activatnvar_confusing_int_0);
}

void _activation_check_proc_06_func_1968886115(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_06_func_2021349657(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_06_func_2068691071(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	
	_activatnvar_confusing_char_e |= _activatnvar_confusing_LLUUID_1.mData[0xb];

	_activatnvar_confusing_U8_c ^= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_06_func_1672196811(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_06_func_702434837(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1905193644(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x7] >>= _activatnvar_confusing_chararray_7[0x4];

}

void _activation_check_proc_06_func_1886587441(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_594183387(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_8)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_8 >>= 0x9;

}

void _activation_check_proc_06_func_1398125509(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
	_activation_check_proc_06_func_1184525191(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_7, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_06_func_1184525191(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x4] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_06_func_150686861(int& _activatnvar_confusing_int_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 <<= _activatnvar_confusing_int_3;

	/* inline */ _activation_check_proc_06_func_858501199(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
}

void _activation_check_proc_06_func_1669176017(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] |= _activatnvar_confusing_LLUUID_4.mData[0xe];

	/* inline */ _activation_check_proc_06_func_1273013158(_activatnvar_confusing_int_3);
}

void _activation_check_proc_06_func_1136722732(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] = _activatnvar_confusing_LLUUID_0.mData[0x4];

}

void _activation_check_proc_06_func_460707728(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x6] != _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_06_func_1284208252(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_section1;

	_activation_check_proc_06_func_777911372(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_f);
	_activation_check_proc_06_func_458970507(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_06_func_777911372(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_06_func_458970507(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_6[0x7] ^= _activatnvar_confusing_LLUUID_e.mData[0x3];

}

void _activation_check_proc_06_func_863447988(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_06_func_1640795135(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_921040442(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_06_func_1226753759(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_f[0x2] |= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_06_func_1098197135(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_chararray_0[0xf];

}

void _activation_check_proc_06_func_1691295543(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_LLUUID_7.mData[0x0];

	_activation_check_proc_06_func_1226753759(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_06_func_1098197135(_activatnvar_confusing_chararray_0, _activatnvar_confusing_char_5);
	/* inline */ _activation_check_proc_06_func_1082452004(_activatnvar_so, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_06_func_1275271364(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_06_func_932666652(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_LLUUID_0.mData[0x4];

}

void _activation_check_proc_06_func_501963063(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_06_func_1829052177(char& _activatnvar_confusing_char_4, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_0;

	_activation_check_proc_06_func_1195186257(_activatnvar_confusing_char_9, _activatnvar_generic_bool_1, _activatnvar_confusing_char_4);
}

void _activation_check_proc_06_func_1195186257(char& _activatnvar_confusing_char_9, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_char_4 = _activatnvar_confusing_char_9;

}

void _activation_check_proc_06_func_345128431(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_2;

	_activation_check_proc_06_func_1725571781(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_06_func_1725571781(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_06_func_1224425839(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_06_func_2116621715(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xf] == 0x3) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_b;

	_activation_check_proc_06_func_1224425839(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_06_func_117184872(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_2098066038(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_06_func_701952199(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_5.mData[0x7] ^= _activatnvar_confusing_chararray_2[0xf];

}

void _activation_check_proc_06_func_1257152465(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_06_func_2145860679(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_chararray_d[0x3];

}

void _activation_check_proc_06_func_255803017(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_6 >>= _activatnvar_confusing_chararray_f[0x4];

}

void _activation_check_proc_06_func_478804578(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 ^= 0x1;

}

void _activation_check_proc_06_func_2048568618(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_3 += 0x6;

	/* inline */ _activation_check_proc_06_func_778558534(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_06_func_775868062(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_06_func_1113790363(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_147176526(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_fscked;

	/* inline */ _activation_check_proc_06_func_285370498(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_06_func_1531973687(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_06_func_1759726743(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_06_func_1148437678(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = _activatnvar_code.mData[0x6];

}

void _activation_check_proc_06_func_846536947(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_a |= _activatnvar_confusing_U8_2;

	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_06_func_282184159(bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_06_func_492471276(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] &= _activatnvar_confusing_chararray_4[0xe];

	_activation_check_proc_06_func_282184159(_activatnvar_confusing_bool_6);
}

void _activation_check_proc_06_func_69960759(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_06_func_1481076819(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_158792770(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_5[0x6] ^= _activatnvar_mac_digest[0xe];

	_activation_check_proc_06_func_1174129915(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_d);
	_activation_check_proc_06_func_390980935(_activatnvar_confusing_chararray_c, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_06_func_390980935(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 ^= _activatnvar_confusing_chararray_c[0xb];

}

void _activation_check_proc_06_func_1174129915(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xf] += _activatnvar_confusing_LLUUID_b.mData[0x9];

}

void _activation_check_proc_06_func_1462052664(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_lace;

}

void _activation_check_proc_06_func_1874023362(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1807702096(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x2] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_06_func_287445931(LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_0, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1874023362(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_lace);
	/* inline */ _activation_check_proc_06_func_1766269181(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_f);
	_activation_check_proc_06_func_1807702096(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_1, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_06_func_2089910011(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_06_func_1196402341();
	/* inline */ _activation_check_proc_06_func_153251146(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_06_func_1615734357(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("4bbf91ed-ae25-9346-f238-6cecbbe73e20");

}

void _activation_check_proc_06_func_649406478(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_06_func_1545739481(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_06_func_1620826862(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_1.mData[0xa] += _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_06_func_175243788(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1545739481(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_e);
	_activation_check_proc_06_func_1620826862(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_06_func_1075322603(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] = _activatnvar_code.mData[0x7];

}

void _activation_check_proc_06_func_1009014301(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= 0x8;

}

void _activation_check_proc_06_func_375373118(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("cc045a8f-56da-fed3-ccec-507a519efea4");

}

void _activation_check_proc_06_func_285829522(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("0dfa5fde-0879-35fc-cf7e-e386e6805ef2");

	if(_activatnvar_confusing_LLUUID_f.mData[0x0] != _activatnvar_confusing_char_1) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_06_func_329631627(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_06_func_1975673422(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 += 0x6;

}

void _activation_check_proc_06_func_1024201715(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_2058505842(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_2)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_2 = _activatnvar_pos;

}

void _activation_check_proc_06_func_1036514056(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_06_func_354597055(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_8, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_b.mData[0x1] |= _activatnvar_lace.mData[0xe];

	/* inline */ _activation_check_proc_06_func_246240083(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_8, _activatnvar_confusing_U8_4);
	_activation_check_proc_06_func_1036514056(_activatnvar_doaccount);
	_activation_check_proc_06_func_2058505842(_activatnvar_pos, _activatnvar_confusing_bool_a, _activatnvar_confusing_char_2);
}

void _activation_check_proc_06_func_64171881(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xa] == 0x2) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_06_func_909749087(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_a;

	_activation_check_proc_06_func_957714778(_activatnvar_confusing_int_e, _activatnvar_confusing_int_d);
}

void _activation_check_proc_06_func_957714778(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d |= _activatnvar_confusing_int_e;

}

void _activation_check_proc_06_func_98979383()
{
	
}

void _activation_check_proc_06_func_799771518(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x0] != 0x5) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_06_func_419100264(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("4237e9c0-f629-8a83-137e-0ef6b2121e41");

}

void _activation_check_proc_06_func_1746665896(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_e[0x0] >>= _activatnvar_confusing_LLUUID_5.mData[0x7];

	/* inline */ _activation_check_proc_06_func_1482749752(_activatnvar_confusing_chararray_6, _activatnvar_so);
}

void _activation_check_proc_06_func_1487535144(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xb] != _activatnvar_confusing_U8_f) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_06_func_1378486892(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_LLUUID_0.mData[0xc];

}

void _activation_check_proc_06_func_1568793790(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_06_func_1407447214(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_1456586246(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_06_func_124962973()
{
	
}

void _activation_check_proc_06_func_1962044884(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_1 *= 0x7;

}

void _activation_check_proc_06_func_830462162(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] += _activatnvar_confusing_chararray_9[0x5];

	/* inline */ _activation_check_proc_06_func_1137984663(_activatnvar_confusing_chararray_3, _activatnvar_confusing_char_2);
	_activation_check_proc_06_func_1328429930(_activatnvar_confusing_LLUUID_6, _activatnvar_lace);
}

void _activation_check_proc_06_func_1328429930(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_6.mData[0x4] >>= _activatnvar_lace.mData[0x2];

}

void _activation_check_proc_06_func_1151577277(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_06_func_718563099(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_3 ^= _activatnvar_confusing_int_8;

}

void _activation_check_proc_06_func_2077592854(char& _activatnvar_confusing_char_a, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_8, char& _activatnvar_feat, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_06_func_1151577277(_activatnvar_confusing_char_a, _activatnvar_confusing_chararray_d);
	_activation_check_proc_06_func_718563099(_activatnvar_confusing_int_3, _activatnvar_confusing_int_8);
}

void _activation_check_proc_06_func_2121079860(U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1892937481(_activatnvar_confusing_bool_4, _activatnvar_confusing_char_6, _activatnvar_confusing_U8_2);
	_activation_check_proc_06_func_173644233(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_1892937481(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_2)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_6 |= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_06_func_173644233(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("08b188c1-31c1-7781-2c8a-12ce9889ffef");

}

void _activation_check_proc_06_func_1927267277(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_6, int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_int_2 <<= _activatnvar_generic_iterator;

	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_char_4;

}

void _activation_check_proc_06_func_1558278781(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0x2;

}

void _activation_check_proc_06_func_37443402(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_06_func_81984513()
{
	
}

void _activation_check_proc_06_func_1701997083(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_06_func_436947774(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xc] ^= _activatnvar_confusing_chararray_6[0xe];

}

void _activation_check_proc_06_func_994536020(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_06_func_1615663572(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_code;

}

void _activation_check_proc_06_func_1225884933(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_2.mData[0xd] *= _activatnvar_confusing_chararray_e[0xb];

	/* inline */ _activation_check_proc_06_func_647480865(_activatnvar_confusing_int_e);
}

void _activation_check_proc_06_func_257316606(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x9] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_06_func_284578817(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_122607850(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_06_func_182216363(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_06_func_684306412(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_1 = _activatnvar_secret.mData[0x7];

}

void _activation_check_proc_06_func_1479946680(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_06_func_359592079(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 ^= _activatnvar_confusing_chararray_8[0x0];

}

void _activation_check_proc_06_func_1337873104(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_06_func_359592079(_activatnvar_confusing_chararray_8, _activatnvar_confusing_U8_8);
	_activation_check_proc_06_func_1479946680(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_06_func_1435424106(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_char_f);
	_activation_check_proc_06_func_684306412(_activatnvar_confusing_U8_1, _activatnvar_secret);
}

void _activation_check_proc_06_func_1753425420(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 |= 0x1;

}

void _activation_check_proc_06_func_292437490(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_369184357(int& _activatnvar_generic_iterator)
{
	
	_activation_check_proc_06_func_292437490(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_2070323933(char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_8, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a >>= _activatnvar_confusing_chararray_8[0x9];

	/* inline */ _activation_check_proc_06_func_1703221004(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_1, _activatnvar_confusing_bool_5, _activatnvar_feat);
}

void _activation_check_proc_06_func_576855181(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
	_activatnvar_confusing_LLUUID_b = LLUUID("6b4785a9-9653-249c-814d-5bf7e28b6b70");

}

void _activation_check_proc_06_func_1304551895(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	
	_activation_check_proc_06_func_1354610612(_activatnvar_pos);
	_activation_check_proc_06_func_576855181(_activatnvar_t0, _activatnvar_confusing_LLUUID_b, _activatnvar_combined_id);
}

void _activation_check_proc_06_func_1354610612(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_1824922116(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_06_func_1927422185(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 += _activatnvar_confusing_chararray_2[0x5];

	/* inline */ _activation_check_proc_06_func_1149771168(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_06_func_1824922116(_activatnvar_confusing_int_9);
}

void _activation_check_proc_06_func_565358443(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_6 = _activatnvar_fscked.mData[0xe];

}

void _activation_check_proc_06_func_1664213872(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_568150(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_06_func_866439692();
}

void _activation_check_proc_06_func_568150(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_06_func_1771967691(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_06_func_1074082350(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_06_func_614589085(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_06_func_1771967691(_activatnvar_confusing_U8_6, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_06_func_421349485(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_fscked;

}

void _activation_check_proc_06_func_2054850942(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_0 &= _activatnvar_confusing_LLUUID_9.mData[0x3];

	_activatnvar_confusing_U8_8 = 0xf;

}

void _activation_check_proc_06_func_682823175(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_4889546(unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_9[0x8] += _activatnvar_confusing_chararray_c[0x4];

	_activation_check_proc_06_func_682823175(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_968914815(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x8] += _activatnvar_confusing_LLUUID_7.mData[0xa];

}

void _activation_check_proc_06_func_998274418(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_06_func_76641299(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xe] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_06_func_1024603147()
{
	
}

void _activation_check_proc_06_func_2101150200(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_0;

	_activation_check_proc_06_func_1024603147();
}

void _activation_check_proc_06_func_2076533913(char& _activatnvar_feat, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_1, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_1 <<= _activatnvar_confusing_int_5;

	_activation_check_proc_06_func_836253552(_activatnvar_fscked, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_06_func_2039980493(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_doaccount, _activatnvar_feat);
}

void _activation_check_proc_06_func_2039980493(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_06_func_836253552(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xc] <<= _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_06_func_1949498000(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1671286276(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x4] ^= _activatnvar_confusing_LLUUID_2.mData[0x7];

	_activation_check_proc_06_func_1933258606(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_1933258606(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_2110769524(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_06_func_1969956748(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_2097052645(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 += 0x2;

}

void _activation_check_proc_06_func_1248405309(bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_06_func_324255442()
{
	
}

void _activation_check_proc_06_func_780023752(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_chararray_4[0xb];

}

void _activation_check_proc_06_func_1565273197(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("3ddca8da-1697-e13f-c32d-6a3c8fbea337");

}

void _activation_check_proc_06_func_970837476(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_06_func_973734369(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_1[0x9] >>= _activatnvar_confusing_chararray_0[0x9];

}

void _activation_check_proc_06_func_2036325458(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

	/* inline */ _activation_check_proc_06_func_2127555536(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_06_func_1917770131(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_06_func_614992326(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_06_func_1917231905(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_06_func_45029112(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_06_func_45029112(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x8] <<= _activatnvar_confusing_LLUUID_e.mData[0x4];

}

void _activation_check_proc_06_func_1765177744(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_d >>= _activatnvar_confusing_chararray_9[0xb];

	if(_activatnvar_confusing_LLUUID_0.mData[0x0] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_06_func_1086363524(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_06_func_1615247372(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_4 = false;

	/* inline */ _activation_check_proc_06_func_668590199(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_06_func_1959226067(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_06_func_147698938(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_147698938(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_06_func_918878971(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1600489338(_activatnvar_confusing_U8_1, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_06_func_1600489338(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_1 *= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_06_func_453162958(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_06_func_1565388110(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x4] >>= _activatnvar_mac_digest[0xf];

}

void _activation_check_proc_06_func_1320068481(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 ^= _activatnvar_confusing_chararray_f[0x2];

}

void _activation_check_proc_06_func_1676023652(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 <<= 0x6;

}

void _activation_check_proc_06_func_776109337(U8& _activatnvar_pos, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 ^= _activatnvar_pos;

	_activation_check_proc_06_func_1676023652(_activatnvar_confusing_char_3);
}

void _activation_check_proc_06_func_691709960(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xc] == 0x1) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_06_func_778420523(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xc] <<= _activatnvar_confusing_LLUUID_d.mData[0xa];

}

void _activation_check_proc_06_func_2042376957(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1870410587(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1840879558(U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_LLUUID_d.mData[0xc] ^= _activatnvar_confusing_LLUUID_0.mData[0x9];

	_activation_check_proc_06_func_1870410587(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
	/* inline */ _activation_check_proc_06_func_1945858589(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_06_func_618775302(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_char_5);
	/* inline */ _activation_check_proc_06_func_1546089676(_activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_06_func_777052799(_activatnvar_confusing_U8_2);
	/* inline */ _activation_check_proc_06_func_534975307(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_06_func_2106778198(LLUUID& _activatnvar_combined_id, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1, char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_strbuf_0[0] = 3; _activatnvar_strbuf_0[0] ^= 54; _activatnvar_strbuf_0[1] = 17; _activatnvar_strbuf_0[1] ^= 37; _activatnvar_strbuf_0[2] = 18; _activatnvar_strbuf_0[2] ^= 34; _activatnvar_strbuf_0[3] = 109; _activatnvar_strbuf_0[3] ^= 95; _activatnvar_strbuf_0[4] = 98; _activatnvar_strbuf_0[4] ^= 81; _activatnvar_strbuf_0[5] = 39; _activatnvar_strbuf_0[5] ^= 23; _activatnvar_strbuf_0[6] = 13; _activatnvar_strbuf_0[6] ^= 53; _activatnvar_strbuf_0[7] = 127; _activatnvar_strbuf_0[7] ^= 79; _activatnvar_strbuf_0[8] = 94; _activatnvar_strbuf_0[8] ^= 115; _activatnvar_strbuf_0[9] = 26; _activatnvar_strbuf_0[9] ^= 42; _activatnvar_strbuf_0[10] = 27; _activatnvar_strbuf_0[10] ^= 43; _activatnvar_strbuf_0[11] = 28; _activatnvar_strbuf_0[11] ^= 36; _activatnvar_strbuf_0[12] = 10; _activatnvar_strbuf_0[12] ^= 59; _activatnvar_strbuf_0[13] = 94; _activatnvar_strbuf_0[13] ^= 115; _activatnvar_strbuf_0[14] = 75; _activatnvar_strbuf_0[14] ^= 123; _activatnvar_strbuf_0[15] = 3; _activatnvar_strbuf_0[15] ^= 49; _activatnvar_strbuf_0[16] = 24; _activatnvar_strbuf_0[16] ^= 40; _activatnvar_strbuf_0[17] = 84; _activatnvar_strbuf_0[17] ^= 108; _activatnvar_strbuf_0[18] = 53; _activatnvar_strbuf_0[18] ^= 24; _activatnvar_strbuf_0[19] = 23; _activatnvar_strbuf_0[19] ^= 39; _activatnvar_strbuf_0[20] = 10; _activatnvar_strbuf_0[20] ^= 110; _activatnvar_strbuf_0[21] = 106; _activatnvar_strbuf_0[21] ^= 90; _activatnvar_strbuf_0[22] = 40; _activatnvar_strbuf_0[22] ^= 75; _activatnvar_strbuf_0[23] = 17; _activatnvar_strbuf_0[23] ^= 60; _activatnvar_strbuf_0[24] = 50; _activatnvar_strbuf_0[24] ^= 2; _activatnvar_strbuf_0[25] = 29; _activatnvar_strbuf_0[25] ^= 47; _activatnvar_strbuf_0[26] = 32; _activatnvar_strbuf_0[26] ^= 20; _activatnvar_strbuf_0[27] = 89; _activatnvar_strbuf_0[27] ^= 58; _activatnvar_strbuf_0[28] = 84; _activatnvar_strbuf_0[28] ^= 108; _activatnvar_strbuf_0[29] = 109; _activatnvar_strbuf_0[29] ^= 85; _activatnvar_strbuf_0[30] = 33; _activatnvar_strbuf_0[30] ^= 19; _activatnvar_strbuf_0[31] = 13; _activatnvar_strbuf_0[31] ^= 56; _activatnvar_strbuf_0[32] = 88; _activatnvar_strbuf_0[32] ^= 96; _activatnvar_strbuf_0[33] = 126; _activatnvar_strbuf_0[33] ^= 79; _activatnvar_strbuf_0[34] = 67; _activatnvar_strbuf_0[34] ^= 118; _activatnvar_strbuf_0[35] = 85; _activatnvar_strbuf_0[35] ^= 100; _activatnvar_strbuf_0[36] = 0;
	/* inline */ _activation_check_proc_06_func_833887585(_activatnvar_confusing_bool_f, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_06_func_912139041(_activatnvar_combined_id, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_06_func_579998822()
{
	
}

void _activation_check_proc_06_func_1087576665(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_579998822();
}

void _activation_check_proc_06_func_1321245515(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1825571415(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_640247693(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_06_func_746887465(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_304647553(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_06_func_699450608(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_so, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x0] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_3 = true;

	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_06_func_1175999173(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_t0)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_06_func_304647553(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
	_activation_check_proc_06_func_699450608(_activatnvar_t0, _activatnvar_confusing_U8_c, _activatnvar_so, _activatnvar_t1, _activatnvar_confusing_bool_3, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_506431673(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_9.mData[0x0];

}

void _activation_check_proc_06_func_990058450(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_2.mData[0x6] |= _activatnvar_confusing_chararray_d[0x5];

	/* inline */ _activation_check_proc_06_func_314642685(_activatnvar_confusing_U8_5, _activatnvar_fscked);
	/* inline */ _activation_check_proc_06_func_363081849(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
	_activation_check_proc_06_func_506431673(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_06_func_361749101(_activatnvar_confusing_bool_3, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_06_func_1544412177(char& _activatnvar_confusing_char_b, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_b >>= 0x8;

}

void _activation_check_proc_06_func_1987055918(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_06_func_871593878(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_combined_id;

}

void _activation_check_proc_06_func_1209950645(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("f36c577a-9f68-93c4-de5b-93a86d299d5a");

}

void _activation_check_proc_06_func_1761645956(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_int_c = _activatnvar_confusing_int_8;

	_activatnvar_generic_iterator++;
	_activatnvar_confusing_LLUUID_1 = LLUUID("b86334fb-9641-8ed5-e128-4e0448c4a809");

	_activation_check_proc_06_func_1209950645(_activatnvar_confusing_LLUUID_8);
	_activation_check_proc_06_func_977603102(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_06_func_977603102(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] &= _activatnvar_confusing_LLUUID_5.mData[0x9];

}

void _activation_check_proc_06_func_736815130(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_484351203(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

	/* inline */ _activation_check_proc_06_func_1997291994(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_06_func_737814980(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_06_func_1871123072(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_chararray_d[0x7] = _activatnvar_confusing_chararray_d[0x9];

	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_7 = true;

	_activation_check_proc_06_func_1190630277(_activatnvar_confusing_bool_1, _activatnvar_generic_bool_0, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_06_func_1190630277(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_a = _activatnvar_generic_bool_0;

}

void _activation_check_proc_06_func_1545772950(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
	/* inline */ _activation_check_proc_06_func_509045335();
}

void _activation_check_proc_06_func_1554454743(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_06_func_1595012974(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_496936832(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_06_func_667574747(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_06_func_603765145(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_06_func_1053524504(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_292103409(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_e, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x3] == _activatnvar_confusing_char_e) _activatnvar_confusing_bool_c = true;

	/* inline */ _activation_check_proc_06_func_1436152426(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_9, _activatnvar_confusing_bool_7);
	_activation_check_proc_06_func_1443402700(_activatnvar_confusing_char_8, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_06_func_1971134625(_activatnvar_section1, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_06_func_1443402700(char& _activatnvar_confusing_char_8, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_8 *= 0x5;

}

void _activation_check_proc_06_func_863157332(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_2074865947(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_516303537(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_9[0xd] = _activatnvar_confusing_chararray_0[0xa];

	_activation_check_proc_06_func_2074865947(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_863157332(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_06_func_2138222460(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_06_func_396624449(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] <<= _activatnvar_fscked.mData[0x1];

}

void _activation_check_proc_06_func_624823487(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_06_func_768872256(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_06_func_1548910498()
{
	
}

void _activation_check_proc_06_func_1236038504(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_LLUUID_7.mData[0x3];

	_activation_check_proc_06_func_906903757(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_06_func_413809548(_activatnvar_confusing_LLUUID_5, _activatnvar_section2);
}

void _activation_check_proc_06_func_906903757(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_06_func_2030248794(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_c >>= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_06_func_1519075652(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_2, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_1507942187(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_937745580();
	_activation_check_proc_06_func_255420924(_activatnvar_confusing_chararray_2, _activatnvar_confusing_chararray_c);
	_activation_check_proc_06_func_1013976844(_activatnvar_doaccount, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_U8_c, _activatnvar_confusing_bool_2);
	/* inline */ _activation_check_proc_06_func_1782678482(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_06_func_937745580()
{
	
}

void _activation_check_proc_06_func_1013976844(bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xb] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_2 = _activatnvar_doaccount;

}

void _activation_check_proc_06_func_255420924(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_2[0x8] <<= _activatnvar_confusing_chararray_c[0xd];

}

void _activation_check_proc_06_func_1507942187(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1839945703(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_8[0xe] |= _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_06_func_277815259(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xb] = _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_06_func_1732130065(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_06_func_593119160(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_06_func_1595708894(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_06_func_1256772950(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("dfda7a19-a76f-17eb-c463-1c1c87285aca");

	_activation_check_proc_06_func_1595708894(_activatnvar_confusing_int_9);
}

void _activation_check_proc_06_func_366563006(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1172510957(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_06_func_22061184(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_06_func_119155883(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_06_func_174658493()
{
	
}

void _activation_check_proc_06_func_749360366(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_LLUUID_3.mData[0xf];

}

void _activation_check_proc_06_func_1579868942(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x0] *= _activatnvar_section1.mData[0xd];

	_activation_check_proc_06_func_749360366(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_06_func_1517070120(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_06_func_1457289027(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_06_func_1865355842(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_06_func_1865355842(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_06_func_778345149(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_06_func_1357058126(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x0] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_06_func_1013917036()
{
	
}

void _activation_check_proc_06_func_1433410701(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b |= _activatnvar_combined_id.mData[0xe];

}

void _activation_check_proc_06_func_1650405334(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_06_func_1078624749(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_477618369();
}

void _activation_check_proc_06_func_477618369()
{
	
}

void _activation_check_proc_06_func_1921745685(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_06_func_830385321(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_so;

	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_06_func_637519914(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b ^= _activatnvar_confusing_char_6;

}

void _activation_check_proc_06_func_1196707952(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_1;

	_activation_check_proc_06_func_699259190(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_06_func_673453925(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_ser_digest);
}

void _activation_check_proc_06_func_699259190(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_232310513(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 ^= 0x9;

	_activation_check_proc_06_func_1315047485(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_06_func_1315047485(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_06_func_504449190(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_57720934(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x1] *= _activatnvar_ser_digest[0xc];

}

void _activation_check_proc_06_func_941985963(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_06_func_812694929(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_9[0xf] &= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_06_func_1514864134(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_6)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_6 <<= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_06_func_1149375997(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] |= _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_06_func_843120936(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1882291552(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e ^= 0x4;

	_activation_check_proc_06_func_981449645(_activatnvar_confusing_char_d, _activatnvar_confusing_chararray_f);
	_activation_check_proc_06_func_2136276165();
}

void _activation_check_proc_06_func_981449645(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_d <<= _activatnvar_confusing_chararray_f[0xf];

}

void _activation_check_proc_06_func_2136276165()
{
	
}

void _activation_check_proc_06_func_21899164(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_4 = _activatnvar_confusing_char_c;

}

void _activation_check_proc_06_func_950125041(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xf] <<= _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_06_func_680341360(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_06_func_835412575(U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_so, U8& _activatnvar_t0, int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_c[0xb] += _activatnvar_confusing_chararray_3[0x0];

	_activation_check_proc_06_func_680341360(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_06_func_1795217377(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_06_func_2130365156(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1115364635(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_06_func_1443509673(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_480666244(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_06_func_2140534048(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1411985488(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_2140534048(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id);
}

void _activation_check_proc_06_func_831172232(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_06_func_277419945(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 ^= _activatnvar_confusing_chararray_0[0x7];

	_activation_check_proc_06_func_1753636143(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_06_func_1753636143(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("e492c455-4a05-120d-6b8e-6f4010f8a1f2");

}

void _activation_check_proc_06_func_1155903294(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1054957619(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1155903294(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_section1);
}

void _activation_check_proc_06_func_711647430(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x4] != 0x3) _activatnvar_confusing_bool_d = false;

	/* inline */ _activation_check_proc_06_func_240577640(_activatnvar_t0);
}

void _activation_check_proc_06_func_511268066(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_06_func_675453119(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] += _activatnvar_mac_digest[0x4];

}

void _activation_check_proc_06_func_1684697745(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_a.mData[0x7] |= _activatnvar_confusing_chararray_b[0x6];

}

void _activation_check_proc_06_func_2043476016(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1203133521(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_2098292422(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_2[0x4] &= _activatnvar_name_digest[0x0];

}

void _activation_check_proc_06_func_316419656(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_3.mData[0xc] &= _activatnvar_confusing_chararray_f[0x5];

	_activation_check_proc_06_func_2098292422(_activatnvar_confusing_chararray_2, _activatnvar_name_digest);
}

void _activation_check_proc_06_func_726844868(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] ^= _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_06_func_387160544(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_4, LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
	_activation_check_proc_06_func_726844868(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_06_func_351919926(_activatnvar_confusing_chararray_c, _activatnvar_secret);
}

void _activation_check_proc_06_func_351919926(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_c[0xf] |= _activatnvar_secret.mData[0x5];

}

void _activation_check_proc_06_func_1825899777(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_e <<= _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_06_func_1004428458(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_c.mData[0xd];

	_activation_check_proc_06_func_1825899777(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_06_func_119959494(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] ^= _activatnvar_confusing_LLUUID_d.mData[0x4];

}

void _activation_check_proc_06_func_857906272(char& _activatnvar_confusing_char_3, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_7 >>= _activatnvar_confusing_int_5;

	/* inline */ _activation_check_proc_06_func_106769980(_activatnvar_confusing_char_3);
}

void _activation_check_proc_06_func_2026558106(LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_5;

	/* inline */ _activation_check_proc_06_func_1696629521(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_generic_bool_1, _activatnvar_feat);
	_activation_check_proc_06_func_774815222(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_9);
	_activation_check_proc_06_func_942902014(_activatnvar_confusing_bool_2);
}

void _activation_check_proc_06_func_774815222(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_06_func_942902014(bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_06_func_187642714(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_06_func_778777701(int& _activatnvar_confusing_int_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_187642714(_activatnvar_confusing_int_7);
}

void _activation_check_proc_06_func_2005716872(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_a[0x0] >>= _activatnvar_confusing_chararray_6[0x8];

}

void _activation_check_proc_06_func_1658734152(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_char_2 <<= _activatnvar_confusing_char_d;

}

void _activation_check_proc_06_func_1448811673(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_5 <<= 0x3;

}

void _activation_check_proc_06_func_1926329115(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_937819241(unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_f[0xc] <<= _activatnvar_confusing_chararray_5[0xc];

	/* inline */ _activation_check_proc_06_func_1254790222(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_06_func_1592175010(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_06_func_915707958(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_2++;

	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1592175010(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_a);
	_activation_check_proc_06_func_92011133();
}

void _activation_check_proc_06_func_92011133()
{
	
}

void _activation_check_proc_06_func_1925892748(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 &= 0x0;

}

void _activation_check_proc_06_func_572603509(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_section2;

}

void _activation_check_proc_06_func_196254267(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_06_func_410653972(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_06_func_496269445(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("81cc8bff-7cec-46a9-c20e-e3331f530a1a");

}

void _activation_check_proc_06_func_1241339302(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_06_func_568019943(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_7[0xc] ^= _activatnvar_ser_digest[0x8];

}

void _activation_check_proc_06_func_703549458(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1967200622(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_so ^= _activatnvar_section2;
}

void _activation_check_proc_06_func_684128137(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_06_func_836256736(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x1] ^= _activatnvar_confusing_LLUUID_7.mData[0x7];

	_activation_check_proc_06_func_1967200622(_activatnvar_section2, _activatnvar_so);
	_activation_check_proc_06_func_684128137(_activatnvar_confusing_int_6);
	_activation_check_proc_06_func_857127901(_activatnvar_pos, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_06_func_1583711287(_activatnvar_pos);
}

void _activation_check_proc_06_func_857127901(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_06_func_1630940262()
{
	
}

void _activation_check_proc_06_func_1800723619(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_6 >>= _activatnvar_confusing_U8_0;

	_activation_check_proc_06_func_1630940262();
	_activation_check_proc_06_func_1730072399(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_06_func_1730072399(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("5c7748b9-78fc-bdfb-830b-844bdd423804");

}

void _activation_check_proc_06_func_1199830610(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1991456925(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_7 = _activatnvar_confusing_char_d;

}

void _activation_check_proc_06_func_899594248(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1209942247(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_1209942247(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1000261191(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_06_func_1921301213(char& _activatnvar_feat, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_9;

	_activation_check_proc_06_func_1000261191(_activatnvar_feat, _activatnvar_lace);
}

void _activation_check_proc_06_func_1820174954(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_6.mData[0x2] = _activatnvar_ser_digest[0x5];

}

void _activation_check_proc_06_func_1639602138(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_06_func_302928486(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= 0x1;

}

void _activation_check_proc_06_func_572173158(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_06_func_1611158854(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_code.mData[0x9];

}

void _activation_check_proc_06_func_2043192475(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("59424fd0-5d26-2d75-e40d-3bdb3d7abaf0");

	/* inline */ _activation_check_proc_06_func_563832034(_activatnvar_confusing_U8_b, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_06_func_1444799388(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] = _activatnvar_confusing_LLUUID_9.mData[0xe];

}

void _activation_check_proc_06_func_2096229118(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x3] == 0xd) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_06_func_1868428249(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] |= _activatnvar_confusing_chararray_c[0x2];

	_activation_check_proc_06_func_1929467846(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_06_func_1929467846(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_06_func_1172926673(LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	_activation_check_proc_06_func_1542330440(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_06_func_1542330440(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_06_func_1197322900(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] ^= _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_06_func_1512556934(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xa] >>= _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_06_func_656247127()
{
	
	
}

void _activation_check_proc_06_func_561447815(LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
	_activation_check_proc_06_func_656247127();
	/* inline */ _activation_check_proc_06_func_497616408(_activatnvar_confusing_int_8);
}

void _activation_check_proc_06_func_1769933974(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_06_func_1191682461(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_06_func_1588429733(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1775419801(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_chararray_a[0x7] += _activatnvar_confusing_LLUUID_e.mData[0x7];

}

void _activation_check_proc_06_func_1757351133(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x5] *= _activatnvar_confusing_chararray_1[0x5];

}

void _activation_check_proc_06_func_676241512(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1479107864(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] &= _activatnvar_confusing_LLUUID_e.mData[0x8];

	_activation_check_proc_06_func_676241512(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_1688627916(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_06_func_1345630299(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so, U8& _activatnvar_t1, char& _activatnvar_confusing_char_6)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_a <<= _activatnvar_confusing_char_6;

	_activation_check_proc_06_func_1688627916(_activatnvar_pos, _activatnvar_t1, _activatnvar_so);
	/* inline */ _activation_check_proc_06_func_1070063669(_activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_06_func_1856978076();
	/* inline */ _activation_check_proc_06_func_1003396589(_activatnvar_pos);
}

void _activation_check_proc_06_func_1856978076()
{
	
}

void _activation_check_proc_06_func_469005866(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_336707515(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_2001190354()
{
	
}

void _activation_check_proc_06_func_1475562900(unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_4, int& _activatnvar_confusing_int_2, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_b)
{
	_activatnvar_generic_iterator++;
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_06_func_2135305199(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_2001190354();
	_activation_check_proc_06_func_1557850540(_activatnvar_confusing_int_2);
	/* inline */ _activation_check_proc_06_func_1461684447(_activatnvar_confusing_U8_7, _activatnvar_confusing_chararray_b);
	/* inline */ _activation_check_proc_06_func_1343107220(_activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_06_func_1106542119(_activatnvar_confusing_U8_4, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_06_func_1650780989(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_06_func_1557850540(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_06_func_303328954(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_int_9 &= 0xff;

	/* inline */ _activation_check_proc_06_func_436032931(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_7);
	_activation_check_proc_06_func_1926856550(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_8);
	_activation_check_proc_06_func_724186576(_activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_06_func_724186576(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1926856550(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xa] != 0xc) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_06_func_88563713(unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_735636428(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_lace);
	/* inline */ _activation_check_proc_06_func_548129415(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_4);
	_activation_check_proc_06_func_1919608492(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_char_b, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_06_func_735636428(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1919608492(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x2] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_06_func_1063873193(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_b.mData[0xd] &= _activatnvar_confusing_LLUUID_0.mData[0xe];

}

void _activation_check_proc_06_func_1063641170(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_5 += _activatnvar_confusing_chararray_d[0xc];

	/* inline */ _activation_check_proc_06_func_1421462722(_activatnvar_confusing_char_5, _activatnvar_confusing_U8_d, _activatnvar_confusing_bool_0, _activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_06_func_1219477730(bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xb] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_06_func_1712312740(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_t1)
{
	_activatnvar_confusing_LLUUID_5.mData[0x3] |= _activatnvar_confusing_chararray_9[0xa];

	_activation_check_proc_06_func_1306141537(_activatnvar_t1);
}

void _activation_check_proc_06_func_1306141537(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_06_func_1382774391(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_LLUUID_2.mData[0xc] |= _activatnvar_confusing_LLUUID_2.mData[0x1];

	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_char_4 ^= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_06_func_583899285(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xe] >>= _activatnvar_confusing_chararray_a[0x6];

	_activation_check_proc_06_func_154102326(_activatnvar_generic_iterator, _activatnvar_confusing_bool_0, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_06_func_154102326(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_0 = true;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_441833309(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_fscked;

}

void _activation_check_proc_06_func_501202718(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x6] *= _activatnvar_confusing_LLUUID_8.mData[0xf];

}

void _activation_check_proc_06_func_1893539390(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0x1;

}

void _activation_check_proc_06_func_864244901(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_06_func_1974022560(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_t0, int& _activatnvar_confusing_int_a, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_so, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_f++;

	/* inline */ _activation_check_proc_06_func_692384718(_activatnvar_confusing_int_a, _activatnvar_t0, _activatnvar_confusing_chararray_1, _activatnvar_pos, _activatnvar_so, _activatnvar_confusing_chararray_c);
	_activation_check_proc_06_func_1266960267(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_06_func_1266960267(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_06_func_1487770205(DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
}

void _activation_check_proc_06_func_1661444057(DWORD& _activatnvar_gvi_flags, BOOL& _activatnvar_success, DWORD& _activatnvar_serial)
{
	_activatnvar_gvi_flags = 0;
	_activation_check_proc_06_func_1487770205(_activatnvar_gvi_flags, _activatnvar_serial, _activatnvar_success);
}

void _activation_check_proc_06_func_1215901875(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x0] ^= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_06_func_693782657(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_chararray_2[0xb];

	_activation_check_proc_06_func_1215901875(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_06_func_1694321268(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_6)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_6 *= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_06_func_1198069998(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x5] != 0xe) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_06_func_1108956684(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 <<= _activatnvar_confusing_int_3;

}

void _activation_check_proc_06_func_1442201825(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xc] == _activatnvar_confusing_U8_d) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_06_func_383279206(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_06_func_1442201825(_activatnvar_confusing_bool_c, _activatnvar_confusing_U8_d, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_1645896159(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_06_func_1516248166(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_06_func_1224878782(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_0++;

	_activation_check_proc_06_func_1645896159(_activatnvar_confusing_char_5);
	_activation_check_proc_06_func_1516248166(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_06_func_58957418(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_06_func_1934608005()
{
	
}

void _activation_check_proc_06_func_2071654215(char& _activatnvar_confusing_char_6, U8& _activatnvar_pos)
{
	_activatnvar_confusing_char_6 = _activatnvar_pos;

}

void _activation_check_proc_06_func_698020478(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_06_func_192195105(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("320caf7c-ff5f-e1b8-7e57-f4f8bcd08417");

	_activation_check_proc_06_func_1991000841(_activatnvar_confusing_char_a, _activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_06_func_1991000841(char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x9] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_06_func_770329701(unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_0;

	_activation_check_proc_06_func_1397923688(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_int_2, _activatnvar_confusing_int_6, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_06_func_1397923688(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x7] <<= _activatnvar_confusing_LLUUID_1.mData[0x8];

	_activatnvar_confusing_int_2 &= _activatnvar_confusing_int_6;

}

void _activation_check_proc_06_func_974548685(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_2, char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_7 <<= _activatnvar_confusing_U8_9;

	/* inline */ _activation_check_proc_06_func_1079449282(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_06_func_1880336364(_activatnvar_confusing_U8_2, _activatnvar_confusing_char_5);
}

void _activation_check_proc_06_func_2032741057(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_7[0x9] ^= _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_06_func_1847375416(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_2[0xe] ^= _activatnvar_section2.mData[0x1];

	/* inline */ _activation_check_proc_06_func_2035092976(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_3);
	/* inline */ _activation_check_proc_06_func_1501053646(_activatnvar_confusing_char_d);
}

void _activation_check_proc_06_func_544227497(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1669344748(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_2.mData[0x1] ^= _activatnvar_confusing_chararray_3[0x1];

	_activation_check_proc_06_func_664820425(_activatnvar_confusing_bool_3, _activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_6, _activatnvar_confusing_U8_2);
	_activation_check_proc_06_func_2007446601(_activatnvar_confusing_char_c, _activatnvar_section2);
	_activation_check_proc_06_func_133044600(_activatnvar_confusing_U8_4, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_06_func_2007446601(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_c &= _activatnvar_section2.mData[0x2];

}

void _activation_check_proc_06_func_133044600(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_chararray_d[0xc];

}

void _activation_check_proc_06_func_664820425(bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 <<= _activatnvar_confusing_chararray_d[0xb];

	if(_activatnvar_confusing_LLUUID_6.mData[0x6] != 0x1) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_06_func_1452939132(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_06_func_2098434863(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_06_func_40267152(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_6);
	_activation_check_proc_06_func_1452939132(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_06_func_1765537441(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_c |= _activatnvar_confusing_int_7;

}

void _activation_check_proc_06_func_20970633(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_06_func_267736725(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_7, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_a = _activatnvar_confusing_U8_f;

	_activation_check_proc_06_func_99425619(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_06_func_20970633(_activatnvar_confusing_int_7);
	_activation_check_proc_06_func_1765537441(_activatnvar_confusing_int_c, _activatnvar_confusing_int_7);
}

void _activation_check_proc_06_func_99425619(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x6] = _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_06_func_483216136(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_3)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x0] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_e;

}

void _activation_check_proc_06_func_2004443282(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_308213879(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_06_func_1134324828(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_06_func_847876869(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_LLUUID_0.mData[0xf];

}

void _activation_check_proc_06_func_1527245308(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_8 &= 0xf;

	_activation_check_proc_06_func_847876869(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_char_3);
}

void _activation_check_proc_06_func_1429183731(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
	_activation_check_proc_06_func_1868154942(_activatnvar_t0);
	_activation_check_proc_06_func_938169067(_activatnvar_t0);
	_activation_check_proc_06_func_644933335(_activatnvar_confusing_LLUUID_1, _activatnvar_secret);
}

void _activation_check_proc_06_func_644933335(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_secret;

}

void _activation_check_proc_06_func_1868154942(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_06_func_938169067(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 3;
}

void _activation_check_proc_06_func_806188229(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_06_func_1402225204(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_LLUUID_f.mData[0x2];

}

void _activation_check_proc_06_func_1961812602()
{
	
}

void _activation_check_proc_06_func_847005086(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
	/* inline */ _activation_check_proc_06_func_1452766196(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_06_func_926558632(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1649292793(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_708903847(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xe] == 0xd) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_06_func_313848376(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x6] &= _activatnvar_confusing_LLUUID_6.mData[0x4];

}

void _activation_check_proc_06_func_834227933(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_899146647(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_0++;

	_activation_check_proc_06_func_313848376(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_e);
	_activation_check_proc_06_func_708903847(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_8);
	_activation_check_proc_06_func_834227933(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_1774616836(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_doaccount;

}

void _activation_check_proc_06_func_432037216(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_5 >>= _activatnvar_confusing_int_0;

}

void _activation_check_proc_06_func_426634935()
{
	
}

void _activation_check_proc_06_func_1609628697(LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_6 = true;

	/* inline */ _activation_check_proc_06_func_1943622977(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_06_func_266952190(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_chararray_4[0x8] += _activatnvar_so.mData[0x0];

	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_06_func_658900781(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_06_func_1928067749(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_101881132(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 *= 0xe;

}

void _activation_check_proc_06_func_1568348998(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_4.mData[0xb] |= _activatnvar_ser_digest[0x9];

	/* inline */ _activation_check_proc_06_func_431691816(_activatnvar_confusing_LLUUID_e);
	_activation_check_proc_06_func_101881132(_activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_06_func_1438377266(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_06_func_1513672414(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_4[0x4] |= _activatnvar_confusing_chararray_7[0x9];

}

void _activation_check_proc_06_func_1086911190(U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_char_6;

}

void _activation_check_proc_06_func_158992461(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_06_func_1013530339(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_63640460(U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_1 += _activatnvar_confusing_U8_b;

	_activation_check_proc_06_func_1013530339(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_803146147(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("2e9df4df-1051-25e8-9c06-bb2639cedb5e");

}

void _activation_check_proc_06_func_807643118(std::string& _activatnvar_fullname, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_06_func_234281704(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_e, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_chararray_0[0x4] <<= _activatnvar_confusing_LLUUID_6.mData[0x3];

	_activatnvar_confusing_char_e *= _activatnvar_confusing_U8_7;

	_activation_check_proc_06_func_313322646(_activatnvar_confusing_int_9, _activatnvar_confusing_int_e);
}

void _activation_check_proc_06_func_313322646(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e |= _activatnvar_confusing_int_9;

}

void _activation_check_proc_06_func_456306917(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_06_func_651171879(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_06_func_456306917(_activatnvar_generic_bool_0);
}

void _activation_check_proc_06_func_701028296(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_06_func_1356132585(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_06_func_1919593861(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_06_func_2075261904()
{
	
}

void _activation_check_proc_06_func_302537390(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_LLUUID_2.mData[0xa] *= _activatnvar_confusing_LLUUID_b.mData[0xb];

	_activation_check_proc_06_func_514704227(_activatnvar_confusing_LLUUID_5, _activatnvar_section1);
	_activation_check_proc_06_func_1118935704(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_06_func_1805310225(_activatnvar_generic_bool_0);
	_activation_check_proc_06_func_616874506(_activatnvar_confusing_int_1);
}

void _activation_check_proc_06_func_616874506(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_06_func_1118935704(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_06_func_514704227(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] ^= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_06_func_1277874138(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_06_func_1749495454(bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_generic_bool_1, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_chararray_2[0x3] &= _activatnvar_confusing_LLUUID_8.mData[0xb];

	/* inline */ _activation_check_proc_06_func_1826450877(_activatnvar_confusing_char_d, _activatnvar_generic_bool_1);
	_activation_check_proc_06_func_1448907599(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_b);
	_activation_check_proc_06_func_1093435471(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_f, _activatnvar_confusing_bool_5);
	_activation_check_proc_06_func_934902720(_activatnvar_confusing_char_7, _activatnvar_confusing_bool_a);
	_activation_check_proc_06_func_1349798752(_activatnvar_t0);
}

void _activation_check_proc_06_func_934902720(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_7 &= 0xf;

}

void _activation_check_proc_06_func_1448907599(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_1[0x8] = _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_06_func_1093435471(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_5 = true;

	_activatnvar_confusing_chararray_f[0x7] *= _activatnvar_confusing_LLUUID_4.mData[0x4];

}

void _activation_check_proc_06_func_1349798752(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_06_func_243411765(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x6] ^= _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_06_func_711214713(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_9 |= _activatnvar_confusing_int_a;

}

void _activation_check_proc_06_func_2047347384(unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 >>= _activatnvar_confusing_chararray_f[0x0];

	_activation_check_proc_06_func_711214713(_activatnvar_confusing_int_9, _activatnvar_confusing_int_a);
}

void _activation_check_proc_06_func_1012383185(char& _activatnvar_feat, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 *= _activatnvar_confusing_chararray_f[0x9];

	/* inline */ _activation_check_proc_06_func_1292976304(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_doaccount, _activatnvar_feat);
}

void _activation_check_proc_06_func_629967868(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1118750845(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c &= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_06_func_1866158659(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_06_func_68012287(int& _activatnvar_confusing_int_c, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

	_activation_check_proc_06_func_1866158659(_activatnvar_confusing_int_c);
}

void _activation_check_proc_06_func_1758586299(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1861517413(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] == 0x2) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_06_func_1294357435(char& _activatnvar_feat, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_iterator++;
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_06_func_1761154420(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_13837652(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_9[0xa] >>= _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_06_func_237134152(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xf;

}

void _activation_check_proc_06_func_203411539(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] >>= _activatnvar_confusing_chararray_5[0x4];

	_activation_check_proc_06_func_237134152(_activatnvar_confusing_int_9);
}

void _activation_check_proc_06_func_1386640374(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_06_func_377412874(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_1706531943(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("da6bb613-6abb-36b0-f7e7-0fe8350146c2");

}

void _activation_check_proc_06_func_135230355(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xb] != _activatnvar_confusing_char_f) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_06_func_1583561051(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_fscked;

}

void _activation_check_proc_06_func_670690049(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1583561051(_activatnvar_confusing_LLUUID_b, _activatnvar_fscked);
	_activation_check_proc_06_func_135230355(_activatnvar_confusing_bool_e, _activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_06_func_817644144();
}

void _activation_check_proc_06_func_1696957153(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_06_func_1313945709(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

	_activatnvar_confusing_U8_c ^= _activatnvar_confusing_chararray_9[0x0];

}

void _activation_check_proc_06_func_1778380274(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_06_func_399209715(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1171467977(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	
	/* inline */ _activation_check_proc_06_func_1449166633(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_06_func_195983791(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_06_func_1824372052(LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_06_func_782631595(_activatnvar_confusing_char_7, _activatnvar_so);
}

void _activation_check_proc_06_func_782631595(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_7 = _activatnvar_so.mData[0x4];

}

void _activation_check_proc_06_func_1606268825(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_701680754(_activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked);
	/* inline */ _activation_check_proc_06_func_973813389(_activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_06_func_701680754(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_813940083(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_3.mData[0x9] *= _activatnvar_confusing_LLUUID_0.mData[0x6];

}

void _activation_check_proc_06_func_668774214(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_6;

	/* inline */ _activation_check_proc_06_func_19762519(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	_activation_check_proc_06_func_813940083(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_06_func_1999477807(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_int_3++;

	_activation_check_proc_06_func_193726458(_activatnvar_confusing_bool_8, _activatnvar_doaccount);
	_activation_check_proc_06_func_679421069(_activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_06_func_193726458(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_doaccount;

}

void _activation_check_proc_06_func_679421069(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_06_func_1201525093(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_a[0x4] += _activatnvar_confusing_chararray_9[0x1];

}

void _activation_check_proc_06_func_1177647259(LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_c;

	_activation_check_proc_06_func_1139166584(_activatnvar_confusing_int_a);
}

void _activation_check_proc_06_func_1139166584(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_06_func_975633794(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_9, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_1)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_1980865303(_activatnvar_confusing_int_1, _activatnvar_confusing_int_9);
}

void _activation_check_proc_06_func_1980865303(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 |= _activatnvar_confusing_int_1;

}

void _activation_check_proc_06_func_1012104245(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_06_func_791815683(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_chararray_3[0x5];

	/* inline */ _activation_check_proc_06_func_1758621707(_activatnvar_confusing_int_b);
	_activation_check_proc_06_func_771649123(_activatnvar_lace, _activatnvar_fscked);
	_activation_check_proc_06_func_1845620483(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_06_func_1845620483(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_06_func_771649123(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_06_func_47635690(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("21c1dfc2-ce4e-e67e-8aff-a812418e49f1");

}

void _activation_check_proc_06_func_305554035(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] += _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_06_func_762398492(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	_activation_check_proc_06_func_305554035(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_06_func_95914739(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x7] *= _activatnvar_confusing_chararray_3[0x8];

}

void _activation_check_proc_06_func_1146834997(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_916687262()
{
	
	/* inline */ _activation_check_proc_06_func_79577510();
}

void _activation_check_proc_06_func_547683110(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_06_func_628465042(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 >>= _activatnvar_confusing_chararray_6[0x2];

	_activatnvar_confusing_U8_0 <<= 0xf;

}

void _activation_check_proc_06_func_540765946(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_06_func_321967799(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_06_func_1834363001(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_06_func_851085037(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0xb] += _activatnvar_confusing_LLUUID_d.mData[0xc];

}

void _activation_check_proc_06_func_272677516(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x6] &= _activatnvar_confusing_chararray_c[0x1];

}

void _activation_check_proc_06_func_1478840839(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("4864dfc3-bb76-6de2-cb58-6615bc31fb96");

}

void _activation_check_proc_06_func_1563125428(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] &= _activatnvar_confusing_LLUUID_1.mData[0x2];

}

void _activation_check_proc_06_func_588463730(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xf] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_06_func_1105460157(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_int_5 &= 0xff;

	_activation_check_proc_06_func_588463730(_activatnvar_confusing_bool_8, _activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_06_func_633336243(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_06_func_1663565204(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_06_func_1605725390(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	/* inline */ _activation_check_proc_06_func_2023140662(_activatnvar_confusing_int_2, _activatnvar_confusing_int_4);
}

void _activation_check_proc_06_func_1792513224(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1188849109(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_06_func_884559021(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_557652652(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_557652652(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1072114638(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_429831586(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_429831586(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1151683605(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_06_func_380308334(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_4[0xc] |= _activatnvar_confusing_chararray_6[0xe];

}

void _activation_check_proc_06_func_773838515(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_233454968(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_5)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x3] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_8;

	if(_activatnvar_confusing_LLUUID_1.mData[0x7] != _activatnvar_confusing_char_c) _activatnvar_confusing_bool_f = false;

	/* inline */ _activation_check_proc_06_func_219127165(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_b);
	_activation_check_proc_06_func_380308334(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_06_func_1515990772(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
	_activation_check_proc_06_func_773838515(_activatnvar_section2, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_1100481110(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_805545818(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activation_check_proc_06_func_1320070806(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_06_func_236240908(_activatnvar_t0);
}

void _activation_check_proc_06_func_1320070806(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_06_func_236240908(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_06_func_486445077(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t0, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_t1 &= _activatnvar_t0;
	/* inline */ _activation_check_proc_06_func_1620345246(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_06_func_1608726177(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_t0 |= 8;
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_06_func_154648537(char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_5 &= _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_06_func_547240579(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_861979399(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_a, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_char_e;

	_activatnvar_confusing_U8_0++;

	/* inline */ _activation_check_proc_06_func_854261244(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_a);
	_activation_check_proc_06_func_547240579(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_154648537(_activatnvar_confusing_char_5, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_06_func_173395602(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_7, char& _activatnvar_feat)
{
	_activatnvar_confusing_char_7++;

	/* inline */ _activation_check_proc_06_func_2125746933(_activatnvar_feat, _activatnvar_lace);
}

void _activation_check_proc_06_func_2110617544(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

	
}

void _activation_check_proc_06_func_72619700(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_c[0x5] = _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_06_func_363918462()
{
	
}

void _activation_check_proc_06_func_452111743(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x6] ^= _activatnvar_section2.mData[0x7];

	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_363918462();
	/* inline */ _activation_check_proc_06_func_1128433827(_activatnvar_confusing_chararray_f, _activatnvar_confusing_char_1);
}

void _activation_check_proc_06_func_1421323127(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_06_func_827033787(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_2056085607(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] <<= _activatnvar_name_digest[0x5];

}

void _activation_check_proc_06_func_499451225(char& _activatnvar_confusing_char_4, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_4 += 0x4;

}

void _activation_check_proc_06_func_800899385(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_6;

	_activatnvar_confusing_U8_f <<= _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_06_func_682768207(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_06_func_1864133992(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_652297873()
{
	
}

void _activation_check_proc_06_func_1800376370(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_06_func_831388413(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_chararray_6[0xb];

	_activation_check_proc_06_func_1137371463(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_06_func_501636877(_activatnvar_mac_digest, _activatnvar_confusing_chararray_4);
	_activation_check_proc_06_func_1800376370(_activatnvar_confusing_int_c);
}

void _activation_check_proc_06_func_501636877(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xd] &= _activatnvar_mac_digest[0x1];

}

void _activation_check_proc_06_func_1137371463(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x5] == 0x4) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_06_func_1043110395(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("3bc67870-5d70-fa7f-0224-3ce2de57ef06");

}

void _activation_check_proc_06_func_959009012(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_06_func_778475155(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_06_func_1622632277(_activatnvar_generic_iterator, _activatnvar_section1, _activatnvar_section2);
}

void _activation_check_proc_06_func_1067927724(int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_06_func_1102177705(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_int_4, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_06_func_1102177705(LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_0.mData[0x7] |= _activatnvar_confusing_chararray_b[0xb];

	_activatnvar_confusing_int_4 |= 0xb;

}

void _activation_check_proc_06_func_1957778622(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_2[0xa] >>= _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_06_func_235866891(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_06_func_1421490882(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("745486d7-1858-e2da-6a1c-37e662015686");

}

void _activation_check_proc_06_func_979151804(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0xc] ^= _activatnvar_so.mData[0x9];

}

void _activation_check_proc_06_func_232558120(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_char_7 = _activatnvar_code.mData[0x0];

	/* inline */ _activation_check_proc_06_func_1601803738(_activatnvar_confusing_int_5);
}

void _activation_check_proc_06_func_444116158()
{
	
}

void _activation_check_proc_06_func_425342962(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_d[0xe] ^= _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_06_func_232261511(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_d)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x4] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_06_func_425342962(_activatnvar_confusing_chararray_d, _activatnvar_fscked);
}

void _activation_check_proc_06_func_495569801(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_06_func_1543276703(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_06_func_2099328768(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_c;

}

void _activation_check_proc_06_func_391623302(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x8] *= _activatnvar_confusing_chararray_6[0xc];

}

void _activation_check_proc_06_func_814625213(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_06_func_1169807281(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x1] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_06_func_1626317332(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_7.mData[0xa] >>= _activatnvar_confusing_LLUUID_f.mData[0x8];

}

void _activation_check_proc_06_func_480279118(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_5.mData[0x4] <<= _activatnvar_confusing_LLUUID_6.mData[0x8];

}

void _activation_check_proc_06_func_1348329045(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_06_func_1720640925(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_fscked;

}

void _activation_check_proc_06_func_361096155(int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x8] >>= _activatnvar_confusing_chararray_5[0x9];

	_activation_check_proc_06_func_749991710(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_06_func_1400508132(_activatnvar_confusing_int_b);
}

void _activation_check_proc_06_func_1400508132(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_06_func_749991710(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_06_func_1924170770()
{
	
}

void _activation_check_proc_06_func_1469802496(int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_a[0x2] ^= _activatnvar_confusing_LLUUID_2.mData[0xf];

	/* inline */ _activation_check_proc_06_func_975710669(_activatnvar_confusing_int_1);
	_activation_check_proc_06_func_1924170770();
	_activation_check_proc_06_func_263335546(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_06_func_263335546(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x8] >>= _activatnvar_confusing_LLUUID_e.mData[0x4];

}

void _activation_check_proc_06_func_1145418564(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_06_func_461092260(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_LLUUID_5.mData[0xa];

	/* inline */ _activation_check_proc_06_func_2136952894(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_06_func_457352111(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_a)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x3] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_06_func_448137319(int& _activatnvar_confusing_int_d, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_d *= _activatnvar_confusing_U8_9;

	_activation_check_proc_06_func_1510956101(_activatnvar_confusing_int_d);
}

void _activation_check_proc_06_func_1510956101(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_06_func_287483033(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_e.mData[0x6] &= _activatnvar_confusing_LLUUID_9.mData[0x8];

	_activation_check_proc_06_func_603574085(_activatnvar_confusing_bool_b, _activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_06_func_2065369822(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_06_func_603574085(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x0] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_06_func_834512876(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_U8_b += _activatnvar_confusing_char_b;

	_activation_check_proc_06_func_344497718(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_344497718(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] |= _activatnvar_confusing_LLUUID_1.mData[0xb];

}

void _activation_check_proc_06_func_458974580(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_931698766(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xc] &= _activatnvar_confusing_LLUUID_4.mData[0xd];

}

void _activation_check_proc_06_func_1542955896(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_7)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_char_7 <<= 0xb;

}

void _activation_check_proc_06_func_727523043(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_06_func_1095345566(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	
	_activation_check_proc_06_func_727523043(_activatnvar_secret, _activatnvar_strbuf_0);
}

void _activation_check_proc_06_func_1495942980(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_06_func_333608236(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 >>= 0x6;

}

void _activation_check_proc_06_func_1785948751(int& _activatnvar_confusing_int_f, char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_a *= _activatnvar_confusing_chararray_6[0x8];

	_activation_check_proc_06_func_371517307(_activatnvar_confusing_int_f);
}

void _activation_check_proc_06_func_371517307(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_06_func_1881259956(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_c += _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_06_func_169344850(U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_d <<= _activatnvar_confusing_int_b;

	_activation_check_proc_06_func_1881259956(_activatnvar_confusing_U8_c, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_06_func_1589551277(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_7, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_char_7++;

	/* inline */ _activation_check_proc_06_func_698660943(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_b);
	/* inline */ _activation_check_proc_06_func_1814588241(_activatnvar_confusing_bool_9, _activatnvar_generic_bool_0);
}

void _activation_check_proc_06_func_182632588(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_lace;

	/* inline */ _activation_check_proc_06_func_225135806(_activatnvar_so, _activatnvar_t1, _activatnvar_pos);
}

void _activation_check_proc_06_func_1654928973(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_chararray_3[0x8];

}

void _activation_check_proc_06_func_483804097(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_06_func_137737081(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_06_func_1921039943(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] *= _activatnvar_ser_digest[0xc];

}

void _activation_check_proc_06_func_1805532040(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_420908292(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_06_func_1371138323(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

	/* inline */ _activation_check_proc_06_func_1039718003(_activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_06_func_761661273(_activatnvar_confusing_bool_a, _activatnvar_confusing_U8_2, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_06_func_1805532040(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_420908292(_activatnvar_confusing_U8_5, _activatnvar_confusing_U8_d);
	/* inline */ _activation_check_proc_06_func_647392714();
}

void _activation_check_proc_06_func_1322221622(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_06_func_592808264(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_06_func_1176314024(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0, int& _activatnvar_confusing_int_9, U8& _activatnvar_pos)
{
	_activatnvar_t0 |= 8;
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_06_func_1119552732(_activatnvar_confusing_int_9);
}

void _activation_check_proc_06_func_1119552732(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_06_func_1198177826(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1679128467(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_06_func_1557607660(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	
	_activation_check_proc_06_func_1679128467(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_06_func_993505934(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_2054313742(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_06_func_1051418802(_activatnvar_confusing_chararray_f, _activatnvar_confusing_char_6);
	_activation_check_proc_06_func_1535860362(_activatnvar_confusing_chararray_6, _activatnvar_mac_digest);
}

void _activation_check_proc_06_func_1535860362(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_6[0x7] += _activatnvar_mac_digest[0xb];

}

void _activation_check_proc_06_func_2054313742(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_424357026(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

	_activation_check_proc_06_func_1713940103(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_1713940103(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("d232393e-6f1b-4525-7d55-7ee4e1191857");

}

void _activation_check_proc_06_func_303615714(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1545170138(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1234669219(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b *= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_06_func_1036929012(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] <<= _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_06_func_412224341(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_b, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_06_func_1234669219(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_b);
	_activation_check_proc_06_func_1036929012(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_06_func_1253343354(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_6.mData[0xe] <<= _activatnvar_code.mData[0x7];

}

void _activation_check_proc_06_func_1569237914(int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_06_func_1751120453(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_06_func_1751120453(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_8[0x0] ^= _activatnvar_confusing_LLUUID_4.mData[0x1];

}

void _activation_check_proc_06_func_1834967401(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_0.mData[0x4] *= _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_06_func_37978942(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_5 >>= _activatnvar_confusing_int_9;

}

void _activation_check_proc_06_func_2081493932(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_772418412(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_104353209(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_3 *= 0x5;

	_activation_check_proc_06_func_2081493932(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
	_activation_check_proc_06_func_772418412(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_1095823908(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] = _activatnvar_confusing_LLUUID_5.mData[0x7];

}

void _activation_check_proc_06_func_1924975482(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_generic_iterator = 12;
	/* inline */ _activation_check_proc_06_func_2049176268();
	_activation_check_proc_06_func_1095823908(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_06_func_1680720927(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1726473997(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_06_func_1726473997(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_0[0x4] <<= _activatnvar_confusing_LLUUID_3.mData[0xa];

}

void _activation_check_proc_06_func_650249281(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("fffd3cc9-914b-6b37-402e-63d044cd8cc2");

	/* inline */ _activation_check_proc_06_func_1944375305(_activatnvar_confusing_chararray_d, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_06_func_1560983037(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x4] += _activatnvar_mac_digest[0x2];

}

void _activation_check_proc_06_func_1544390165(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1793290412(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_section2;

	_activation_check_proc_06_func_1544390165(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_06_func_681908534(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xe] != 0x0) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_06_func_1040612128()
{
	
}

void _activation_check_proc_06_func_1770164479(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_9;

	/* inline */ _activation_check_proc_06_func_650283709(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_06_func_1729040585(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a += 0x7;

	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_06_func_724708322(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_6, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_0;

	/* inline */ _activation_check_proc_06_func_988463474(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_1729040585(_activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_int_a);
}

void _activation_check_proc_06_func_1187546995(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_2 *= _activatnvar_confusing_char_d;

}

void _activation_check_proc_06_func_1991071998(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x6] = _activatnvar_confusing_chararray_3[0x4];

}

void _activation_check_proc_06_func_1236010402(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_06_func_753619965(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_06_func_1851776009(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 <<= _activatnvar_confusing_int_1;

}

void _activation_check_proc_06_func_1977073160(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_0 <<= 0xb;

}

void _activation_check_proc_06_func_2094115336(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_c += _activatnvar_confusing_char_f;

}

void _activation_check_proc_06_func_15043054(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_06_func_2040458420(char& _activatnvar_feat, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_06_func_744281644(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_06_func_1654714969(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x2] *= _activatnvar_mac_digest[0xf];

}

void _activation_check_proc_06_func_1488417138(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_section2;

	_activatnvar_confusing_int_f &= 0xff;

	_activation_check_proc_06_func_1654714969(_activatnvar_mac_digest, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_06_func_1666714961(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_06_func_1815885888(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_06_func_378960666(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_b.mData[0x3] *= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_06_func_727456490()
{
	
}

void _activation_check_proc_06_func_1940464156(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_06_func_2077873015(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_3, char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_d++;

	/* inline */ _activation_check_proc_06_func_166620568(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_char_f);
	/* inline */ _activation_check_proc_06_func_1687359658(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_5);
	_activation_check_proc_06_func_1940464156(_activatnvar_section1, _activatnvar_strbuf_0);
	_activation_check_proc_06_func_378960666(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_06_func_1815885888(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_7);
	_activation_check_proc_06_func_727456490();
}

void _activation_check_proc_06_func_1917264597()
{
	
}

void _activation_check_proc_06_func_1090323706(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("ada86e74-2e07-6f25-72f8-b3a1d9a82d40");

	_activation_check_proc_06_func_1917264597();
	/* inline */ _activation_check_proc_06_func_820354437(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_06_func_350727789(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x0] *= _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_06_func_1367817036(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_9[0x8] = _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_06_func_964200126(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_code, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("55d5947a-3242-c602-7a26-b7cfd072a4b9");

	_activatnvar_confusing_LLUUID_4.mData[0x3] ^= _activatnvar_code.mData[0x7];

	_activatnvar_confusing_LLUUID_a = LLUUID("35775e8c-cb41-1d72-90f4-b8bef1405191");

	_activation_check_proc_06_func_775502708(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_06_func_775502708(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_06_func_1146879068(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_a, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_4 += _activatnvar_confusing_char_a;

}

void _activation_check_proc_06_func_2018101887(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_06_func_221925805(int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

	_activation_check_proc_06_func_666281369(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_06_func_50779231(_activatnvar_confusing_bool_f, _activatnvar_confusing_char_4);
	_activation_check_proc_06_func_2018101887(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_0, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_06_func_666281369(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a += _activatnvar_confusing_int_a;

}

void _activation_check_proc_06_func_1850398024(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_920339297(unsigned char* _activatnvar_name_digest, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_06_func_1505599910(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x5] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_06_func_290874873(int& _activatnvar_confusing_int_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_1 = 0x4;

	_activation_check_proc_06_func_367058004(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_367058004(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1747903353(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a += 0xd;

}

void _activation_check_proc_06_func_901970162(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_U8_c++;

	if(_activatnvar_confusing_LLUUID_3.mData[0xb] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_06_func_320848563(char& _activatnvar_confusing_char_b, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 <<= 0xc;

	_activatnvar_confusing_char_b = 0xc;

}

void _activation_check_proc_06_func_310418008(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_e = _activatnvar_confusing_char_1;

}

void _activation_check_proc_06_func_1741479293(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1956567873(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x8] <<= _activatnvar_confusing_LLUUID_1.mData[0x1];

}

void _activation_check_proc_06_func_2143485541(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_06_func_1486102894(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a >>= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_06_func_1392648303(bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_e += _activatnvar_confusing_U8_6;

	_activation_check_proc_06_func_646400113(_activatnvar_confusing_bool_8, _activatnvar_confusing_char_9);
	/* inline */ _activation_check_proc_06_func_1923066520();
	/* inline */ _activation_check_proc_06_func_1728089714(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_06_func_646400113(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_9)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_9 >>= 0xe;

}

void _activation_check_proc_06_func_546336773(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_986452690(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_pos)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_2;

	_activation_check_proc_06_func_546336773(_activatnvar_pos);
}

void _activation_check_proc_06_func_1638137268(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_3, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_e;

	/* inline */ _activation_check_proc_06_func_59925339(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_06_func_415611375(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	_activation_check_proc_06_func_891755101(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
	/* inline */ _activation_check_proc_06_func_455331605(_activatnvar_confusing_char_3, _activatnvar_confusing_LLUUID_7, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_06_func_891755101(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1611271602(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e += 0x9;

}

void _activation_check_proc_06_func_824271002(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] *= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_06_func_1390673880(U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_06_func_1373395701(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_06_func_1270348779(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("3fe1bf93-b283-a2a2-09e7-43e9e8eac969");

}

void _activation_check_proc_06_func_1950294993(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_e;

	/* inline */ _activation_check_proc_06_func_2064675135();
	_activation_check_proc_06_func_1201626790(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_06_func_1201626790(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x8] >>= _activatnvar_confusing_chararray_3[0xe];

}

void _activation_check_proc_06_func_2119753968(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_06_func_1980065511(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_f, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_bool_a &= _activatnvar_generic_bool_0;

	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_06_func_810739630(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x8] >>= _activatnvar_confusing_chararray_2[0xc];

}

void _activation_check_proc_06_func_1156587949(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_06_func_690291092(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section2, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_1 &= 0xff;

	/* inline */ _activation_check_proc_06_func_1255090558(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_06_func_1204804046(_activatnvar_confusing_int_f);
	/* inline */ _activation_check_proc_06_func_354430137(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_f, _activatnvar_confusing_U8_d);
	_activation_check_proc_06_func_2074183904(_activatnvar_confusing_char_c);
}

void _activation_check_proc_06_func_2074183904(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c &= 0x2;

}

void _activation_check_proc_06_func_120556984(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_689503552(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_lace;

	_activation_check_proc_06_func_1801744832(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_06_func_218669147(_activatnvar_confusing_U8_7, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_06_func_1801744832(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_504651939(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_U8_e;

	/* inline */ _activation_check_proc_06_func_1246158165(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_06_func_1880039208(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c *= 0x0;

}

void _activation_check_proc_06_func_2046545828(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_8 = false;

	/* inline */ _activation_check_proc_06_func_179701399(_activatnvar_confusing_bool_6, _activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_598449110(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_06_func_160983605(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_2 <<= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_06_func_2125565520(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_3[0x0] ^= _activatnvar_confusing_LLUUID_a.mData[0xf];

	/* inline */ _activation_check_proc_06_func_1875061522(_activatnvar_confusing_LLUUID_3, _activatnvar_mac_digest);
}

void _activation_check_proc_06_func_1726047564(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_06_func_2122486028(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_06_func_1088479963(LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_LLUUID_2.mData[0xe];

}

void _activation_check_proc_06_func_1594099448(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_06_func_1868146871(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= 0x3;

	/* inline */ _activation_check_proc_06_func_287826744(_activatnvar_confusing_char_e, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_06_func_258272931(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_836197977(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_06_func_1500079128(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_7 |= _activatnvar_confusing_chararray_c[0x6];

}

void _activation_check_proc_06_func_846610206(LLUUID& _activatnvar_so, U8& _activatnvar_t0, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] |= _activatnvar_so.mData[_activatnvar_pos];
	_activation_check_proc_06_func_1500079128(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_06_func_1428819602(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_06_func_60143303(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1719800669(unsigned char* _activatnvar_confusing_chararray_5, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_5[0x5];

}

void _activation_check_proc_06_func_601454207(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_d[0x9] = _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_06_func_1585444894(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_7 <<= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_06_func_1963499589(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_2[0x3] = _activatnvar_code.mData[0x0];

	/* inline */ _activation_check_proc_06_func_1885814102(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_1908709959(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1790255349(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_1908709959(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_06_func_190723753(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_0);
	/* inline */ _activation_check_proc_06_func_336809891(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_06_func_2097937896(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xf] ^= _activatnvar_confusing_chararray_2[0xa];

}

void _activation_check_proc_06_func_286127556(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_2)
{
	
	_activation_check_proc_06_func_2097937896(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_06_func_686187509(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_06_func_1301049514(_activatnvar_confusing_LLUUID_d, _activatnvar_mac_digest);
}

void _activation_check_proc_06_func_1301049514(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] >>= _activatnvar_mac_digest[0xf];

}

void _activation_check_proc_06_func_1614316606(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_strbuf_0[0] = 118; _activatnvar_strbuf_0[0] ^= 78; _activatnvar_strbuf_0[1] = 47; _activatnvar_strbuf_0[1] ^= 77; _activatnvar_strbuf_0[2] = 78; _activatnvar_strbuf_0[2] ^= 45; _activatnvar_strbuf_0[3] = 10; _activatnvar_strbuf_0[3] ^= 63; _activatnvar_strbuf_0[4] = 109; _activatnvar_strbuf_0[4] ^= 89; _activatnvar_strbuf_0[5] = 66; _activatnvar_strbuf_0[5] ^= 118; _activatnvar_strbuf_0[6] = 17; _activatnvar_strbuf_0[6] ^= 35; _activatnvar_strbuf_0[7] = 111; _activatnvar_strbuf_0[7] ^= 90; _activatnvar_strbuf_0[8] = 95; _activatnvar_strbuf_0[8] ^= 114; _activatnvar_strbuf_0[9] = 44; _activatnvar_strbuf_0[9] ^= 28; _activatnvar_strbuf_0[10] = 75; _activatnvar_strbuf_0[10] ^= 122; _activatnvar_strbuf_0[11] = 26; _activatnvar_strbuf_0[11] ^= 44; _activatnvar_strbuf_0[12] = 37; _activatnvar_strbuf_0[12] ^= 21; _activatnvar_strbuf_0[13] = 70; _activatnvar_strbuf_0[13] ^= 107; _activatnvar_strbuf_0[14] = 122; _activatnvar_strbuf_0[14] ^= 74; _activatnvar_strbuf_0[15] = 28; _activatnvar_strbuf_0[15] ^= 44; _activatnvar_strbuf_0[16] = 49; _activatnvar_strbuf_0[16] ^= 9; _activatnvar_strbuf_0[17] = 84; _activatnvar_strbuf_0[17] ^= 102; _activatnvar_strbuf_0[18] = 120; _activatnvar_strbuf_0[18] ^= 85; _activatnvar_strbuf_0[19] = 7; _activatnvar_strbuf_0[19] ^= 52; _activatnvar_strbuf_0[20] = 55; _activatnvar_strbuf_0[20] ^= 5; _activatnvar_strbuf_0[21] = 24; _activatnvar_strbuf_0[21] ^= 40; _activatnvar_strbuf_0[22] = 109; _activatnvar_strbuf_0[22] ^= 95; _activatnvar_strbuf_0[23] = 127; _activatnvar_strbuf_0[23] ^= 82; _activatnvar_strbuf_0[24] = 23; _activatnvar_strbuf_0[24] ^= 116; _activatnvar_strbuf_0[25] = 38; _activatnvar_strbuf_0[25] ^= 30; _activatnvar_strbuf_0[26] = 68; _activatnvar_strbuf_0[26] ^= 116; _activatnvar_strbuf_0[27] = 65; _activatnvar_strbuf_0[27] ^= 115; _activatnvar_strbuf_0[28] = 119; _activatnvar_strbuf_0[28] ^= 71; _activatnvar_strbuf_0[29] = 11; _activatnvar_strbuf_0[29] ^= 57; _activatnvar_strbuf_0[30] = 22; _activatnvar_strbuf_0[30] ^= 47; _activatnvar_strbuf_0[31] = 21; _activatnvar_strbuf_0[31] ^= 37; _activatnvar_strbuf_0[32] = 41; _activatnvar_strbuf_0[32] ^= 25; _activatnvar_strbuf_0[33] = 101; _activatnvar_strbuf_0[33] ^= 93; _activatnvar_strbuf_0[34] = 60; _activatnvar_strbuf_0[34] ^= 12; _activatnvar_strbuf_0[35] = 73; _activatnvar_strbuf_0[35] ^= 123; _activatnvar_strbuf_0[36] = 0;
	_activation_check_proc_06_func_556455826(_activatnvar_confusing_bool_3, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_06_func_556455826(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0x2] != 0x4) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_06_func_1671318857(U8& _activatnvar_confusing_U8_b, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_U8_b++;

	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_06_func_285160342(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_06_func_1272840067(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x1] != 0x2) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_06_func_1697286440();
}

void _activation_check_proc_06_func_1697286440()
{
	
}

void _activation_check_proc_06_func_1726299192(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1200471169(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_06_func_534366346(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_06_func_2052123065(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_06_func_644390668(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_06_func_561073053(unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_3, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_chararray_1[0x0];

	_activation_check_proc_06_func_644390668(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_1378310502(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xf] >>= _activatnvar_so.mData[0xe];

}

void _activation_check_proc_06_func_820701790(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 <<= _activatnvar_confusing_int_9;

}

void _activation_check_proc_06_func_768546850(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_8 &= _activatnvar_confusing_chararray_0[0xb];

}

void _activation_check_proc_06_func_1999836411(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_2, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_char_8 = _activatnvar_confusing_char_2;

}

void _activation_check_proc_06_func_373072463(int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_a[0x7] *= _activatnvar_confusing_chararray_2[0x7];

	_activation_check_proc_06_func_1999836411(_activatnvar_confusing_char_8, _activatnvar_confusing_char_2, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_06_func_1629668902(_activatnvar_confusing_int_3);
}

void _activation_check_proc_06_func_436768486(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
	/* inline */ _activation_check_proc_06_func_2055358984(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_06_func_902476774(_activatnvar_t0);
	/* inline */ _activation_check_proc_06_func_115956346(_activatnvar_t0);
}

void _activation_check_proc_06_func_50626603(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x9] = _activatnvar_secret.mData[0x7];

}

void _activation_check_proc_06_func_1394889718(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_generic_bool_0;

	/* inline */ _activation_check_proc_06_func_946191796(_activatnvar_confusing_bool_5, _activatnvar_confusing_U8_1, _activatnvar_confusing_char_4);
}

void _activation_check_proc_06_func_473554684(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activatnvar_pos |= 8;
}

void _activation_check_proc_06_func_1051559062(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_06_func_1018671330(char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 *= _activatnvar_confusing_char_6;

}

void _activation_check_proc_06_func_878926350(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_e)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_a = false;

	/* inline */ _activation_check_proc_06_func_1281427710(_activatnvar_confusing_char_e, _activatnvar_doaccount);
}

void _activation_check_proc_06_func_1508484598(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_0[0x1] = _activatnvar_confusing_chararray_9[0xc];

}

void _activation_check_proc_06_func_1098366555(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
	/* inline */ _activation_check_proc_06_func_1162324798(_activatnvar_strbuf_0);
}

void _activation_check_proc_06_func_828204485(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_06_func_836288206(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_7[0x5] = _activatnvar_confusing_chararray_a[0x5];

}

void _activation_check_proc_06_func_1440036710(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_LLUUID_7.mData[0x2] <<= _activatnvar_confusing_LLUUID_1.mData[0x1];

	_activation_check_proc_06_func_836288206(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_06_func_1956578539(_activatnvar_confusing_U8_4, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_06_func_1821606022(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b >>= 0x8;

}

void _activation_check_proc_06_func_1342029550(int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_06_func_1821606022(_activatnvar_confusing_int_b);
}

void _activation_check_proc_06_func_1003936197(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_char_3;

}

void _activation_check_proc_06_func_1133205191(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

	_activation_check_proc_06_func_11312940(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_06_func_11312940(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_5[0xc] += _activatnvar_confusing_LLUUID_0.mData[0x6];

}

void _activation_check_proc_06_func_1001576133()
{
	
}

void _activation_check_proc_06_func_679715753(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_06_func_1935175551()
{
	
}

void _activation_check_proc_06_func_1219053355(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_06_func_1660767335(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_LLUUID_9.mData[0xc] = _activatnvar_confusing_LLUUID_4.mData[0xf];

}

void _activation_check_proc_06_func_1191759728(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_chararray_0[0x8];

}

void _activation_check_proc_06_func_50485029(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x4] &= _activatnvar_confusing_chararray_c[0xa];

}

void _activation_check_proc_06_func_759779138(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_06_func_48583131(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_06_func_491459395(U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_d, U8& _activatnvar_pos)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_char_d *= 0x6;

	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_1 *= _activatnvar_t1;

	_activation_check_proc_06_func_679076630(_activatnvar_lace, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_06_func_2083925323(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_06_func_679076630(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_lace;

}

void _activation_check_proc_06_func_133005614(char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x7] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_a = false;

	/* inline */ _activation_check_proc_06_func_2105064069(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_06_func_2125431932(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_06_func_1077623709(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_0 <<= _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_06_func_638678484(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] += _activatnvar_confusing_chararray_d[0x1];

}

void _activation_check_proc_06_func_293244920(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_291423559(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

	/* inline */ _activation_check_proc_06_func_155551710(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_f, _activatnvar_confusing_bool_7, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_06_func_1947182842(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_638678484(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_06_func_293244920(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
	_activation_check_proc_06_func_1077623709(_activatnvar_confusing_char_0, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_06_func_851120432(_activatnvar_confusing_U8_9, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_06_func_108046981(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_c += 0xd;

}

void _activation_check_proc_06_func_1593481461(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c += _activatnvar_confusing_int_c;

}

void _activation_check_proc_06_func_254836886(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_06_func_149306561(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_06_func_1868359115(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1988623682(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_06_func_1767304816(unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
	_activation_check_proc_06_func_1007401273(_activatnvar_confusing_int_3, _activatnvar_confusing_int_5);
}

void _activation_check_proc_06_func_1007401273(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= _activatnvar_confusing_int_3;

}

void _activation_check_proc_06_func_278652731(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1094291175(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	
	/* inline */ _activation_check_proc_06_func_781333216(_activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_06_func_640654626(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_278652731(_activatnvar_combined_id, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_06_func_711840300(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_06_func_683436304(_activatnvar_confusing_int_2);
}

void _activation_check_proc_06_func_683436304(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_06_func_1462698735(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("ca3be5ab-34f0-aca9-7848-7b47da33ade6");

}

void _activation_check_proc_06_func_2018770308(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_06_func_1236893206(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] &= _activatnvar_confusing_LLUUID_5.mData[0xd];

	/* inline */ _activation_check_proc_06_func_383473298(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_char_4);
}

void _activation_check_proc_06_func_898403720(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_06_func_438627964(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_9[0x1] &= _activatnvar_code.mData[0xf];

}

void _activation_check_proc_06_func_1519943810(bool& _activatnvar_confusing_bool_0, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("5fb09713-8fcc-b0bd-4d2e-e652d47539b1");

	/* inline */ _activation_check_proc_06_func_631369237(_activatnvar_confusing_char_3, _activatnvar_confusing_bool_0, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_f, _activatnvar_confusing_chararray_e);
	_activation_check_proc_06_func_640463137(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_06_func_640463137(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_06_func_1533379440(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_06_func_1259080431(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_so;

}

void _activation_check_proc_06_func_887955526(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 46; _activatnvar_strbuf_0[0] ^= 111; _activatnvar_strbuf_0[1] = 56; _activatnvar_strbuf_0[1] ^= 91; _activatnvar_strbuf_0[2] = 29; _activatnvar_strbuf_0[2] ^= 105; _activatnvar_strbuf_0[3] = 35; _activatnvar_strbuf_0[3] ^= 74; _activatnvar_strbuf_0[4] = 22; _activatnvar_strbuf_0[4] ^= 96; _activatnvar_strbuf_0[5] = 0; _activatnvar_strbuf_0[5] ^= 97; _activatnvar_strbuf_0[6] = 3; _activatnvar_strbuf_0[6] ^= 119; _activatnvar_strbuf_0[7] = 19; _activatnvar_strbuf_0[7] ^= 122; _activatnvar_strbuf_0[8] = 49; _activatnvar_strbuf_0[8] ^= 94; _activatnvar_strbuf_0[9] = 59; _activatnvar_strbuf_0[9] ^= 85; _activatnvar_strbuf_0[10] = 105; _activatnvar_strbuf_0[10] ^= 42; _activatnvar_strbuf_0[11] = 115; _activatnvar_strbuf_0[11] ^= 28; _activatnvar_strbuf_0[12] = 11; _activatnvar_strbuf_0[12] ^= 111; _activatnvar_strbuf_0[13] = 72; _activatnvar_strbuf_0[13] ^= 45; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_06_func_233287784(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_0 &= _activatnvar_confusing_LLUUID_2.mData[0x3];

	/* inline */ _activation_check_proc_06_func_498123806(_activatnvar_confusing_U8_b, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_06_func_61967439(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_3[0x7] >>= _activatnvar_confusing_LLUUID_9.mData[0xa];

}

void _activation_check_proc_06_func_1027929262(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] *= _activatnvar_confusing_chararray_0[0xa];

	_activatnvar_confusing_chararray_a[0xf] *= _activatnvar_confusing_chararray_3[0x8];

}

void _activation_check_proc_06_func_336456484(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] ^= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_06_func_474821998(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_fscked;

}

void _activation_check_proc_06_func_643277060()
{
	
}

void _activation_check_proc_06_func_752375196(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_06_func_1079568216(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activation_check_proc_06_func_474821998(_activatnvar_fscked, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_06_func_1339180802(_activatnvar_confusing_U8_c, _activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_06_func_1609710669(_activatnvar_so, _activatnvar_section1);
	_activation_check_proc_06_func_752375196(_activatnvar_confusing_int_8);
	_activation_check_proc_06_func_643277060();
}

void _activation_check_proc_06_func_851266353(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xe] != 0x6) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_06_func_222091755(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xd] != 0xc) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_06_func_1355439486(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_06_func_851266353(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_06_func_222091755(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_06_func_2096623512(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_775264251(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1967530584(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1311883516(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_d[0x8] |= _activatnvar_fscked.mData[0x4];

	
	_activation_check_proc_06_func_2096623512(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_06_func_1497327932(_activatnvar_confusing_char_6);
	/* inline */ _activation_check_proc_06_func_914001162(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_0);
	_activation_check_proc_06_func_1967530584(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	_activation_check_proc_06_func_775264251(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_440945492(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1851705254(U8& _activatnvar_t0, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_1.mData[0x9] >>= _activatnvar_name_digest[0x4];

	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_LLUUID_4.mData[0xc] >>= _activatnvar_section1.mData[0x7];

}

void _activation_check_proc_06_func_432017963(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_e;

	/* inline */ _activation_check_proc_06_func_858942115(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
}

void _activation_check_proc_06_func_485363722(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_6[0x5] <<= _activatnvar_confusing_chararray_3[0x2];

}

void _activation_check_proc_06_func_1124080320(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_06_func_1428524522(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_06_func_3554249(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_3554249(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1455448098(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_4[0x9] >>= _activatnvar_confusing_LLUUID_b.mData[0xf];

}

void _activation_check_proc_06_func_1076312525(LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_f;

	_activation_check_proc_06_func_1455448098(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_06_func_844289183(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_06_func_422571706(_activatnvar_confusing_U8_c, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_06_func_174163292(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_c.mData[0x7] |= _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_06_func_118986954(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_c ^= _activatnvar_confusing_int_5;

	_activation_check_proc_06_func_438874042(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_U8_a, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_06_func_438874042(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_a &= _activatnvar_confusing_LLUUID_1.mData[0x4];

	_activatnvar_confusing_LLUUID_c = LLUUID("c2e7b749-1c9b-ef2f-08f0-e9bae2bf8403");

}

void _activation_check_proc_06_func_612778764(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_1841027412(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_9.mData[0x7] += _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_06_func_452931785(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_b ^= 0xd;

}

void _activation_check_proc_06_func_312145072(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_06_func_1813368481(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_int_8 = _activatnvar_confusing_int_c;

	_activation_check_proc_06_func_2036798628(_activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_06_func_1649533504(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_06_func_2036798628(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_06_func_1382709279(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xd] <<= _activatnvar_confusing_chararray_7[0xf];

}

void _activation_check_proc_06_func_1590297955(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_char_8;

}

void _activation_check_proc_06_func_63893575(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_1 *= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_06_func_1357532428(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_06_func_708608068(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_2082408260(char* _activatnvar_strbuf_0, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_06_func_439167790(_activatnvar_strbuf_0);
}

void _activation_check_proc_06_func_439167790(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 5; _activatnvar_strbuf_0[0] ^= 51; _activatnvar_strbuf_0[1] = 127; _activatnvar_strbuf_0[1] ^= 79; _activatnvar_strbuf_0[2] = 59; _activatnvar_strbuf_0[2] ^= 15; _activatnvar_strbuf_0[3] = 3; _activatnvar_strbuf_0[3] ^= 50; _activatnvar_strbuf_0[4] = 100; _activatnvar_strbuf_0[4] ^= 87; _activatnvar_strbuf_0[5] = 40; _activatnvar_strbuf_0[5] ^= 75; _activatnvar_strbuf_0[6] = 58; _activatnvar_strbuf_0[6] ^= 10; _activatnvar_strbuf_0[7] = 11; _activatnvar_strbuf_0[7] ^= 57; _activatnvar_strbuf_0[8] = 99; _activatnvar_strbuf_0[8] ^= 78; _activatnvar_strbuf_0[9] = 101; _activatnvar_strbuf_0[9] ^= 85; _activatnvar_strbuf_0[10] = 42; _activatnvar_strbuf_0[10] ^= 24; _activatnvar_strbuf_0[11] = 25; _activatnvar_strbuf_0[11] ^= 45; _activatnvar_strbuf_0[12] = 68; _activatnvar_strbuf_0[12] ^= 114; _activatnvar_strbuf_0[13] = 85; _activatnvar_strbuf_0[13] ^= 120; _activatnvar_strbuf_0[14] = 22; _activatnvar_strbuf_0[14] ^= 38; _activatnvar_strbuf_0[15] = 119; _activatnvar_strbuf_0[15] ^= 71; _activatnvar_strbuf_0[16] = 32; _activatnvar_strbuf_0[16] ^= 19; _activatnvar_strbuf_0[17] = 46; _activatnvar_strbuf_0[17] ^= 30; _activatnvar_strbuf_0[18] = 58; _activatnvar_strbuf_0[18] ^= 23; _activatnvar_strbuf_0[19] = 94; _activatnvar_strbuf_0[19] ^= 108; _activatnvar_strbuf_0[20] = 59; _activatnvar_strbuf_0[20] ^= 10; _activatnvar_strbuf_0[21] = 8; _activatnvar_strbuf_0[21] ^= 56; _activatnvar_strbuf_0[22] = 67; _activatnvar_strbuf_0[22] ^= 122; _activatnvar_strbuf_0[23] = 49; _activatnvar_strbuf_0[23] ^= 28; _activatnvar_strbuf_0[24] = 120; _activatnvar_strbuf_0[24] ^= 64; _activatnvar_strbuf_0[25] = 8; _activatnvar_strbuf_0[25] ^= 48; _activatnvar_strbuf_0[26] = 84; _activatnvar_strbuf_0[26] ^= 97; _activatnvar_strbuf_0[27] = 45; _activatnvar_strbuf_0[27] ^= 28; _activatnvar_strbuf_0[28] = 80; _activatnvar_strbuf_0[28] ^= 100; _activatnvar_strbuf_0[29] = 54; _activatnvar_strbuf_0[29] ^= 15; _activatnvar_strbuf_0[30] = 117; _activatnvar_strbuf_0[30] ^= 69; _activatnvar_strbuf_0[31] = 114; _activatnvar_strbuf_0[31] ^= 19; _activatnvar_strbuf_0[32] = 109; _activatnvar_strbuf_0[32] ^= 14; _activatnvar_strbuf_0[33] = 85; _activatnvar_strbuf_0[33] ^= 109; _activatnvar_strbuf_0[34] = 4; _activatnvar_strbuf_0[34] ^= 97; _activatnvar_strbuf_0[35] = 25; _activatnvar_strbuf_0[35] ^= 42; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_06_func_399472040(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_2 = _activatnvar_confusing_U8_7;

	/* inline */ _activation_check_proc_06_func_417035287(_activatnvar_confusing_bool_6, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_06_func_1244014336(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_06_func_1982966616(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_d &= _activatnvar_confusing_int_9;

}

void _activation_check_proc_06_func_151034617(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_code;

}

void _activation_check_proc_06_func_2042038300(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b += 0x0;

}

void _activation_check_proc_06_func_257138836(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_06_func_1767657217(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x8] <<= _activatnvar_so.mData[0xc];

}

void _activation_check_proc_06_func_222645435(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_06_func_798176121(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_06_func_1027410083(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_6 = false;

	/* inline */ _activation_check_proc_06_func_1464541088(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_3, _activatnvar_confusing_char_7);
	/* inline */ _activation_check_proc_06_func_1992022463(_activatnvar_confusing_LLUUID_a, _activatnvar_secret);
	/* inline */ _activation_check_proc_06_func_1514844045(_activatnvar_confusing_char_d);
}

void _activation_check_proc_06_func_1526822950(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("01d18871-7321-ffff-4b96-a513116fca00");

}

void _activation_check_proc_06_func_1225099187(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1402690851(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_06_func_1065803071(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_06_func_574435272(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 += _activatnvar_confusing_U8_5;

	_activation_check_proc_06_func_1065803071(_activatnvar_t1, _activatnvar_t0);
}

void _activation_check_proc_06_func_1033555258(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_e;

	_activatnvar_confusing_char_e++;

	/* inline */ _activation_check_proc_06_func_1007226598(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_06_func_1954405275(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] <<= _activatnvar_confusing_LLUUID_f.mData[0x8];

}

void _activation_check_proc_06_func_2117419800(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_int_f &= 0xff;

	/* inline */ _activation_check_proc_06_func_1143776688(_activatnvar_generic_iterator);
	_activation_check_proc_06_func_1954405275(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_06_func_975315093()
{
	
}

void _activation_check_proc_06_func_315836318(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("79331041-02da-6559-6fd3-7df6f2f5d31a");

}

void _activation_check_proc_06_func_651357566(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	
	_activation_check_proc_06_func_1433845727(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_06_func_1433845727(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x5] <<= _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_06_func_1941528404(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] &= _activatnvar_confusing_LLUUID_c.mData[0xc];

}

void _activation_check_proc_06_func_1528418179(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_06_func_1316878487(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_896265170(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_06_func_350098964(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x4] == _activatnvar_confusing_char_3) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_0;

}

void _activation_check_proc_06_func_660079440(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_3[0x6] = _activatnvar_so.mData[0xb];

}

void _activation_check_proc_06_func_578974705(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	_activatnvar_confusing_LLUUID_5.mData[0x7] += _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_06_func_992589065(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	
}

void _activation_check_proc_06_func_1875753068(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_secret;

}

void _activation_check_proc_06_func_1532751801(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xd] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_8;

	_activation_check_proc_06_func_1527382782(_activatnvar_confusing_U8_9, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_06_func_1527382782(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_9 <<= 0x0;

}

void _activation_check_proc_06_func_641876068(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_06_func_2088501125(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_06_func_790264990(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_chararray_2[0x9];

}

void _activation_check_proc_06_func_854733443(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_06_func_150531932(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_06_func_291952390(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_d)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_d >>= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_06_func_1804209776(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0, U8& _activatnvar_pos, int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	/* inline */ _activation_check_proc_06_func_63225458(_activatnvar_confusing_int_5);
	_activation_check_proc_06_func_198122516(_activatnvar_t1, _activatnvar_pos, _activatnvar_so);
	_activation_check_proc_06_func_698229958(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_06_func_698229958(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_06_func_198122516(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_06_func_1977273616(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1863643448(bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_4)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_4 <<= 0x9;

}

void _activation_check_proc_06_func_83840553(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_641550990(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_06_func_705586940(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("5ebdf388-26d2-d61f-9e10-f78191237e28");

	_activatnvar_confusing_LLUUID_7.mData[0x3] |= _activatnvar_name_digest[0x2];

	_activation_check_proc_06_func_1014380645(_activatnvar_confusing_U8_3, _activatnvar_confusing_U8_b, _activatnvar_confusing_bool_c);
	_activation_check_proc_06_func_1418094319(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_06_func_1014380645(U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_3 *= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_06_func_1418094319(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_711428201(LLUUID& _activatnvar_section2, char* _activatnvar_strbuf_0)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_06_func_1102534963(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_06_func_1769921128(_activatnvar_generic_iterator);
}

void _activation_check_proc_06_func_252705367(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_06_func_831278369(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_8[0x4] += _activatnvar_section2.mData[0xe];

}

void _activation_check_proc_06_func_636816282(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_06_func_2136730749(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_int_d *= _activatnvar_confusing_int_6;

	_activation_check_proc_06_func_385325687(_activatnvar_t0, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_06_func_1950792839(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_06_func_385325687(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_06_func_1288148845(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_06_func_1748036752(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("0611a139-17f1-9d01-7d2d-41322d602d43");

	_activation_check_proc_06_func_1288148845(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_feat, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_06_func_1531778724(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_06_func_100299201(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1111542638(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_0.mData[0xc];

}

void _activation_check_proc_06_func_379208950(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_06_func_1081937564(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("faec2a91-f2ea-25ad-70f3-84e81aafb7e1");

}

void _activation_check_proc_06_func_1641550364()
{
	
}

void _activation_check_proc_06_func_2065810354(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_d++;

	/* inline */ _activation_check_proc_06_func_757001950(_activatnvar_confusing_LLUUID_5, _activatnvar_combined_id);
	_activation_check_proc_06_func_626871777(_activatnvar_confusing_U8_1, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_06_func_1641550364();
}

void _activation_check_proc_06_func_626871777(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_06_func_471519749(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_06_func_1236070732(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_06_func_1465731258(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] ^= _activatnvar_confusing_LLUUID_4.mData[0x7];

}

void _activation_check_proc_06_func_844164639(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xd] = _activatnvar_section2.mData[0x9];

}

void _activation_check_proc_06_func_2053984094(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_06_func_260840653(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

	_activation_check_proc_06_func_282604453(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_06_func_282604453(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_d.mData[0xa] &= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_06_func_929854452(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, int& _activatnvar_confusing_int_a)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[15];
	_activation_check_proc_06_func_1881437254(_activatnvar_t0);
	_activation_check_proc_06_func_749148566(_activatnvar_confusing_int_a);
}

void _activation_check_proc_06_func_1881437254(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_06_func_749148566(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_06_func_138137274(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_8[0x0] &= _activatnvar_fscked.mData[0x9];

}

void _activation_check_proc_06_func_1214728655(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_0 = false;

	_activatnvar_t0 &= 7;
}

void _activation_check_proc_06_func_206776665(std::string& _activatnvar_fullname, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_9 |= _activatnvar_section1.mData[0xe];

	_activation_check_proc_06_func_1019806897(_activatnvar_fullname);
}

void _activation_check_proc_06_func_1019806897(std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
}

void _activation_check_proc_06_func_1981580789(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_06_func_1376015434(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_06_func_1241974497(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_06_func_1387580067(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_4;

	_activation_check_proc_06_func_1241974497(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_lace);
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
