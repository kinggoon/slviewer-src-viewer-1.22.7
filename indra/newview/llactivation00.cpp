// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation00.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 00

void _activation_check_proc_00_func_382058426(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x1] |= _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_00_func_1273260083(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1196201467(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_6 = _activatnvar_fscked.mData[0x9];

	/* inline */ _activation_check_proc_00_func_2095680623(_activatnvar_confusing_U8_b, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_00_func_673094141(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_U8_4 >>= _activatnvar_confusing_char_e;

	_activation_check_proc_00_func_1408104190(_activatnvar_pos);
	_activation_check_proc_00_func_511097332(_activatnvar_lace, _activatnvar_confusing_chararray_3);
	_activation_check_proc_00_func_1416057403(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_00_func_1416057403(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 >>= 0x9;

}

void _activation_check_proc_00_func_511097332(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x4] &= _activatnvar_lace.mData[0x5];

}

void _activation_check_proc_00_func_1408104190(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_00_func_1852301313(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_00_func_150884113(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xe] *= _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_00_func_737441145(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

	/* inline */ _activation_check_proc_00_func_793045384(_activatnvar_confusing_int_5);
}

void _activation_check_proc_00_func_93424085(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_chararray_b[0x5];

}

void _activation_check_proc_00_func_995266617(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] |= _activatnvar_combined_id.mData[0x4];

}

void _activation_check_proc_00_func_1338837678(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_00_func_679384687(_activatnvar_pos, _activatnvar_combined_id);
}

void _activation_check_proc_00_func_679384687(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_00_func_817482776(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_00_func_1575778226(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_00_func_1311698190(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_d[0x8] <<= _activatnvar_confusing_LLUUID_d.mData[0xc];

}

void _activation_check_proc_00_func_1174576641(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x3] != 0x9) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_00_func_1999093961(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_00_func_1999093961(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_92356862(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("efedb017-d93f-6ac6-655c-9929902cb98e");

	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_00_func_401559858(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_927140160(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_00_func_401559858(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_ser_digest);
}

void _activation_check_proc_00_func_1156547473(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_616354483(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_00_func_2046802888(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_6.mData[0x5] >>= _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_00_func_2088853165(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_d;

	/* inline */ _activation_check_proc_00_func_960316077(_activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_00_func_71404389(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_00_func_1913599308(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_00_func_761816804(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_00_func_799064724(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_00_func_258042484(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_LLUUID_2.mData[0xa];

}

void _activation_check_proc_00_func_1236423295(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_8[0x5] >>= _activatnvar_confusing_LLUUID_c.mData[0x8];

}

void _activation_check_proc_00_func_390263361(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0++;

}

void _activation_check_proc_00_func_1997400484(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_00_func_2022879434(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_0)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x0] == _activatnvar_confusing_char_0) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_00_func_1529170854(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
	/* inline */ _activation_check_proc_00_func_61321822(_activatnvar_t0);
}

void _activation_check_proc_00_func_1583915225(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("e6a59210-ce91-e54a-4963-ae88deb60f13");

}

void _activation_check_proc_00_func_558470119(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_00_func_2067356593(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_d;

	_activation_check_proc_00_func_558470119(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_00_func_387814873(LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_c = 0x2;

	_activation_check_proc_00_func_267102718(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
	_activation_check_proc_00_func_523197629(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_523197629(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_267102718(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_42303467(LLMD5*& _activatnvar_mmd5, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
	_activation_check_proc_00_func_1491726334(_activatnvar_confusing_int_1);
	_activation_check_proc_00_func_1728946389(_activatnvar_confusing_chararray_f, _activatnvar_lace);
}

void _activation_check_proc_00_func_1728946389(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_f[0x2] &= _activatnvar_lace.mData[0x4];

}

void _activation_check_proc_00_func_1491726334(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_00_func_990867380(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = _activatnvar_section1.mData[0xb];

	_activation_check_proc_00_func_71711141(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_00_func_71711141(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xf] |= _activatnvar_confusing_chararray_d[0x0];

}

void _activation_check_proc_00_func_1751352353(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_00_func_2135309272(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_00_func_894204603(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1180852541(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_e[0x9] <<= _activatnvar_name_digest[0x2];

	
}

void _activation_check_proc_00_func_1506601288(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_00_func_1745663175(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_a, char& _activatnvar_feat, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_a |= _activatnvar_confusing_char_b;

	/* inline */ _activation_check_proc_00_func_348351404(_activatnvar_feat, _activatnvar_confusing_char_0);
	_activation_check_proc_00_func_1506601288(_activatnvar_confusing_U8_b);
	_activation_check_proc_00_func_275085991(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_275085991(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1855224515(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xf] == 0x1) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_00_func_1337387528(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_U8_9;

}

void _activation_check_proc_00_func_256323192(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_00_func_1807762726(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_6 ^= _activatnvar_confusing_chararray_c[0x4];

}

void _activation_check_proc_00_func_2009636500(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e >>= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_00_func_1979812177(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_00_func_298148996(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_00_func_2000649694(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("deaa5329-18e4-0932-1854-62f2d34b87a5");

}

void _activation_check_proc_00_func_726164924(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_8.mData[0x3];

}

void _activation_check_proc_00_func_475100921(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xe] &= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_00_func_1365360280(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] += _activatnvar_confusing_chararray_6[0x6];

}

void _activation_check_proc_00_func_1784024717(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_00_func_867666974(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_char_c;

}

void _activation_check_proc_00_func_1232094743(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("62dc78bd-caf4-e201-afd8-5cee37240458");

}

void _activation_check_proc_00_func_331037234(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_00_func_294472834(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_00_func_939849221(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_00_func_263838398(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

	/* inline */ _activation_check_proc_00_func_1882430493(_activatnvar_confusing_int_5);
}

void _activation_check_proc_00_func_263260453()
{
	
}

void _activation_check_proc_00_func_1292853669(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_00_func_1668624607(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1821835813()
{
	
}

void _activation_check_proc_00_func_1251592093(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_00_func_1879725278(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] *= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_00_func_1973756169(unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_5)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xf] == _activatnvar_confusing_char_5) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_00_func_1879725278(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_00_func_468957229(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_00_func_513350086(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_00_func_468957229(_activatnvar_t0);
}

void _activation_check_proc_00_func_1873343335(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_2109933934(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("4cb0a4ac-3fa1-915d-16ae-9e8e13aeb77f");

}

void _activation_check_proc_00_func_1258005180(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_chararray_7[0x9];

	_activation_check_proc_00_func_2109933934(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_00_func_347800799(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 *= 0xc;

	_activation_check_proc_00_func_1649181903(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_int_b, _activatnvar_secret);
}

void _activation_check_proc_00_func_1649181903(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_secret;

	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_00_func_612026578()
{
	
}

void _activation_check_proc_00_func_249415631(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_218781436(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xc] += _activatnvar_section1.mData[0x0];

	/* inline */ _activation_check_proc_00_func_1479654186(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_886050639(char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_00_func_106943926(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x6] &= _activatnvar_name_digest[0x2];

}

void _activation_check_proc_00_func_1851955874(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_00_func_1719330450(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] &= _activatnvar_confusing_chararray_c[0x6];

	/* inline */ _activation_check_proc_00_func_1333757267(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_00_func_175482150(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x0] == 0x4) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_00_func_713610544(_activatnvar_confusing_int_5);
	/* inline */ _activation_check_proc_00_func_811782301(_activatnvar_confusing_LLUUID_0, _activatnvar_secret);
	/* inline */ _activation_check_proc_00_func_2030508262(_activatnvar_confusing_LLUUID_c);
	_activation_check_proc_00_func_985819137(_activatnvar_confusing_int_5);
}

void _activation_check_proc_00_func_985819137(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_00_func_1928575964(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a ^= 0x2;

}

void _activation_check_proc_00_func_1739282983(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_a[0x3] |= _activatnvar_so.mData[0xd];

}

void _activation_check_proc_00_func_1019030516(unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 = _activatnvar_confusing_int_3;

	_activation_check_proc_00_func_1739282983(_activatnvar_confusing_chararray_a, _activatnvar_so);
}

void _activation_check_proc_00_func_1143295955(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 127; _activatnvar_strbuf_0[0] ^= 62; _activatnvar_strbuf_0[1] = 9; _activatnvar_strbuf_0[1] ^= 106; _activatnvar_strbuf_0[2] = 53; _activatnvar_strbuf_0[2] ^= 65; _activatnvar_strbuf_0[3] = 19; _activatnvar_strbuf_0[3] ^= 122; _activatnvar_strbuf_0[4] = 83; _activatnvar_strbuf_0[4] ^= 37; _activatnvar_strbuf_0[5] = 28; _activatnvar_strbuf_0[5] ^= 125; _activatnvar_strbuf_0[6] = 7; _activatnvar_strbuf_0[6] ^= 115; _activatnvar_strbuf_0[7] = 63; _activatnvar_strbuf_0[7] ^= 86; _activatnvar_strbuf_0[8] = 1; _activatnvar_strbuf_0[8] ^= 110; _activatnvar_strbuf_0[9] = 126; _activatnvar_strbuf_0[9] ^= 16; _activatnvar_strbuf_0[10] = 26; _activatnvar_strbuf_0[10] ^= 89; _activatnvar_strbuf_0[11] = 82; _activatnvar_strbuf_0[11] ^= 61; _activatnvar_strbuf_0[12] = 52; _activatnvar_strbuf_0[12] ^= 80; _activatnvar_strbuf_0[13] = 16; _activatnvar_strbuf_0[13] ^= 117; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_00_func_1870882454()
{
	
	_activation_check_proc_00_func_617999735();
}

void _activation_check_proc_00_func_617999735()
{
	
}

void _activation_check_proc_00_func_1938955261(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_00_func_1224698469(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_00_func_538125521(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("78b52703-4182-d07c-98da-162e2a39f4d3");

}

void _activation_check_proc_00_func_1516674598(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_00_func_1230958649(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_454220558(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] = _activatnvar_confusing_LLUUID_7.mData[0x8];

}

void _activation_check_proc_00_func_320136792(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_00_func_566639869(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_00_func_462400921(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_00_func_2042302598(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_00_func_1766362019(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1093278625(int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_7 &= 0xff;

	_activation_check_proc_00_func_1766362019(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_2014041761(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xb] != 0x6) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_00_func_526813695(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_00_func_1317444872(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_00_func_1749147765(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_ser_digest)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_f *= 0x5;

	_activation_check_proc_00_func_1034499564(_activatnvar_confusing_LLUUID_2, _activatnvar_ser_digest);
	_activation_check_proc_00_func_507077576(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1034499564(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_2.mData[0x2] >>= _activatnvar_ser_digest[0xb];

}

void _activation_check_proc_00_func_507077576(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_347498570(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_00_func_638996708(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_00_func_838833725(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_00_func_838833725(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f >>= _activatnvar_confusing_chararray_4[0x1];

}

void _activation_check_proc_00_func_1782990102(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_00_func_1203366813(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_0.mData[0xb];

}

void _activation_check_proc_00_func_832279312(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_578617271(LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
}

void _activation_check_proc_00_func_171131261(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 <<= _activatnvar_confusing_int_e;

}

void _activation_check_proc_00_func_772157063(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1511325881(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_00_func_1566916757(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_95479524(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_c ^= 0x1;

	/* inline */ _activation_check_proc_00_func_78505908(_activatnvar_generic_iterator, _activatnvar_confusing_U8_c);
	_activation_check_proc_00_func_1566916757(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_00_func_1964931405(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_00_func_641259585(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_3;

}

void _activation_check_proc_00_func_49645478(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_551029972(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_a);
	_activation_check_proc_00_func_641259585(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_3, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_00_func_947215181(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_00_func_1901886562(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_00_func_1077388157(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_0)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x4] != _activatnvar_confusing_char_0) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_00_func_277852656(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_3, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_2[0x1] >>= _activatnvar_confusing_chararray_1[0x0];

	_activation_check_proc_00_func_1077388157(_activatnvar_confusing_bool_3, _activatnvar_confusing_LLUUID_6, _activatnvar_confusing_char_0);
}

void _activation_check_proc_00_func_942780693(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_6)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xa] != _activatnvar_confusing_char_6) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_00_func_1259627618(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_00_func_741477829(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("86137dd5-1ff7-a8b8-ca62-8d8f55b878b8");

}

void _activation_check_proc_00_func_204965151(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_00_func_1955239549(U8& _activatnvar_t0, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f += _activatnvar_t0;

}

void _activation_check_proc_00_func_980418241(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_chararray_8[0xe] &= _activatnvar_confusing_LLUUID_c.mData[0xb];

}

void _activation_check_proc_00_func_102399787(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_00_func_1447428906(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_e += _activatnvar_confusing_chararray_b[0xb];

}

void _activation_check_proc_00_func_1177225591(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_U8_9 = _activatnvar_secret.mData[0x0];

}

void _activation_check_proc_00_func_322810654(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1792197527(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_00_func_1903146975(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_4 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_00_func_1472769835(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= 0xa;

}

void _activation_check_proc_00_func_901306026(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_e = _activatnvar_confusing_LLUUID_2.mData[0x6];

	_activatnvar_confusing_chararray_3[0x1] = _activatnvar_confusing_LLUUID_c.mData[0x7];

}

void _activation_check_proc_00_func_734423103(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_a.mData[0x7] >>= _activatnvar_confusing_chararray_4[0x6];

	_activation_check_proc_00_func_2141755566(_activatnvar_confusing_U8_d, _activatnvar_confusing_U8_c, _activatnvar_confusing_char_7, _activatnvar_confusing_U8_6);
	_activation_check_proc_00_func_901306026(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_00_func_2141755566(U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_U8_c;

	_activatnvar_confusing_U8_6 += _activatnvar_confusing_U8_d;

}

void _activation_check_proc_00_func_1840746732(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("4575e0e9-d291-0832-43d5-b8a9c5054463");

}

void _activation_check_proc_00_func_2021603714(int& _activatnvar_confusing_int_b, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 += _activatnvar_confusing_int_b;

	/* inline */ _activation_check_proc_00_func_651140305(_activatnvar_confusing_char_6);
	_activation_check_proc_00_func_1840746732(_activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_00_func_668739537()
{
	
}

void _activation_check_proc_00_func_1425155378(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_char_9 = _activatnvar_combined_id.mData[0xc];

	/* inline */ _activation_check_proc_00_func_103952035(_activatnvar_confusing_U8_a);
}

void _activation_check_proc_00_func_899447477(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
	/* inline */ _activation_check_proc_00_func_1029991304(_activatnvar_t1);
}

void _activation_check_proc_00_func_1346259714()
{
	
}

void _activation_check_proc_00_func_878869522(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_chararray_c[0x7];

}

void _activation_check_proc_00_func_1685584989(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_chararray_0[0xd] *= _activatnvar_confusing_chararray_e[0xe];

	/* inline */ _activation_check_proc_00_func_1293482527(_activatnvar_confusing_bool_d, _activatnvar_generic_bool_1);
}

void _activation_check_proc_00_func_1121485754(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_00_func_1093121172(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_872476708(bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_generic_bool_0;

	_activation_check_proc_00_func_1093121172(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1661567855(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_7 *= 0xe;

}

void _activation_check_proc_00_func_946594678(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_503339103(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_00_func_2103306821(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_1 *= _activatnvar_confusing_int_2;

}

void _activation_check_proc_00_func_685472783(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_8[0x5] &= _activatnvar_confusing_chararray_6[0xd];

}

void _activation_check_proc_00_func_790781899(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_confusing_LLUUID_f;

	_activation_check_proc_00_func_1433597746(_activatnvar_confusing_chararray_7, _activatnvar_confusing_U8_8);
	_activation_check_proc_00_func_685472783(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_00_func_1433597746(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 >>= _activatnvar_confusing_chararray_7[0x8];

}

void _activation_check_proc_00_func_970035239(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_LLUUID_4.mData[0xc];

}

void _activation_check_proc_00_func_1909974677(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_1093569229(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_00_func_439978690(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
	/* inline */ _activation_check_proc_00_func_1514296906(_activatnvar_pos);
}

void _activation_check_proc_00_func_973868697(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x0] <<= _activatnvar_so.mData[0x5];

}

void _activation_check_proc_00_func_1421721704(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x5] *= _activatnvar_confusing_chararray_8[0xe];

}

void _activation_check_proc_00_func_1230221860(bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_00_func_1615914329(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_00_func_853125924(_activatnvar_feat, _activatnvar_generic_bool_1, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1615914329(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_00_func_1306005735(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_00_func_1742569060(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_303195551(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_f[0xa] |= _activatnvar_confusing_chararray_4[0x9];

	/* inline */ _activation_check_proc_00_func_328535226(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_00_func_239773315(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_00_func_1621180256(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_938333209(_activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_00_func_937311534(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x3] &= _activatnvar_confusing_chararray_4[0x0];

	_activatnvar_generic_iterator++;
	_activation_check_proc_00_func_1687687942(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_00_func_1687687942(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_2119380017(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_5 = false;

	_activation_check_proc_00_func_1323163694(_activatnvar_confusing_char_e, _activatnvar_confusing_U8_b);
	/* inline */ _activation_check_proc_00_func_129293322(_activatnvar_combined_id, _activatnvar_pos);
	/* inline */ _activation_check_proc_00_func_905896034(_activatnvar_pos);
}

void _activation_check_proc_00_func_1323163694(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_00_func_784179832(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x9] == _activatnvar_pos) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_00_func_1945263122(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_00_func_1933831265(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_00_func_1010710602(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b ^= _activatnvar_confusing_chararray_3[0x8];

}

void _activation_check_proc_00_func_1681866010(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_U8_f += _activatnvar_confusing_char_d;

}

void _activation_check_proc_00_func_1576533510(U8& _activatnvar_confusing_U8_f, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_LLUUID_f.mData[0xe];

	/* inline */ _activation_check_proc_00_func_1483003112(_activatnvar_generic_iterator);
	_activation_check_proc_00_func_1681866010(_activatnvar_confusing_U8_f, _activatnvar_confusing_char_d);
	/* inline */ _activation_check_proc_00_func_136092130(_activatnvar_code, _activatnvar_combined_id, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1340745967(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_00_func_1407766934(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_00_func_2080754001();
	/* inline */ _activation_check_proc_00_func_1530658627(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_00_func_374666960()
{
	
}

void _activation_check_proc_00_func_101457275(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_00_func_1294397281(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xe] == 0xe) _activatnvar_confusing_bool_0 = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_00_func_851053944(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xa] != _activatnvar_confusing_char_e) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_00_func_1150101135(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_2097445608(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1338786914(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_5;

	_activation_check_proc_00_func_1150101135(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
	_activation_check_proc_00_func_2097445608(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_00_func_1467828001(_activatnvar_confusing_char_8);
}

void _activation_check_proc_00_func_1253777824(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_00_func_1390179217(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_8[0x9] += _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_00_func_803962933(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_00_func_1933812625(bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_00_func_4895532(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_00_func_16323089(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_00_func_1105340604(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_00_func_85008268(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_c[0x5] ^= _activatnvar_confusing_chararray_4[0x7];

}

void _activation_check_proc_00_func_1177490536(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_b, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_b += _activatnvar_generic_iterator;

	_activation_check_proc_00_func_1485570584(_activatnvar_generic_bool_0);
	_activation_check_proc_00_func_736069626(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_00_func_2089539701(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_00_func_736069626(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1485570584(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_00_func_450250646(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_00_func_1553479483(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_char_c;

	_activation_check_proc_00_func_450250646(_activatnvar_secret, _activatnvar_strbuf_0);
}

void _activation_check_proc_00_func_523913638(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xa] ^= _activatnvar_mac_digest[0x4];

}

void _activation_check_proc_00_func_1199681327(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_8.mData[0xa] >>= _activatnvar_confusing_LLUUID_1.mData[0xc];

}

void _activation_check_proc_00_func_1109494458(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_00_func_1226099564(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1747361564(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] &= _activatnvar_confusing_chararray_d[0x4];

}

void _activation_check_proc_00_func_2041107920(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_t1;

}

void _activation_check_proc_00_func_1993819287(char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xc] <<= _activatnvar_confusing_chararray_9[0x6];

	_activation_check_proc_00_func_14090423(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_d);
	_activation_check_proc_00_func_229637246();
	_activation_check_proc_00_func_851697480(_activatnvar_confusing_char_b);
}

void _activation_check_proc_00_func_14090423(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_00_func_851697480(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_00_func_229637246()
{
	
}

void _activation_check_proc_00_func_1283319937(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	/* inline */ _activation_check_proc_00_func_399124785(_activatnvar_confusing_char_b, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_00_func_1868117912(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1964519523(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_8[0x5] ^= _activatnvar_confusing_chararray_f[0xc];

}

void _activation_check_proc_00_func_1793538656(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_7 = 0x0;

	_activation_check_proc_00_func_1964519523(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_00_func_1113299250(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1228414009(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_4)
{
	
	/* inline */ _activation_check_proc_00_func_631854776(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_00_func_1634087723(_activatnvar_confusing_chararray_4, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_00_func_1110994539(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_c |= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_00_func_1265611335()
{
	
}

void _activation_check_proc_00_func_1378837913(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] >>= _activatnvar_name_digest[0xf];

	if(_activatnvar_confusing_LLUUID_6.mData[0xf] != 0x5) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_00_func_6758780(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_4, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_name_digest, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_a;

	_activation_check_proc_00_func_1265611335();
	/* inline */ _activation_check_proc_00_func_1514422419(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_4);
	_activation_check_proc_00_func_1378837913(_activatnvar_confusing_LLUUID_a, _activatnvar_name_digest, _activatnvar_confusing_bool_4, _activatnvar_confusing_LLUUID_6);
	/* inline */ _activation_check_proc_00_func_1871734972(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_00_func_1110994539(_activatnvar_confusing_U8_c, _activatnvar_confusing_bool_f, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_00_func_1979138081(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 |= 0xa;

}

void _activation_check_proc_00_func_542530153(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_00_func_827960110(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_00_func_614599868(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_8.mData[0x5];

}

void _activation_check_proc_00_func_1926826604(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1816017671(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_00_func_1699785613(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_00_func_1005654709(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x4] == _activatnvar_confusing_char_6) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_00_func_968742086(int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_a &= 0xe;

	_activation_check_proc_00_func_1005654709(_activatnvar_confusing_char_6, _activatnvar_confusing_LLUUID_6, _activatnvar_confusing_bool_d);
	_activation_check_proc_00_func_747657213();
	/* inline */ _activation_check_proc_00_func_1641894312(_activatnvar_confusing_int_4);
}

void _activation_check_proc_00_func_747657213()
{
	
}

void _activation_check_proc_00_func_915210540(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_lace;

}

void _activation_check_proc_00_func_915631532(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_LLUUID_7.mData[0x7] >>= _activatnvar_confusing_chararray_7[0x6];

	/* inline */ _activation_check_proc_00_func_602924603(_activatnvar_confusing_U8_c, _activatnvar_confusing_char_4, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_00_func_1401863411(_activatnvar_confusing_int_1, _activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_00_func_93966289(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_00_func_1045750291(_activatnvar_confusing_LLUUID_a, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_00_func_1280453681(_activatnvar_confusing_chararray_b);
}

void _activation_check_proc_00_func_1045750291(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] = _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_00_func_1793249744(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_00_func_237406848(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_1.mData[0x4] >>= _activatnvar_confusing_chararray_7[0x0];

}

void _activation_check_proc_00_func_1144667734(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 >>= 0xd;

}

void _activation_check_proc_00_func_1744742900(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_LLUUID_a.mData[0xd];

}

void _activation_check_proc_00_func_1146510310(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_525080454(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_00_func_979786051(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_00_func_1953517836(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
}

void _activation_check_proc_00_func_498371885(U8& _activatnvar_confusing_U8_0, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_3 ^= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_00_func_1299445513(char& _activatnvar_feat, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 ^= _activatnvar_feat;

}

void _activation_check_proc_00_func_413501903(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_00_func_1639710847(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_LLUUID_b.mData[0x3];

}

void _activation_check_proc_00_func_1400332113(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_9;

	_activation_check_proc_00_func_1639710847(_activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_b);
	/* inline */ _activation_check_proc_00_func_450026433(_activatnvar_confusing_int_9);
	/* inline */ _activation_check_proc_00_func_178376300(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_3);
	_activation_check_proc_00_func_1462999337(_activatnvar_confusing_int_5);
}

void _activation_check_proc_00_func_1462999337(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_00_func_1128334559(LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_00_func_1483302810(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1076618037(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_00_func_648162042(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_00_func_65409453(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x5] ^= _activatnvar_confusing_chararray_5[0xc];

}

void _activation_check_proc_00_func_1316856289(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x5] <<= _activatnvar_name_digest[0x6];

}

void _activation_check_proc_00_func_156130890(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_9.mData[0x7] ^= _activatnvar_ser_digest[0x4];

}

void _activation_check_proc_00_func_945994914(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= _activatnvar_confusing_LLUUID_4.mData[0x0];

}

void _activation_check_proc_00_func_1325788963(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x8] == _activatnvar_confusing_U8_5) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_00_func_1574729951(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x4] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_00_func_791291859(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x0] *= _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_00_func_1496992845(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_1295489933(_activatnvar_generic_iterator);
	_activation_check_proc_00_func_791291859(_activatnvar_confusing_chararray_c, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_00_func_1306973387(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_00_func_1612878530(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_3;

	_activation_check_proc_00_func_570180918(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_00_func_1158636059(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_b, _activatnvar_confusing_bool_4);
	_activation_check_proc_00_func_322122165(_activatnvar_confusing_U8_e, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_00_func_570180918(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xf] == 0x0) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_00_func_322122165(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_e += _activatnvar_confusing_U8_2;

}

void _activation_check_proc_00_func_70289700(LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_00_func_1772764672(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_00_func_423872081(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("e0cb7dd4-3a7d-3ea2-2b3b-634dd5b742e2");

}

void _activation_check_proc_00_func_949446463(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0xb] &= _activatnvar_confusing_chararray_2[0x8];

	_activation_check_proc_00_func_1593120973(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_00_func_423872081(_activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_00_func_1593120973(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x9] *= _activatnvar_confusing_LLUUID_b.mData[0x9];

}

void _activation_check_proc_00_func_941450483(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_00_func_2062188427(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 >>= _activatnvar_confusing_char_2;

}

void _activation_check_proc_00_func_1116871893(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_789912983(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("0be6f624-5b94-572e-53cb-24b9cdd93458");

}

void _activation_check_proc_00_func_1343240777(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_f &= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_00_func_776088727(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_943734981(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_confusing_LLUUID_5;

	_activation_check_proc_00_func_824371764(_activatnvar_confusing_U8_f, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_00_func_824371764(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_f += _activatnvar_confusing_chararray_5[0x2];

}

void _activation_check_proc_00_func_1895605315(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activatnvar_pos |= 8;
}

void _activation_check_proc_00_func_1704003279(LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

	/* inline */ _activation_check_proc_00_func_828873495(_activatnvar_confusing_U8_a, _activatnvar_secret);
}

void _activation_check_proc_00_func_1595547822(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_00_func_1130687445(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_00_func_1241128275(_activatnvar_confusing_U8_7, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_00_func_1130687445(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x5] &= _activatnvar_confusing_LLUUID_9.mData[0xa];

}

void _activation_check_proc_00_func_391415484(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_char_7 >>= _activatnvar_confusing_chararray_e[0xa];

}

void _activation_check_proc_00_func_677840294(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_785572407(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	_activation_check_proc_00_func_1085019428();
}

void _activation_check_proc_00_func_1085019428()
{
	
}

void _activation_check_proc_00_func_835732761(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_char_4 &= _activatnvar_confusing_chararray_c[0xb];

}

void _activation_check_proc_00_func_2063164482(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_generic_iterator = 0;
	_activatnvar_confusing_LLUUID_a.mData[0x1] *= _activatnvar_combined_id.mData[0x2];

}

void _activation_check_proc_00_func_1743886656(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_00_func_808490391(bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x8] != 0xc) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_00_func_1199446135(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_00_func_1765851931(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_00_func_1695035227(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_LLUUID_7.mData[0xf];

	_activation_check_proc_00_func_1765851931(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_00_func_127469077(unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] += _activatnvar_confusing_chararray_e[0xf];

	/* inline */ _activation_check_proc_00_func_438000631();
	/* inline */ _activation_check_proc_00_func_1332265939(_activatnvar_t0);
}

void _activation_check_proc_00_func_1620864918(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_int_e = 0x4;

	/* inline */ _activation_check_proc_00_func_1619026230(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_00_func_1113147848(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_00_func_449610639(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_char_7 = _activatnvar_combined_id.mData[0x6];

	/* inline */ _activation_check_proc_00_func_103931961(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_b, _activatnvar_confusing_char_1);
}

void _activation_check_proc_00_func_1707025699(bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x1] == 0x4) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_00_func_274601592(bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_f)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_f += _activatnvar_confusing_U8_c;

	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_00_func_1561822495(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] |= _activatnvar_confusing_LLUUID_f.mData[0x8];

	_activation_check_proc_00_func_892114005(_activatnvar_confusing_int_8);
	_activation_check_proc_00_func_407374341(_activatnvar_confusing_char_f, _activatnvar_confusing_U8_6);
	/* inline */ _activation_check_proc_00_func_2045972748(_activatnvar_fscked, _activatnvar_combined_id, _activatnvar_code, _activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_407374341(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 >>= _activatnvar_confusing_char_f;

}

void _activation_check_proc_00_func_892114005(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_00_func_1362214080(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_00_func_1482795650(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= 0x0;

}

void _activation_check_proc_00_func_418797743(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x5] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_00_func_1236425241(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_00_func_332451499(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_756076784(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x7] ^= _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_00_func_385328225(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c >>= 0xc;

}

void _activation_check_proc_00_func_518584388()
{
	
}

void _activation_check_proc_00_func_770380799(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_LLUUID_d.mData[0x9];

}

void _activation_check_proc_00_func_209246422(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_b)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_4 >>= _activatnvar_confusing_U8_4;

	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_b += _activatnvar_confusing_char_7;

}

void _activation_check_proc_00_func_2113133453(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_chararray_2[0x1] &= _activatnvar_confusing_chararray_c[0xb];

	_activation_check_proc_00_func_461527698(_activatnvar_code, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_00_func_461527698(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_code.mData[0xe];

}

void _activation_check_proc_00_func_594746951(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_00_func_1576600833(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_00_func_1663001746(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_00_func_1945446404(DWORD& _activatnvar_serial, BOOL& _activatnvar_success, DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	/* inline */ _activation_check_proc_00_func_1456083872(_activatnvar_success, _activatnvar_serial);
}

void _activation_check_proc_00_func_257462809(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("dfdeab19-6777-2913-f021-627b4aedd2d4");

}

void _activation_check_proc_00_func_57047543(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x2] += _activatnvar_lace.mData[0x8];

}

void _activation_check_proc_00_func_223364140(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activation_check_proc_00_func_513158616(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_00_func_1963692208(_activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_00_func_175831224(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_00_func_513158616(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x1] ^= _activatnvar_confusing_LLUUID_a.mData[0x1];

}

void _activation_check_proc_00_func_403373328(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("5b71396d-7a60-1ed3-013e-e72a2d24302b");

}

void _activation_check_proc_00_func_1056032859(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_00_func_2088073059(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_8)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x6] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_a = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_00_func_1115059672(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

}

void _activation_check_proc_00_func_1885558153(char& _activatnvar_confusing_char_7, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x7] ^= _activatnvar_confusing_LLUUID_c.mData[0x0];

	_activation_check_proc_00_func_2088073059(_activatnvar_confusing_bool_a, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_9, _activatnvar_confusing_char_8);
	_activation_check_proc_00_func_1115059672(_activatnvar_confusing_char_7);
	_activation_check_proc_00_func_1056032859(_activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_00_func_1207341622(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x7] |= _activatnvar_confusing_LLUUID_1.mData[0xc];

}

void _activation_check_proc_00_func_1016505104()
{
	
}

void _activation_check_proc_00_func_699548883(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_00_func_44853305(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1870212972(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x0] |= _activatnvar_ser_digest[0x6];

	_activation_check_proc_00_func_44853305(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_00_func_1016505104();
	_activation_check_proc_00_func_699548883(_activatnvar_confusing_U8_4);
}

void _activation_check_proc_00_func_410236421(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_00_func_829721481(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_829721481(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_61346431(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_00_func_1635731964(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_char_e ^= 0x0;

}

void _activation_check_proc_00_func_934869260(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= 0x8;

	/* inline */ _activation_check_proc_00_func_945727330();
	/* inline */ _activation_check_proc_00_func_2129284287(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_00_func_1901573289(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_c)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x0] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_6 = true;

	/* inline */ _activation_check_proc_00_func_696236267(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1196904920(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_00_func_387570968(_activatnvar_confusing_int_c);
}

void _activation_check_proc_00_func_612088743(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_00_func_749713544(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_00_func_2078237955(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_00_func_204661500(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_chararray_a[0xe];

	_activation_check_proc_00_func_2078237955(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_4);
	_activation_check_proc_00_func_749713544(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_00_func_485652550(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_fscked;

}

void _activation_check_proc_00_func_250431500(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_00_func_495437882(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] = _activatnvar_code.mData[0xa];

}

void _activation_check_proc_00_func_83027859(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_U8_9 <<= _activatnvar_confusing_char_b;

}

void _activation_check_proc_00_func_1697341275(bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_chararray_8[0x5] |= _activatnvar_confusing_chararray_a[0xb];

	_activation_check_proc_00_func_83027859(_activatnvar_confusing_char_b, _activatnvar_confusing_U8_9, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_00_func_1317901732(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1579453781(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d += 0xf;

	/* inline */ _activation_check_proc_00_func_255596624(_activatnvar_confusing_U8_8, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_00_func_123643752(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x7] ^= _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_00_func_33810366(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_00_func_1834536618(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("7efa1804-51ab-20c0-cc1e-bceec0dbfe44");

	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_00_func_2067172477(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_00_func_1638766551(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x1] ^= _activatnvar_ser_digest[0x9];

}

void _activation_check_proc_00_func_1412551574(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_402145435(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_4 <<= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_00_func_2046608195(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_880153384(U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_00_func_271575324(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_4)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x4] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_00_func_880153384(_activatnvar_confusing_U8_6);
}

void _activation_check_proc_00_func_380990635(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_char_5++;

	_activation_check_proc_00_func_1016873974(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_00_func_1016873974(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("5b4bcd77-340a-34fd-5068-f69936b4a01a");

}

void _activation_check_proc_00_func_104781208(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_119017861(bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_generic_bool_0;

	_activation_check_proc_00_func_104781208(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_579861672(int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_1724760806(_activatnvar_confusing_int_f);
}

void _activation_check_proc_00_func_924493994(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_chararray_d[0x8];

	/* inline */ _activation_check_proc_00_func_1687064667(_activatnvar_pos, _activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_00_func_1347710222(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_00_func_501323861(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_f = false;

	_activation_check_proc_00_func_1347710222(_activatnvar_t0);
}

void _activation_check_proc_00_func_1430465751(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_a)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x5] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_b = false;

	/* inline */ _activation_check_proc_00_func_39869893(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_6);
}

void _activation_check_proc_00_func_2042954471(bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_00_func_794924599()
{
	
}

void _activation_check_proc_00_func_294458319(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_0)
{
	
	_activation_check_proc_00_func_369665566(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_00_func_1534190019(_activatnvar_confusing_U8_0);
	/* inline */ _activation_check_proc_00_func_45083198(_activatnvar_t0);
	_activation_check_proc_00_func_794924599();
}

void _activation_check_proc_00_func_369665566(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_00_func_1534190019(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_00_func_405243014(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] <<= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_00_func_362175862(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_0.mData[0xf] *= _activatnvar_confusing_LLUUID_6.mData[0x4];

	_activation_check_proc_00_func_2046975283(_activatnvar_lace, _activatnvar_doaccount, _activatnvar_feat, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_00_func_1564297071(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_5);
	_activation_check_proc_00_func_405243014(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_00_func_1102235824(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_2046975283(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_00_func_149846813(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_doaccount;

}

void _activation_check_proc_00_func_2005515661(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x6] != _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_00_func_721954057(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_char_9 &= _activatnvar_confusing_U8_e;

	_activation_check_proc_00_func_2005515661(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_c, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_00_func_229390632(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_00_func_453024943(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_2, char& _activatnvar_feat)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xf] == _activatnvar_feat) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_00_func_1421052010(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_340229737(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_2, char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_lace)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_7 |= 0x1;

	_activation_check_proc_00_func_1421052010(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_section2);
	_activation_check_proc_00_func_453024943(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_bool_2, _activatnvar_feat);
}

void _activation_check_proc_00_func_733555988(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_7[0x7] >>= _activatnvar_confusing_chararray_9[0x3];

}

void _activation_check_proc_00_func_1363332621(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 ^= 0x1;

}

void _activation_check_proc_00_func_174206373(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_6.mData[0x0] = _activatnvar_confusing_chararray_4[0xf];

}

void _activation_check_proc_00_func_1815231299(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1086770043(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_00_func_541380056(_activatnvar_section2, _activatnvar_confusing_char_f);
}

void _activation_check_proc_00_func_541380056(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f = _activatnvar_section2.mData[0x9];

}

void _activation_check_proc_00_func_982740722(int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_00_func_571342003(_activatnvar_confusing_int_7);
}

void _activation_check_proc_00_func_571342003(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_00_func_6179520(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_00_func_1679093771(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_00_func_1482623383(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1195039294(LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_00_func_1474894908(_activatnvar_so, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_00_func_1447066163(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_00_func_1908304318(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("227cdb97-4aa6-781b-5ab9-eaffa6867c7c");

}

void _activation_check_proc_00_func_280778744(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_00_func_235648732(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_00_func_719820640(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_00_func_2123931672(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_char_2 += _activatnvar_confusing_char_9;

}

void _activation_check_proc_00_func_1119879104(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_00_func_577564696(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activatnvar_confusing_chararray_2[0xf] >>= _activatnvar_name_digest[0xc];

	_activation_check_proc_00_func_1119879104(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_7);
	_activation_check_proc_00_func_1217604783(_activatnvar_confusing_char_d, _activatnvar_confusing_char_e);
	/* inline */ _activation_check_proc_00_func_2052460075(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_00_func_1217604783(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e >>= _activatnvar_confusing_char_d;

}

void _activation_check_proc_00_func_1483947973(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_b *= 0x9;

}

void _activation_check_proc_00_func_1226637541()
{
	
}

void _activation_check_proc_00_func_1237476489(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_generic_bool_0, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_3[0xb] *= _activatnvar_confusing_chararray_0[0x4];

	_activation_check_proc_00_func_1483947973(_activatnvar_confusing_U8_b, _activatnvar_generic_bool_0);
	_activation_check_proc_00_func_1226637541();
}

void _activation_check_proc_00_func_1214893140(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_00_func_401896049(char& _activatnvar_confusing_char_2, int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

	/* inline */ _activation_check_proc_00_func_1175147869(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_00_func_154075534(_activatnvar_confusing_char_2, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_00_func_1176601048(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_505383425(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_58745171(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_00_func_1771905774(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_6.mData[0xf] <<= _activatnvar_confusing_chararray_e[0x7];

}

void _activation_check_proc_00_func_974882338(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_00_func_1771905774(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_e);
	/* inline */ _activation_check_proc_00_func_218095845(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_8);
	_activation_check_proc_00_func_629355041(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_629355041(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_984030110(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_4.mData[0xf] ^= _activatnvar_confusing_chararray_e[0x8];

}

void _activation_check_proc_00_func_418907304(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1944576874(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_e = _activatnvar_section2.mData[0xd];

	/* inline */ _activation_check_proc_00_func_479341053(_activatnvar_confusing_bool_1, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_char_4);
}

void _activation_check_proc_00_func_776785291(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_00_func_1357790629(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

	_activation_check_proc_00_func_696432295(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_00_func_696432295(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x9] = _activatnvar_confusing_LLUUID_f.mData[0x2];

}

void _activation_check_proc_00_func_1855802224(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x8] += _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_00_func_568012932(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x0] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_00_func_1855802224(_activatnvar_mac_digest, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_00_func_1804374223(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_doaccount;

}

void _activation_check_proc_00_func_77758260(LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
	/* inline */ _activation_check_proc_00_func_883959464(_activatnvar_confusing_chararray_9, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_00_func_52856595(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_00_func_1547147936(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_00_func_988761474(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_00_func_41081645(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_263867919(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_00_func_1787246275(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_1[0x4] += _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_00_func_1765537379(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_00_func_142918965(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_00_func_2137319965(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 *= _activatnvar_confusing_char_b;

}

void _activation_check_proc_00_func_1975095537(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_00_func_1459166872(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_00_func_475919793()
{
	
}

void _activation_check_proc_00_func_1016382835()
{
	
	_activation_check_proc_00_func_475919793();
}

void _activation_check_proc_00_func_2146904696(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_00_func_1768695652(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0xf] += _activatnvar_confusing_chararray_3[0xb];

}

void _activation_check_proc_00_func_955398404(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_chararray_4[0x2];

}

void _activation_check_proc_00_func_1635129002(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_00_func_1941855501(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0x5;

}

void _activation_check_proc_00_func_2122334532(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_00_func_619909849(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1922456737(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_e &= _activatnvar_confusing_LLUUID_2.mData[0xb];

}

void _activation_check_proc_00_func_898219408(LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_section2;

	/* inline */ _activation_check_proc_00_func_1803393033(_activatnvar_confusing_int_a);
}

void _activation_check_proc_00_func_1195490605(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_6.mData[0xd] >>= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_00_func_889077086(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_f[0x0] = _activatnvar_confusing_LLUUID_2.mData[0xf];

}

void _activation_check_proc_00_func_681176615(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x5] == _activatnvar_confusing_char_e) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_00_func_1191484747(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_5 = false;

	_activation_check_proc_00_func_681176615(_activatnvar_confusing_char_e, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_00_func_2050491573(bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xc] += _activatnvar_confusing_LLUUID_6.mData[0x1];

	if(_activatnvar_confusing_LLUUID_1.mData[0x1] != 0x7) _activatnvar_confusing_bool_9 = false;

	_activation_check_proc_00_func_1263951169(_activatnvar_confusing_int_c, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_00_func_1263951169(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_int_c &= 0xa;

	_activatnvar_confusing_chararray_d[0xf] ^= _activatnvar_confusing_LLUUID_2.mData[0x1];

}

void _activation_check_proc_00_func_441208135(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_00_func_667052888(U8& _activatnvar_confusing_U8_a, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_U8_a |= _activatnvar_confusing_chararray_8[0xd];

}

void _activation_check_proc_00_func_2016522724(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_5)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_U8_0 = _activatnvar_confusing_char_5;

}

void _activation_check_proc_00_func_311970251(char& _activatnvar_confusing_char_d, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 <<= _activatnvar_confusing_char_d;

}

void _activation_check_proc_00_func_528698711(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_00_func_1886130393(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_code;

}

void _activation_check_proc_00_func_1204675015(LLUUID& _activatnvar_code, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_1, bool& _activatnvar_doaccount, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_int_1 |= 0xe;

	_activation_check_proc_00_func_526173313(_activatnvar_doaccount);
	_activation_check_proc_00_func_1237024213(_activatnvar_name_digest, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_1);
	_activation_check_proc_00_func_1886130393(_activatnvar_code, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_00_func_526173313(bool& _activatnvar_doaccount)
{
	_activatnvar_doaccount = false;
}

void _activation_check_proc_00_func_1237024213(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x9] ^= _activatnvar_name_digest[0x8];

	_activatnvar_confusing_LLUUID_c.mData[0x6] >>= _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_00_func_1742500473(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xe] &= _activatnvar_confusing_chararray_0[0x8];

}

void _activation_check_proc_00_func_2015592784(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_00_func_1880652938(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_2[0xf] &= _activatnvar_lace.mData[0x6];

}

void _activation_check_proc_00_func_676716002(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_section1.mData[0x7];

	_activation_check_proc_00_func_1880652938(_activatnvar_confusing_chararray_2, _activatnvar_lace);
}

void _activation_check_proc_00_func_1403385922(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_00_func_683429027(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1156158386(int& _activatnvar_confusing_int_9, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_int_9++;

	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_00_func_1382374728(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_doaccount;

}

void _activation_check_proc_00_func_974577706(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_0.mData[0x8] *= _activatnvar_confusing_LLUUID_7.mData[0x0];

}

void _activation_check_proc_00_func_1263747448(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_00_func_974577706(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_00_func_1329205131(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] &= _activatnvar_confusing_LLUUID_1.mData[0xb];

	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_5;

	_activatnvar_confusing_U8_d += _activatnvar_confusing_char_9;

}

void _activation_check_proc_00_func_1258141160(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("25d4f28b-efad-824a-eba3-38191a500982");

	_activation_check_proc_00_func_1329205131(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_f, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_d, _activatnvar_confusing_LLUUID_6, _activatnvar_confusing_char_9);
}

void _activation_check_proc_00_func_748212468()
{
	
}

void _activation_check_proc_00_func_19930758(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1781070216(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xc] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_00_func_1336696898(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_3 &= _activatnvar_confusing_char_b;

}

void _activation_check_proc_00_func_541458057(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_00_func_426192250(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xf] &= _activatnvar_confusing_LLUUID_6.mData[0x5];

	_activation_check_proc_00_func_541458057(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_00_func_1056268427(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_char_1 |= _activatnvar_confusing_LLUUID_b.mData[0x9];

}

void _activation_check_proc_00_func_475222794(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_chararray_7[0x1] &= _activatnvar_lace.mData[0xf];

	/* inline */ _activation_check_proc_00_func_1924853249(_activatnvar_confusing_U8_1, _activatnvar_secret);
}

void _activation_check_proc_00_func_1304138522(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_00_func_203928345(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_00_func_545889117(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 *= _activatnvar_confusing_chararray_8[0xa];

}

void _activation_check_proc_00_func_889346001(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_00_func_1384771288(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
	_activation_check_proc_00_func_940323335(_activatnvar_confusing_char_1, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_00_func_1384771288(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_940323335(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_char_1;

}

void _activation_check_proc_00_func_261512618(bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] += _activatnvar_ser_digest[0x8];

	_activation_check_proc_00_func_2080942472(_activatnvar_confusing_char_8, _activatnvar_confusing_chararray_f);
	_activation_check_proc_00_func_1523961965(_activatnvar_confusing_U8_1, _activatnvar_confusing_bool_b, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_c, _activatnvar_t0);
	_activation_check_proc_00_func_1984344226(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_00_func_2080942472(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_8 = _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_00_func_1523961965(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_c;

	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_1 |= _activatnvar_t0;

}

void _activation_check_proc_00_func_1984344226(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_00_func_1983033096(LLUUID& _activatnvar_code, bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_f, char* _activatnvar_strbuf_0)
{
	_activatnvar_confusing_int_e++;

	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_2;

	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_00_func_1389604559(unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 *= _activatnvar_confusing_chararray_f[0x5];

}

void _activation_check_proc_00_func_1192667768(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] += _activatnvar_confusing_chararray_4[0x5];

}

void _activation_check_proc_00_func_131156424(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_00_func_952315560(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_fscked;

}

void _activation_check_proc_00_func_2073239105(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xd;

}

void _activation_check_proc_00_func_830644850(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_00_func_312060541(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_00_func_1556402608(char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_00_func_756408572(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_lace, char& _activatnvar_feat, int& _activatnvar_confusing_int_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_b)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x9] != 0xb) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_00_func_1556402608(_activatnvar_feat, _activatnvar_lace, _activatnvar_doaccount, _activatnvar_generic_iterator);
	_activation_check_proc_00_func_102443793(_activatnvar_lace, _activatnvar_feat);
	/* inline */ _activation_check_proc_00_func_1035039316(_activatnvar_confusing_int_f);
	_activation_check_proc_00_func_532341637(_activatnvar_feat, _activatnvar_confusing_U8_b);
	_activation_check_proc_00_func_312060541(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_00_func_102443793(LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_00_func_532341637(char& _activatnvar_feat, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b &= _activatnvar_feat;

}

void _activation_check_proc_00_func_552130900(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 <<= 0xc;

}

void _activation_check_proc_00_func_1869952336(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_213525519(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_226087234(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d *= 0x4;

}

void _activation_check_proc_00_func_98015511(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_1480862400(_activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_00_func_727155920(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_00_func_1036337349(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_00_func_1710419843(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_chararray_3[0x4] = _activatnvar_confusing_chararray_5[0xd];

}

void _activation_check_proc_00_func_75570491(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x6] >>= _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_00_func_517644563(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_00_func_2073728713(char& _activatnvar_confusing_char_e, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_e += _activatnvar_confusing_char_1;

}

void _activation_check_proc_00_func_250074875(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_a)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x4] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_00_func_1983631928(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("d7d6f176-e3a6-9e5a-2019-a5f99811c811");

	_activation_check_proc_00_func_1760851352(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_00_func_1181326307(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1760851352(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0xe] *= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_00_func_1181326307(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_00_func_1724244927()
{
	
}

void _activation_check_proc_00_func_1914076246(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_d = _activatnvar_fscked.mData[0x4];

}

void _activation_check_proc_00_func_1049392403(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_b &= _activatnvar_lace.mData[0x6];

	/* inline */ _activation_check_proc_00_func_1421540124(_activatnvar_confusing_U8_5, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_00_func_1606329795(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_3 ^= 0x5;

}

void _activation_check_proc_00_func_1954098875(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_2062042881(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_secret);
	_activation_check_proc_00_func_1606329795(_activatnvar_confusing_U8_3, _activatnvar_confusing_bool_8);
}

void _activation_check_proc_00_func_1695830111(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_00_func_789047664(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b |= _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_00_func_849605317(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_b ^= 0xb;

	_activatnvar_confusing_LLUUID_1.mData[0xe] <<= _activatnvar_code.mData[0xa];

}

void _activation_check_proc_00_func_513013237(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_00_func_189922290(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x8] += _activatnvar_confusing_chararray_2[0x0];

}

void _activation_check_proc_00_func_268609471(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_e, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_int_e &= 0xff;

	if(_activatnvar_confusing_LLUUID_7.mData[0x3] == 0x9) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_00_func_468119677(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_812901417(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_char_1;

}

void _activation_check_proc_00_func_368225269(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_00_func_1425125402(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_int_b++;

	_activation_check_proc_00_func_368225269(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_00_func_741301887(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_00_func_1635469215(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_00_func_99247038(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_455686306(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_a.mData[0xd] >>= _activatnvar_confusing_chararray_e[0x1];

}

void _activation_check_proc_00_func_434123507(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_7)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
	_activation_check_proc_00_func_1979163778(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_7);
}

void _activation_check_proc_00_func_1979163778(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 |= _activatnvar_confusing_LLUUID_7.mData[0x0];

}

void _activation_check_proc_00_func_573168921(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_00_func_771847057(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_00_func_1853621586(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_6;

	_activatnvar_generic_iterator++;
	_activation_check_proc_00_func_971728646(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_00_func_1197411224(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_971728646(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_986493613(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_6[0x5] |= _activatnvar_confusing_chararray_a[0x9];

	/* inline */ _activation_check_proc_00_func_1520340026(_activatnvar_confusing_char_8, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_00_func_790521050(bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_6)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_6 += _activatnvar_confusing_char_d;

}

void _activation_check_proc_00_func_811789371(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_b.mData[0x6] <<= _activatnvar_name_digest[0xb];

	_activation_check_proc_00_func_425455169(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_00_func_425455169(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_e.mData[0x9] >>= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_00_func_183505918(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_00_func_1117180117(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_00_func_1504518336(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_00_func_978264331(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1672187139(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_00_func_546152713(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_e;

	_activatnvar_pos |= 8;
	_activation_check_proc_00_func_1672187139(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_00_func_147807475(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_f = _activatnvar_confusing_bool_6;

}

void _activation_check_proc_00_func_1664149818(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_char_5 ^= 0xf;

	/* inline */ _activation_check_proc_00_func_1298116920(_activatnvar_confusing_U8_4, _activatnvar_confusing_U8_c, _activatnvar_generic_bool_1);
}

void _activation_check_proc_00_func_1480069(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_00_func_1408193321(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_code;

}

void _activation_check_proc_00_func_883059268(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x3] ^= _activatnvar_confusing_chararray_e[0x4];

}

void _activation_check_proc_00_func_2146881072(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_00_func_1390886644(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_00_func_1811644048()
{
	
}

void _activation_check_proc_00_func_305459802(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1611825164(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_doaccount;

}

void _activation_check_proc_00_func_728547827()
{
	
}

void _activation_check_proc_00_func_728872395(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_440318819(_activatnvar_confusing_char_0, _activatnvar_confusing_char_1, _activatnvar_confusing_bool_6);
}

void _activation_check_proc_00_func_1618185453(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] |= _activatnvar_confusing_LLUUID_b.mData[0x7];

}

void _activation_check_proc_00_func_382835849(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_1[0x7] &= _activatnvar_confusing_LLUUID_8.mData[0x0];

}

void _activation_check_proc_00_func_1573487018(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_b += _activatnvar_pos;

}

void _activation_check_proc_00_func_1801083632(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_7)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x3] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_00_func_1866543280(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] >>= _activatnvar_name_digest[0x4];

}

void _activation_check_proc_00_func_243299513(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_00_func_996604149(int& _activatnvar_generic_iterator)
{
	
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_739776766(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("38b98efd-9fe9-6f8c-51a2-dc15ff0be861");

}

void _activation_check_proc_00_func_1178103031(LLUUID& _activatnvar_so, LLUUID& _activatnvar_section1)
{
	_activatnvar_so = LLUUID(_activatnvar_section1);
}

void _activation_check_proc_00_func_1851393333(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xa] != 0xc) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_00_func_381257182(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_LLUUID_a = _activatnvar_confusing_LLUUID_7;

	/* inline */ _activation_check_proc_00_func_1468650589(_activatnvar_confusing_U8_8);
	_activation_check_proc_00_func_1118108692(_activatnvar_confusing_bool_5, _activatnvar_confusing_U8_b, _activatnvar_confusing_U8_d);
	/* inline */ _activation_check_proc_00_func_1096358116(_activatnvar_confusing_U8_9, _activatnvar_confusing_bool_a, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_00_func_1118108692(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_d)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_b &= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_00_func_534913324(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_00_func_1480573069(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_00_func_726350684(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_d.mData[0x3] <<= _activatnvar_confusing_LLUUID_7.mData[0xe];

}

void _activation_check_proc_00_func_1505181610(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("edeb0a27-f555-c662-7a33-c3f75ff7adf5");

}

void _activation_check_proc_00_func_1998374272(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_e[0x0] >>= _activatnvar_confusing_LLUUID_d.mData[0xe];

	_activatnvar_confusing_chararray_1[0xf] = _activatnvar_confusing_LLUUID_9.mData[0x5];

}

void _activation_check_proc_00_func_1798901197(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8)
{
	
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_00_func_1335481470(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_fscked;

}

void _activation_check_proc_00_func_1672897680(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_760199153(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x4] += _activatnvar_confusing_chararray_f[0x9];

}

void _activation_check_proc_00_func_1294075138(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1609491673(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1566533326(bool& _activatnvar_confusing_bool_3, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_3;

	_activation_check_proc_00_func_1609491673(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1672777380(U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_4.mData[0xc];

}

void _activation_check_proc_00_func_1917519355(U8& _activatnvar_pos, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0x5] != _activatnvar_pos) _activatnvar_confusing_bool_7 = _activatnvar_generic_bool_1;

}

void _activation_check_proc_00_func_1940323866(char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_c ^= _activatnvar_confusing_int_3;

	/* inline */ _activation_check_proc_00_func_1608636419(_activatnvar_confusing_char_5);
}

void _activation_check_proc_00_func_712069744(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_00_func_993705283(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e ^= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_00_func_361181705(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1685431710(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_0 = _activatnvar_lace.mData[0x7];

}

void _activation_check_proc_00_func_41805046(char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("d888df5b-1b50-d759-8909-5fed7a1ca6e0");

	/* inline */ _activation_check_proc_00_func_897349684(_activatnvar_confusing_U8_0, _activatnvar_confusing_U8_e);
	_activation_check_proc_00_func_1212385462(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_00_func_1212385462(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_7 *= _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_00_func_1725864344(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_00_func_275267200(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

	/* inline */ _activation_check_proc_00_func_536860428(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1434755445(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_int_9 &= 0xff;

	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_3;

	_activation_check_proc_00_func_1101085690(_activatnvar_confusing_LLUUID_f, _activatnvar_section2);
}

void _activation_check_proc_00_func_1101085690(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_section2;

}

void _activation_check_proc_00_func_1568055432(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e <<= _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_00_func_1741745148(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_00_func_1197615522(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_0[0xa] += _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_00_func_600371159(unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_d = _activatnvar_generic_iterator;

	_activation_check_proc_00_func_1197615522(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_00_func_292225671(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_431772762(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_00_func_292225671(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
	/* inline */ _activation_check_proc_00_func_1795277351(_activatnvar_confusing_char_2);
}

void _activation_check_proc_00_func_130331360(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] *= _activatnvar_confusing_chararray_a[0x1];

}

void _activation_check_proc_00_func_1824729070(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] ^= _activatnvar_confusing_LLUUID_a.mData[0xa];

}

void _activation_check_proc_00_func_1649434403(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_1 += 0x6;

	_activation_check_proc_00_func_1824729070(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_00_func_130331360(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_00_func_622993811(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] <<= _activatnvar_so.mData[0x4];

}

void _activation_check_proc_00_func_1611731982(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_00_func_1239321297(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 += 0x4;

}

void _activation_check_proc_00_func_243811899(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_2005614222(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_452473522()
{
	
}

void _activation_check_proc_00_func_1902498633(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0xf] <<= _activatnvar_confusing_chararray_f[0x5];

}

void _activation_check_proc_00_func_1361813759(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_d[0x3] &= _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_00_func_1248114864(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 <<= 0x5;

}

void _activation_check_proc_00_func_1792580760(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 ^= 0x3;

}

void _activation_check_proc_00_func_1702054755(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] <<= _activatnvar_confusing_chararray_5[0x5];

	/* inline */ _activation_check_proc_00_func_259645134(_activatnvar_confusing_char_1, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_00_func_1649761876(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_1499058102(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_00_func_544675000(char& _activatnvar_confusing_char_c, U8& _activatnvar_t0)
{
	_activatnvar_confusing_char_c &= _activatnvar_t0;

}

void _activation_check_proc_00_func_956079061(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("61d4edf6-5b3e-0ddf-4d81-b1f6aebf1c1e");

}

void _activation_check_proc_00_func_1201987510(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_00_func_1556850456(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_00_func_1630010869(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_00_func_105428840(char& _activatnvar_confusing_char_8, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_8 *= _activatnvar_confusing_char_b;

}

void _activation_check_proc_00_func_97869260(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_4)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x4] != _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_00_func_1221930387(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_7[0x8] <<= _activatnvar_so.mData[0xf];

}

void _activation_check_proc_00_func_1425566671(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_00_func_1361306270(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_00_func_2039767893(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x0] = _activatnvar_confusing_chararray_4[0x4];

}

void _activation_check_proc_00_func_343070762(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] *= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_00_func_1805343511(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 &= _activatnvar_confusing_LLUUID_1.mData[0xd];

}

void _activation_check_proc_00_func_600676821(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 <<= 0xc;

}

void _activation_check_proc_00_func_753888656(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] |= _activatnvar_confusing_LLUUID_7.mData[0xb];

}

void _activation_check_proc_00_func_1812630728(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_00_func_926394171(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1498833833(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_00_func_435680964(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1890010323(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("b39c2304-a54a-4b66-90f0-ee4dd17e31dd");

}

void _activation_check_proc_00_func_163504522(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_char_c |= _activatnvar_section2.mData[0x2];

}

void _activation_check_proc_00_func_2111854939(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_00_func_1521367204(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_6 <<= _activatnvar_confusing_char_e;

	_activation_check_proc_00_func_1219530850(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_00_func_2111854939(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_00_func_1633068066(_activatnvar_confusing_U8_2);
}

void _activation_check_proc_00_func_1219530850(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] ^= _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_00_func_36479511(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_308473792(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_LLUUID_1.mData[0x9];

}

void _activation_check_proc_00_func_384940439(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	/* inline */ _activation_check_proc_00_func_426435522(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_00_func_308473792(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_7);
	_activation_check_proc_00_func_36479511(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_835710869(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 &= _activatnvar_confusing_LLUUID_f.mData[0xc];

}

void _activation_check_proc_00_func_72969548(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_235262463(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_00_func_1059513628(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_00_func_1407678641(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_9.mData[0x6] = _activatnvar_confusing_chararray_8[0x8];

}

void _activation_check_proc_00_func_1096623565(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_6.mData[0x0] ^= _activatnvar_confusing_chararray_a[0x2];

	_activation_check_proc_00_func_420280811(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_00_func_420280811(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_00_func_1015019497(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_00_func_1466941559(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1245262315()
{
	
}

void _activation_check_proc_00_func_456158696(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x1] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_00_func_1439956912(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("6112ba09-9647-8234-db0b-18291d96a388");

}

void _activation_check_proc_00_func_640278278(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x4] <<= _activatnvar_fscked.mData[0x3];

}

void _activation_check_proc_00_func_1391942738(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_00_func_640278278(_activatnvar_fscked, _activatnvar_confusing_chararray_9);
	_activation_check_proc_00_func_1245262315();
	_activation_check_proc_00_func_456158696(_activatnvar_confusing_U8_9, _activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_00_func_1439956912(_activatnvar_confusing_LLUUID_1);
	_activation_check_proc_00_func_1466941559(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_646063422(bool& _activatnvar_generic_bool_0, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	/* inline */ _activation_check_proc_00_func_1768614000(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_generic_bool_1, _activatnvar_feat);
}

void _activation_check_proc_00_func_63272014(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_4 ^= _activatnvar_confusing_int_7;

	/* inline */ _activation_check_proc_00_func_837932361(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_2081711646(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_00_func_1388691531(LLUUID& _activatnvar_so, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_section2;

	_activation_check_proc_00_func_2081711646(_activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_00_func_1417268815(_activatnvar_confusing_LLUUID_b, _activatnvar_so);
}

void _activation_check_proc_00_func_1031982095(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x8] = _activatnvar_confusing_chararray_0[0xf];

}

void _activation_check_proc_00_func_321864811(bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_1, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_3;

	_activation_check_proc_00_func_1031982095(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_00_func_1589580622(_activatnvar_confusing_U8_e, _activatnvar_confusing_char_b);
}

void _activation_check_proc_00_func_1081118706(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_00_func_2072344121(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_00_func_219009931(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x7] == 0xf) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_00_func_2072344121(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_00_func_1012078131(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xc] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_00_func_822536242(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_pos, char& _activatnvar_confusing_char_e, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_1514791358(_activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_00_func_210837403(_activatnvar_pos, _activatnvar_confusing_char_e, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_00_func_229386741(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_00_func_1720913174(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 <<= 0xe;

}

void _activation_check_proc_00_func_425450659(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1312443206(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_00_func_867860069(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_d.mData[0xe] ^= _activatnvar_section2.mData[0x5];

}

void _activation_check_proc_00_func_1003401898(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_3;

	_activation_check_proc_00_func_1207428097(_activatnvar_confusing_char_1, _activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_00_func_1207428097(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_char_1++;

	if(_activatnvar_confusing_LLUUID_c.mData[0xf] != 0x3) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_00_func_1259247573(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
	/* inline */ _activation_check_proc_00_func_459654937(_activatnvar_t0);
}

void _activation_check_proc_00_func_1722862730()
{
	
}

void _activation_check_proc_00_func_118801613(int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_1368785258(_activatnvar_confusing_int_8);
}

void _activation_check_proc_00_func_891176459(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_00_func_679622831(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x3] = _activatnvar_ser_digest[0x3];

}

void _activation_check_proc_00_func_1974721199(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x1] == 0x2) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_00_func_1123387974(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_1726826360(_activatnvar_section2, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_00_func_1549252577(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_code;

}

void _activation_check_proc_00_func_452464044(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_00_func_1448914582(LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] ^= _activatnvar_fscked.mData[0x0];

	_activation_check_proc_00_func_452464044(_activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_00_func_1129650062(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_00_func_552449796(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_9.mData[0xc] |= _activatnvar_confusing_LLUUID_b.mData[0x0];

	/* inline */ _activation_check_proc_00_func_1734267209(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_00_func_793446139(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_00_func_319184060(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("071a9bd1-a162-b36d-caaa-e6a9e58fbfc0");

	/* inline */ _activation_check_proc_00_func_60402870(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_00_func_853969598(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_00_func_2127755958(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_1395744834(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1161419474(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] &= _activatnvar_confusing_chararray_c[0x9];

}

void _activation_check_proc_00_func_1683489794(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_00_func_178842387(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_287726244(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	
	/* inline */ _activation_check_proc_00_func_1117699930(_activatnvar_confusing_chararray_e, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_00_func_524342046(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("3b680db7-74f8-c729-7020-d0e268d2d459");

	_activation_check_proc_00_func_1074168308(_activatnvar_confusing_char_0, _activatnvar_section1);
}

void _activation_check_proc_00_func_1074168308(char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_0 &= _activatnvar_section1.mData[0xa];

}

void _activation_check_proc_00_func_937174072(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_0.mData[0x8] *= _activatnvar_confusing_LLUUID_6.mData[0xf];

}

void _activation_check_proc_00_func_1047184477(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] &= _activatnvar_name_digest[0xe];

}

void _activation_check_proc_00_func_590782515(unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_00_func_1967452701(_activatnvar_confusing_int_6, _activatnvar_confusing_int_5);
	_activation_check_proc_00_func_1047184477(_activatnvar_confusing_LLUUID_8, _activatnvar_name_digest);
}

void _activation_check_proc_00_func_2123194478(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("8ae159ce-d127-a6f4-6a00-0c91744a1abc");

}

void _activation_check_proc_00_func_2108643187(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x0] |= _activatnvar_lace.mData[0x8];

	/* inline */ _activation_check_proc_00_func_357180047(_activatnvar_generic_bool_0);
}

void _activation_check_proc_00_func_571544607(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_00_func_1741081759(bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_00_func_119984146(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_00_func_2108393183()
{
	
}

void _activation_check_proc_00_func_562971739(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_944349997(unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_int_3 <<= 0xf;

	_activation_check_proc_00_func_2129721752(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_00_func_2129721752(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x5] >>= _activatnvar_confusing_LLUUID_e.mData[0x4];

}

void _activation_check_proc_00_func_1706764587(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_0, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_0 += 0x6;

	/* inline */ _activation_check_proc_00_func_1821595480(_activatnvar_confusing_int_b);
	_activation_check_proc_00_func_116366799(_activatnvar_t0, _activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_00_func_1942598975(_activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_00_func_1942598975(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_d = _activatnvar_confusing_chararray_1[0x2];

}

void _activation_check_proc_00_func_116366799(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos &= 7;
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_00_func_262107178(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_10129995(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_00_func_294376767(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_a.mData[0x4] >>= _activatnvar_confusing_LLUUID_5.mData[0xe];

}

void _activation_check_proc_00_func_1524337189()
{
	
}

void _activation_check_proc_00_func_885681326(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_code;

	_activation_check_proc_00_func_1524337189();
}

void _activation_check_proc_00_func_80071574(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_2085111412(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[12];
}

void _activation_check_proc_00_func_862197710(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_confusing_U8_5 += _activatnvar_confusing_chararray_9[0x5];

	/* inline */ _activation_check_proc_00_func_1914861104();
}

void _activation_check_proc_00_func_1644079597(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("3b828627-aa89-1fb9-6c7b-c168a0a6af65");

}

void _activation_check_proc_00_func_1382207940(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_00_func_1414346204(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_8;

}

void _activation_check_proc_00_func_527607228(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_1 >>= _activatnvar_confusing_chararray_2[0x3];

}

void _activation_check_proc_00_func_451357410(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_00_func_43577319(U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("ae0f059f-1df0-2dcd-6832-9208c3fc0034");

	_activation_check_proc_00_func_278189421(_activatnvar_pos, _activatnvar_so, _activatnvar_t0);
}

void _activation_check_proc_00_func_278189421(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_00_func_2121915816(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_char_a += _activatnvar_confusing_U8_e;

}

void _activation_check_proc_00_func_344858739(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_00_func_2097483721(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_pos |= 8;
	/* inline */ _activation_check_proc_00_func_994921996(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_e);
	_activation_check_proc_00_func_344858739(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_00_func_671687380(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_00_func_294541642(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 ^= 0x4;

}

void _activation_check_proc_00_func_2060002762(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_1.mData[0xa];

}

void _activation_check_proc_00_func_1754372272(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_00_func_1144695938(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_int_3 = _activatnvar_confusing_int_7;

	_activation_check_proc_00_func_1754372272(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_00_func_1314108709(LLMD5*& _activatnvar_nmd5, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_00_func_53269157(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xa] == _activatnvar_confusing_char_6) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_00_func_233858420(LLUUID& _activatnvar_confusing_LLUUID_7, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_LLUUID_7.mData[0x4];

}

void _activation_check_proc_00_func_325613189(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_c.mData[0xc];

}

void _activation_check_proc_00_func_818697646(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_LLUUID_0.mData[0xe] &= _activatnvar_confusing_chararray_c[0x6];

	if(_activatnvar_confusing_LLUUID_2.mData[0xc] != 0x7) _activatnvar_confusing_bool_1 = false;

	_activation_check_proc_00_func_325613189(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_7);
}

void _activation_check_proc_00_func_431738689(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_00_func_349581940(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_7 ^= _activatnvar_confusing_char_e;

	/* inline */ _activation_check_proc_00_func_579815393(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_chararray_7);
	/* inline */ _activation_check_proc_00_func_925471875(_activatnvar_confusing_bool_4, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_U8_a);
	_activation_check_proc_00_func_431738689(_activatnvar_confusing_int_6);
	/* inline */ _activation_check_proc_00_func_975423459(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_00_func_1204022421(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_00_func_602514154(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0xe] <<= _activatnvar_combined_id.mData[0xf];

}

void _activation_check_proc_00_func_956686565()
{
	
}

void _activation_check_proc_00_func_908143332(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)0x7f;
	_activation_check_proc_00_func_1697852010(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_00_func_1697852010(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_00_func_2055422493(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("350bb095-3175-3c95-b052-69f95d8ea524");

}

void _activation_check_proc_00_func_1501652292(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_00_func_1142881700(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_int_7++;

	/* inline */ _activation_check_proc_00_func_1399021014(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_f);
	_activation_check_proc_00_func_1125995388(_activatnvar_confusing_char_9);
	/* inline */ _activation_check_proc_00_func_1225310234(_activatnvar_confusing_bool_3, _activatnvar_generic_bool_1);
}

void _activation_check_proc_00_func_1125995388(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_00_func_503404119(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 47; _activatnvar_strbuf_0[0] ^= 30; _activatnvar_strbuf_0[1] = 86; _activatnvar_strbuf_0[1] ^= 102; _activatnvar_strbuf_0[2] = 92; _activatnvar_strbuf_0[2] ^= 111; _activatnvar_strbuf_0[3] = 9; _activatnvar_strbuf_0[3] ^= 61; _activatnvar_strbuf_0[4] = 69; _activatnvar_strbuf_0[4] ^= 39; _activatnvar_strbuf_0[5] = 88; _activatnvar_strbuf_0[5] ^= 62; _activatnvar_strbuf_0[6] = 65; _activatnvar_strbuf_0[6] ^= 39; _activatnvar_strbuf_0[7] = 50; _activatnvar_strbuf_0[7] ^= 4; _activatnvar_strbuf_0[8] = 60; _activatnvar_strbuf_0[8] ^= 17; _activatnvar_strbuf_0[9] = 0; _activatnvar_strbuf_0[9] ^= 98; _activatnvar_strbuf_0[10] = 71; _activatnvar_strbuf_0[10] ^= 112; _activatnvar_strbuf_0[11] = 24; _activatnvar_strbuf_0[11] ^= 44; _activatnvar_strbuf_0[12] = 82; _activatnvar_strbuf_0[12] ^= 98; _activatnvar_strbuf_0[13] = 20; _activatnvar_strbuf_0[13] ^= 57; _activatnvar_strbuf_0[14] = 122; _activatnvar_strbuf_0[14] ^= 74; _activatnvar_strbuf_0[15] = 10; _activatnvar_strbuf_0[15] ^= 108; _activatnvar_strbuf_0[16] = 40; _activatnvar_strbuf_0[16] ^= 74; _activatnvar_strbuf_0[17] = 10; _activatnvar_strbuf_0[17] ^= 110; _activatnvar_strbuf_0[18] = 65; _activatnvar_strbuf_0[18] ^= 108; _activatnvar_strbuf_0[19] = 83; _activatnvar_strbuf_0[19] ^= 98; _activatnvar_strbuf_0[20] = 6; _activatnvar_strbuf_0[20] ^= 101; _activatnvar_strbuf_0[21] = 57; _activatnvar_strbuf_0[21] ^= 91; _activatnvar_strbuf_0[22] = 35; _activatnvar_strbuf_0[22] ^= 69; _activatnvar_strbuf_0[23] = 17; _activatnvar_strbuf_0[23] ^= 60; _activatnvar_strbuf_0[24] = 36; _activatnvar_strbuf_0[24] ^= 16; _activatnvar_strbuf_0[25] = 50; _activatnvar_strbuf_0[25] ^= 4; _activatnvar_strbuf_0[26] = 64; _activatnvar_strbuf_0[26] ^= 117; _activatnvar_strbuf_0[27] = 70; _activatnvar_strbuf_0[27] ^= 37; _activatnvar_strbuf_0[28] = 63; _activatnvar_strbuf_0[28] ^= 15; _activatnvar_strbuf_0[29] = 115; _activatnvar_strbuf_0[29] ^= 66; _activatnvar_strbuf_0[30] = 18; _activatnvar_strbuf_0[30] ^= 118; _activatnvar_strbuf_0[31] = 92; _activatnvar_strbuf_0[31] ^= 110; _activatnvar_strbuf_0[32] = 4; _activatnvar_strbuf_0[32] ^= 53; _activatnvar_strbuf_0[33] = 111; _activatnvar_strbuf_0[33] ^= 13; _activatnvar_strbuf_0[34] = 68; _activatnvar_strbuf_0[34] ^= 32; _activatnvar_strbuf_0[35] = 42; _activatnvar_strbuf_0[35] ^= 31; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_00_func_1091242106(LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_2 = false;

	/* inline */ _activation_check_proc_00_func_499006391(_activatnvar_confusing_LLUUID_b, _activatnvar_section2);
}

void _activation_check_proc_00_func_3960239(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_U8_d++;

	_activation_check_proc_00_func_2103187380(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_00_func_1228692533(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
	/* inline */ _activation_check_proc_00_func_1215272187(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_lace);
}

void _activation_check_proc_00_func_2103187380(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1991218722(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_00_func_1299004211(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_00_func_211708929(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_6.mData[0x4] += _activatnvar_confusing_chararray_9[0x2];

}

void _activation_check_proc_00_func_1140647493(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] >>= _activatnvar_confusing_LLUUID_1.mData[0x4];

	_activation_check_proc_00_func_211708929(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_00_func_590486837(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xe] != _activatnvar_confusing_U8_6) _activatnvar_confusing_bool_d = _activatnvar_doaccount;

}

void _activation_check_proc_00_func_325313055(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] *= _activatnvar_fscked.mData[0x0];

	_activation_check_proc_00_func_590486837(_activatnvar_doaccount, _activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_00_func_1457944993(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("6ceafde4-8072-1039-8263-2d99c27fe071");

}

void _activation_check_proc_00_func_1422833745(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_2[0x6] += _activatnvar_confusing_LLUUID_2.mData[0x7];

}

void _activation_check_proc_00_func_1806744245(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_00_func_2110501760(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1821162236(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_00_func_1396986071(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_00_func_40224238(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_0 *= _activatnvar_confusing_char_4;

}

void _activation_check_proc_00_func_1799640230(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("e14b187e-3e5e-b2cc-7745-d02a868ba509");

}

void _activation_check_proc_00_func_1016215966(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_00_func_1242016968(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_00_func_1242016968(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x8] += _activatnvar_confusing_LLUUID_7.mData[0x9];

	
}

void _activation_check_proc_00_func_1112169813(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1811289634(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] |= _activatnvar_confusing_LLUUID_2.mData[0xb];

}

void _activation_check_proc_00_func_819159854(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_b &= _activatnvar_doaccount;

}

void _activation_check_proc_00_func_518075227(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_00_func_1343478337(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_00_func_1173341429(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a >>= 0xd;

}

void _activation_check_proc_00_func_721883689(bool& _activatnvar_confusing_bool_4, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_a, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_int_a &= 0xff;

	_activation_check_proc_00_func_47392793(_activatnvar_fscked, _activatnvar_code, _activatnvar_generic_iterator);
	_activation_check_proc_00_func_987976482(_activatnvar_generic_iterator);
	_activation_check_proc_00_func_1872855374(_activatnvar_confusing_bool_4, _activatnvar_confusing_U8_c, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_00_func_987976482(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1872855374(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_confusing_U8_d)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_d |= _activatnvar_confusing_U8_c;

}

void _activation_check_proc_00_func_47392793(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1190589088(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x5] *= _activatnvar_lace.mData[0xf];

}

void _activation_check_proc_00_func_1091924707(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_2;

	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_00_func_1327478831(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_00_func_1413193618(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
	_activation_check_proc_00_func_1327478831(_activatnvar_name_digest, _activatnvar_combined_id);
	_activation_check_proc_00_func_1091924707(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_00_func_1812438146()
{
	
}

void _activation_check_proc_00_func_1136782353(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_00_func_345225048(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_f[0x1] <<= _activatnvar_confusing_LLUUID_0.mData[0x3];

	/* inline */ _activation_check_proc_00_func_1714170862(_activatnvar_confusing_char_c, _activatnvar_so);
}

void _activation_check_proc_00_func_1576302847(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_00_func_1599306871(_activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_00_func_1817895661(U8& _activatnvar_confusing_U8_8, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_8 ^= _activatnvar_feat;

}

void _activation_check_proc_00_func_1018603165()
{
	
}

void _activation_check_proc_00_func_620888756(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_00_func_1926098088(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] += _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_00_func_157960829(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_00_func_1146634869(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xa] &= _activatnvar_confusing_LLUUID_a.mData[0x8];

	_activation_check_proc_00_func_687994770(_activatnvar_confusing_chararray_4, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_00_func_687994770(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_00_func_99789455(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_9 = _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_00_func_365985630(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_e.mData[0xd] |= _activatnvar_confusing_LLUUID_f.mData[0x3];

}

void _activation_check_proc_00_func_1899635409(U8& _activatnvar_t0, U8& _activatnvar_pos, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_00_func_1880483085(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 &= _activatnvar_confusing_chararray_9[0xc];

}

void _activation_check_proc_00_func_913922848(unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x0] |= _activatnvar_confusing_chararray_6[0xb];

}

void _activation_check_proc_00_func_1788325996(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] *= _activatnvar_confusing_chararray_1[0x0];

}

void _activation_check_proc_00_func_49400926(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_476841790(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_a.mData[0x8] = _activatnvar_name_digest[0xa];

	/* inline */ _activation_check_proc_00_func_1158627475(_activatnvar_confusing_int_2, _activatnvar_confusing_int_f);
}

void _activation_check_proc_00_func_1230314368(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_00_func_1216405613(unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x9] >>= _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_00_func_455779875(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_0[0x9] <<= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_00_func_855306920(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_262133970(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_68720662(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_457891060(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_00_func_1680924022(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_553954596(char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_911425318(_activatnvar_confusing_U8_3, _activatnvar_confusing_char_4, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_00_func_2099934702(char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_00_func_650505243(unsigned char* _activatnvar_confusing_chararray_c, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a *= _activatnvar_confusing_chararray_c[0x5];

	_activation_check_proc_00_func_2099934702(_activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_generic_bool_1, _activatnvar_lace);
}

void _activation_check_proc_00_func_1718434758(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_so, U8& _activatnvar_t1, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_b = false;

	/* inline */ _activation_check_proc_00_func_886214626(_activatnvar_t1, _activatnvar_so, _activatnvar_pos);
}

void _activation_check_proc_00_func_76089646(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_char_3 *= _activatnvar_confusing_chararray_2[0xd];

}

void _activation_check_proc_00_func_510050352(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_confusing_chararray_b[0xd];

	_activation_check_proc_00_func_76089646(_activatnvar_confusing_char_3, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_00_func_469677796(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_00_func_1717878513(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_e &= _activatnvar_confusing_LLUUID_c.mData[0xc];

}

void _activation_check_proc_00_func_1698078540(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_2146650875(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x1] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_00_func_1006873830(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_doaccount)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_f = _activatnvar_doaccount;

}

void _activation_check_proc_00_func_1321347200(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 <<= _activatnvar_confusing_char_0;

}

void _activation_check_proc_00_func_1272236911(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_LLUUID_4.mData[0x1] <<= _activatnvar_confusing_chararray_d[0xc];

	_activation_check_proc_00_func_1321347200(_activatnvar_confusing_char_0, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_00_func_66842531(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1115749012()
{
	
}

void _activation_check_proc_00_func_1560624489(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_00_func_418918268(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_8 ^= _activatnvar_confusing_chararray_6[0x9];

}

void _activation_check_proc_00_func_1887967983(U8& _activatnvar_t0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	/* inline */ _activation_check_proc_00_func_1202491313(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_3, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_00_func_1835933812(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("da114c5c-c72b-40bc-ab9d-6e88d847c92e");

}

void _activation_check_proc_00_func_1357261934(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_5, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_00_func_1795926056(_activatnvar_confusing_bool_8, _activatnvar_confusing_char_5);
}

void _activation_check_proc_00_func_1795926056(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_5)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_5 &= 0x7;

}

void _activation_check_proc_00_func_1525812616(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_791970654(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_2.mData[0x9] &= _activatnvar_confusing_chararray_9[0xb];

}

void _activation_check_proc_00_func_236571962(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_2[0xe] ^= _activatnvar_confusing_LLUUID_0.mData[0xe];

}

void _activation_check_proc_00_func_1640032624(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_00_func_830904494(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_00_func_1816731445(unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_5;

	_activation_check_proc_00_func_1496128514(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_00_func_1496128514(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x4] &= _activatnvar_confusing_LLUUID_c.mData[0x5];

}

void _activation_check_proc_00_func_118241838(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_00_func_1816484910(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_LLUUID_5.mData[0x4];

	/* inline */ _activation_check_proc_00_func_682602043(_activatnvar_t0);
}

void _activation_check_proc_00_func_122008802(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_00_func_706813736(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	
	_activation_check_proc_00_func_95424364(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_00_func_95424364(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[8] = _activatnvar_name_digest[8];
}

void _activation_check_proc_00_func_1871994836(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_00_func_328497714(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] ^= _activatnvar_confusing_LLUUID_f.mData[0x2];

	_activation_check_proc_00_func_1871994836(_activatnvar_pos);
}

void _activation_check_proc_00_func_177025405(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xd] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_00_func_1553069410(_activatnvar_confusing_int_a);
}

void _activation_check_proc_00_func_744744675(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_00_func_1733877470(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_2123929550(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_2[0x6] *= _activatnvar_confusing_chararray_1[0x1];

}

void _activation_check_proc_00_func_248325457(int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_char_e++;

	_activation_check_proc_00_func_1339430912(_activatnvar_confusing_int_4);
	/* inline */ _activation_check_proc_00_func_1209656904(_activatnvar_confusing_int_3, _activatnvar_confusing_int_7);
}

void _activation_check_proc_00_func_1339430912(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_00_func_1608119502(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_00_func_1364014209(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_00_func_274317409(_activatnvar_confusing_char_6, _activatnvar_confusing_bool_7, _activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_00_func_255764336(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_00_func_1821933061(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_so;

}

void _activation_check_proc_00_func_1711823216(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_00_func_1659236611(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_00_func_247054149(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_t1, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_chararray_4[0x2];

	_activation_check_proc_00_func_1659236611(_activatnvar_pos, _activatnvar_t1, _activatnvar_so);
	_activation_check_proc_00_func_218861415(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_00_func_218861415(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_00_func_166567894(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] <<= _activatnvar_confusing_LLUUID_d.mData[0x0];

}

void _activation_check_proc_00_func_130601271(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_LLUUID_3.mData[0x1] ^= _activatnvar_name_digest[0x3];

	_activation_check_proc_00_func_166567894(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_00_func_1493351368(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 <<= 0xe;

}

void _activation_check_proc_00_func_906129620(int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_5, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_00_func_2015829516(_activatnvar_confusing_U8_5, _activatnvar_confusing_bool_9, _activatnvar_confusing_char_f);
	_activation_check_proc_00_func_1493351368(_activatnvar_confusing_int_5);
}

void _activation_check_proc_00_func_2015829516(U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_f)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_char_f &= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_00_func_2005422471(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] &= _activatnvar_confusing_LLUUID_5.mData[0xb];

}

void _activation_check_proc_00_func_480833853(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_00_func_692567309(bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_doaccount;

	_activation_check_proc_00_func_480833853(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_00_func_1735201228(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_167984992(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_00_func_1735201228(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_448500209(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_code;

	/* inline */ _activation_check_proc_00_func_1553806885(_activatnvar_confusing_bool_a, _activatnvar_confusing_U8_c, _activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_00_func_807679144();
	_activation_check_proc_00_func_172645815(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_00_func_172645815(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("ddd71ff4-b041-0415-d48a-90d742fcd70c");

}

void _activation_check_proc_00_func_141722613(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_6[0x1] += _activatnvar_confusing_chararray_7[0xa];

}

void _activation_check_proc_00_func_1213725875(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_00_func_141722613(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_00_func_276222755(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xf] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_00_func_2128382316(_activatnvar_confusing_int_8);
	/* inline */ _activation_check_proc_00_func_2040082473(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_00_func_2142539838(_activatnvar_confusing_LLUUID_d, _activatnvar_section2);
	/* inline */ _activation_check_proc_00_func_1141158147(_activatnvar_confusing_int_c);
}

void _activation_check_proc_00_func_2128382316(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_00_func_686787588(char& _activatnvar_confusing_char_3, U8& _activatnvar_t1)
{
	_activatnvar_confusing_char_3 |= _activatnvar_t1;

}

void _activation_check_proc_00_func_44661093(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xf] != 0x4) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_00_func_1425217536(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_00_func_578699590(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_d, int& _activatnvar_confusing_int_6, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x8] != _activatnvar_confusing_U8_f) _activatnvar_confusing_bool_6 = true;

	_activation_check_proc_00_func_1375613738(_activatnvar_confusing_int_6);
	_activation_check_proc_00_func_1261854810(_activatnvar_confusing_char_8, _activatnvar_confusing_U8_d);
	_activation_check_proc_00_func_1425217536(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_00_func_44661093(_activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_00_func_1375613738(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_00_func_1261854810(char& _activatnvar_confusing_char_8, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_00_func_995817674(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_section1;

	_activation_check_proc_00_func_339969641(_activatnvar_strbuf_0);
}

void _activation_check_proc_00_func_339969641(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 73; _activatnvar_strbuf_0[0] ^= 113; _activatnvar_strbuf_0[1] = 96; _activatnvar_strbuf_0[1] ^= 2; _activatnvar_strbuf_0[2] = 119; _activatnvar_strbuf_0[2] ^= 20; _activatnvar_strbuf_0[3] = 13; _activatnvar_strbuf_0[3] ^= 56; _activatnvar_strbuf_0[4] = 101; _activatnvar_strbuf_0[4] ^= 81; _activatnvar_strbuf_0[5] = 96; _activatnvar_strbuf_0[5] ^= 84; _activatnvar_strbuf_0[6] = 85; _activatnvar_strbuf_0[6] ^= 103; _activatnvar_strbuf_0[7] = 95; _activatnvar_strbuf_0[7] ^= 106; _activatnvar_strbuf_0[8] = 50; _activatnvar_strbuf_0[8] ^= 31; _activatnvar_strbuf_0[9] = 124; _activatnvar_strbuf_0[9] ^= 76; _activatnvar_strbuf_0[10] = 33; _activatnvar_strbuf_0[10] ^= 16; _activatnvar_strbuf_0[11] = 101; _activatnvar_strbuf_0[11] ^= 83; _activatnvar_strbuf_0[12] = 42; _activatnvar_strbuf_0[12] ^= 26; _activatnvar_strbuf_0[13] = 127; _activatnvar_strbuf_0[13] ^= 82; _activatnvar_strbuf_0[14] = 70; _activatnvar_strbuf_0[14] ^= 118; _activatnvar_strbuf_0[15] = 105; _activatnvar_strbuf_0[15] ^= 89; _activatnvar_strbuf_0[16] = 30; _activatnvar_strbuf_0[16] ^= 38; _activatnvar_strbuf_0[17] = 46; _activatnvar_strbuf_0[17] ^= 28; _activatnvar_strbuf_0[18] = 30; _activatnvar_strbuf_0[18] ^= 51; _activatnvar_strbuf_0[19] = 113; _activatnvar_strbuf_0[19] ^= 66; _activatnvar_strbuf_0[20] = 16; _activatnvar_strbuf_0[20] ^= 34; _activatnvar_strbuf_0[21] = 3; _activatnvar_strbuf_0[21] ^= 51; _activatnvar_strbuf_0[22] = 31; _activatnvar_strbuf_0[22] ^= 45; _activatnvar_strbuf_0[23] = 14; _activatnvar_strbuf_0[23] ^= 35; _activatnvar_strbuf_0[24] = 42; _activatnvar_strbuf_0[24] ^= 73; _activatnvar_strbuf_0[25] = 59; _activatnvar_strbuf_0[25] ^= 3; _activatnvar_strbuf_0[26] = 68; _activatnvar_strbuf_0[26] ^= 116; _activatnvar_strbuf_0[27] = 125; _activatnvar_strbuf_0[27] ^= 79; _activatnvar_strbuf_0[28] = 91; _activatnvar_strbuf_0[28] ^= 107; _activatnvar_strbuf_0[29] = 49; _activatnvar_strbuf_0[29] ^= 3; _activatnvar_strbuf_0[30] = 79; _activatnvar_strbuf_0[30] ^= 118; _activatnvar_strbuf_0[31] = 102; _activatnvar_strbuf_0[31] ^= 86; _activatnvar_strbuf_0[32] = 42; _activatnvar_strbuf_0[32] ^= 26; _activatnvar_strbuf_0[33] = 20; _activatnvar_strbuf_0[33] ^= 44; _activatnvar_strbuf_0[34] = 74; _activatnvar_strbuf_0[34] ^= 122; _activatnvar_strbuf_0[35] = 123; _activatnvar_strbuf_0[35] ^= 73; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_00_func_133903109(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1782742430(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_00_func_1331713335(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1936201574(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 *= _activatnvar_confusing_int_0;

}

void _activation_check_proc_00_func_1869756601(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_00_func_1023817363();
}

void _activation_check_proc_00_func_1023817363()
{
	
}

void _activation_check_proc_00_func_297274092(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_1)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_2 += _activatnvar_confusing_U8_1;

}

void _activation_check_proc_00_func_1272957232(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_00_func_952798062(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_00_func_257524816(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_26645073(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_2012900712(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_0)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x5] == _activatnvar_confusing_U8_0) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_00_func_207311457(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_00_func_2101260144(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_2101260144(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1410928309(U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xe] == _activatnvar_t1) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_00_func_1560495488(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] ^= _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_00_func_553770201(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_6[0x0] = _activatnvar_so.mData[0x9];

}

void _activation_check_proc_00_func_2141147865(int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_5, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_4 &= _activatnvar_confusing_int_7;

	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_00_func_1015551588(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x4] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_00_func_2106737468(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_00_func_649125625(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_5 = _activatnvar_confusing_U8_f;

	/* inline */ _activation_check_proc_00_func_1339017219(_activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_2129977389(unsigned char* _activatnvar_confusing_chararray_9, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_chararray_9[0x4];

}

void _activation_check_proc_00_func_801699374(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
}

void _activation_check_proc_00_func_1752311064(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_U8_f <<= _activatnvar_confusing_chararray_e[0x3];

}

void _activation_check_proc_00_func_478117143(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_00_func_1222134422(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_00_func_623493821(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_00_func_1802659693(_activatnvar_generic_iterator);
	_activation_check_proc_00_func_1413782658(_activatnvar_secret, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1413782658(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1653082708(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("490a35a2-f5d8-11a0-2a57-2859e5620489");

}

void _activation_check_proc_00_func_469174072(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_7[0xd] += _activatnvar_confusing_LLUUID_c.mData[0x7];

	_activation_check_proc_00_func_1653082708(_activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_00_func_917102133(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_00_func_1341421350(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_903870705(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_1891568356(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_00_func_1637836005(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_00_func_366213855(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("f1b96f3d-67ee-7acc-c307-41b15d0e73f8");

}

void _activation_check_proc_00_func_118327398(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_00_func_531104510(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x2] >>= _activatnvar_ser_digest[0x9];

}

void _activation_check_proc_00_func_202681020(char& _activatnvar_feat, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_feat;

}

void _activation_check_proc_00_func_96712125(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_LLUUID_6.mData[0x7];

}

void _activation_check_proc_00_func_97161276(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_00_func_1066583834(char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 <<= 0x2;

	_activation_check_proc_00_func_97161276(_activatnvar_confusing_char_e);
}

void _activation_check_proc_00_func_860910684(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_441378339(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_00_func_860910684(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_00_func_1851789846(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] |= _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_00_func_491882642(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

	/* inline */ _activation_check_proc_00_func_104995841();
}

void _activation_check_proc_00_func_157796199(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_00_func_1970598973(int& _activatnvar_confusing_int_d)
{
	
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_00_func_1800658618(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x9] = _activatnvar_confusing_LLUUID_4.mData[0x7];

}

void _activation_check_proc_00_func_872588300(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_char_b = 0xc;

}

void _activation_check_proc_00_func_1456075114(bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_e, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_int_e++;

	_activation_check_proc_00_func_872588300(_activatnvar_confusing_char_b, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_00_func_1186940059(char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_00_func_256437318();
	_activation_check_proc_00_func_1536661825();
	_activation_check_proc_00_func_2016755590(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_00_func_256437318()
{
	
}

void _activation_check_proc_00_func_1536661825()
{
	
}

void _activation_check_proc_00_func_2016755590(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0xf] += _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_00_func_1989586736(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
	_activation_check_proc_00_func_543566094(_activatnvar_confusing_U8_7, _activatnvar_confusing_U8_f);
	/* inline */ _activation_check_proc_00_func_214576483(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_00_func_543566094(U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_U8_f;

}

void _activation_check_proc_00_func_1391136093(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_0[0x6] ^= _activatnvar_ser_digest[0x4];

}

void _activation_check_proc_00_func_1577333452(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

	_activation_check_proc_00_func_62220017(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_00_func_62220017(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_2086020334(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_8, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_char_4 *= _activatnvar_confusing_chararray_8[0x8];

	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_00_func_1329962434(unsigned char* _activatnvar_confusing_chararray_2, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_code)
{
	
	/* inline */ _activation_check_proc_00_func_1849118247(_activatnvar_confusing_LLUUID_2, _activatnvar_code);
	/* inline */ _activation_check_proc_00_func_576514416(_activatnvar_t0);
	/* inline */ _activation_check_proc_00_func_196414157(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_00_func_472739630(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("3e6dbee5-7f8d-d28e-bf75-bc91c56b807a");

}

void _activation_check_proc_00_func_1903336450(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_00_func_179999351(int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xf] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_e;

	_activation_check_proc_00_func_1654589236(_activatnvar_confusing_int_8);
}

void _activation_check_proc_00_func_1654589236(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_00_func_942347198(LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 = 0xe;

	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_b.mData[0xf];

	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_00_func_866317115(char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x0] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_00_func_282170923(_activatnvar_confusing_char_f);
}

void _activation_check_proc_00_func_282170923(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_00_func_1640646762(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_8)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_8 *= _activatnvar_confusing_char_3;

}

void _activation_check_proc_00_func_1926941274(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 111; _activatnvar_strbuf_0[0] ^= 90; _activatnvar_strbuf_0[1] = 1; _activatnvar_strbuf_0[1] ^= 53; _activatnvar_strbuf_0[2] = 33; _activatnvar_strbuf_0[2] ^= 17; _activatnvar_strbuf_0[3] = 35; _activatnvar_strbuf_0[3] ^= 17; _activatnvar_strbuf_0[4] = 64; _activatnvar_strbuf_0[4] ^= 115; _activatnvar_strbuf_0[5] = 106; _activatnvar_strbuf_0[5] ^= 90; _activatnvar_strbuf_0[6] = 38; _activatnvar_strbuf_0[6] ^= 30; _activatnvar_strbuf_0[7] = 116; _activatnvar_strbuf_0[7] ^= 68; _activatnvar_strbuf_0[8] = 89; _activatnvar_strbuf_0[8] ^= 116; _activatnvar_strbuf_0[9] = 18; _activatnvar_strbuf_0[9] ^= 34; _activatnvar_strbuf_0[10] = 59; _activatnvar_strbuf_0[10] ^= 11; _activatnvar_strbuf_0[11] = 5; _activatnvar_strbuf_0[11] ^= 61; _activatnvar_strbuf_0[12] = 122; _activatnvar_strbuf_0[12] ^= 75; _activatnvar_strbuf_0[13] = 51; _activatnvar_strbuf_0[13] ^= 30; _activatnvar_strbuf_0[14] = 120; _activatnvar_strbuf_0[14] ^= 72; _activatnvar_strbuf_0[15] = 40; _activatnvar_strbuf_0[15] ^= 26; _activatnvar_strbuf_0[16] = 105; _activatnvar_strbuf_0[16] ^= 89; _activatnvar_strbuf_0[17] = 101; _activatnvar_strbuf_0[17] ^= 93; _activatnvar_strbuf_0[18] = 81; _activatnvar_strbuf_0[18] ^= 124; _activatnvar_strbuf_0[19] = 14; _activatnvar_strbuf_0[19] ^= 62; _activatnvar_strbuf_0[20] = 49; _activatnvar_strbuf_0[20] ^= 85; _activatnvar_strbuf_0[21] = 64; _activatnvar_strbuf_0[21] ^= 112; _activatnvar_strbuf_0[22] = 13; _activatnvar_strbuf_0[22] ^= 110; _activatnvar_strbuf_0[23] = 98; _activatnvar_strbuf_0[23] ^= 79; _activatnvar_strbuf_0[24] = 80; _activatnvar_strbuf_0[24] ^= 96; _activatnvar_strbuf_0[25] = 43; _activatnvar_strbuf_0[25] ^= 25; _activatnvar_strbuf_0[26] = 74; _activatnvar_strbuf_0[26] ^= 126; _activatnvar_strbuf_0[27] = 126; _activatnvar_strbuf_0[27] ^= 29; _activatnvar_strbuf_0[28] = 110; _activatnvar_strbuf_0[28] ^= 86; _activatnvar_strbuf_0[29] = 2; _activatnvar_strbuf_0[29] ^= 58; _activatnvar_strbuf_0[30] = 8; _activatnvar_strbuf_0[30] ^= 58; _activatnvar_strbuf_0[31] = 91; _activatnvar_strbuf_0[31] ^= 110; _activatnvar_strbuf_0[32] = 111; _activatnvar_strbuf_0[32] ^= 87; _activatnvar_strbuf_0[33] = 31; _activatnvar_strbuf_0[33] ^= 46; _activatnvar_strbuf_0[34] = 74; _activatnvar_strbuf_0[34] ^= 127; _activatnvar_strbuf_0[35] = 64; _activatnvar_strbuf_0[35] ^= 113; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_00_func_2069886688()
{
	
}

void _activation_check_proc_00_func_1150030305(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_1850630852(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_2102968769(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_6, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_6 = false;

	_activation_check_proc_00_func_1850630852(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code);
}

void _activation_check_proc_00_func_1429053491(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_00_func_2128559802(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("b5859f03-d10c-c304-82f8-333db52a6a74");

}

void _activation_check_proc_00_func_1515334322(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 <<= 0x3;

}

void _activation_check_proc_00_func_449522(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] &= _activatnvar_confusing_LLUUID_3.mData[0x2];

}

void _activation_check_proc_00_func_775303287(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("be88e614-b994-df5c-59c9-60e9d9aedc66");

	_activation_check_proc_00_func_449522(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_00_func_1885151138(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("f316c631-81d8-1107-0785-52021bafb655");

}

void _activation_check_proc_00_func_158788278(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_00_func_1885151138(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_00_func_588740001(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_chararray_8[0xb];

}

void _activation_check_proc_00_func_1632117500(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_8[0xa] *= _activatnvar_confusing_chararray_1[0xc];

}

void _activation_check_proc_00_func_820096765(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_00_func_1632117500(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_00_func_1306905357(LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_section2.mData[0x7];

}

void _activation_check_proc_00_func_145411981(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_00_func_860282597(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 <<= _activatnvar_confusing_chararray_a[0x7];

}

void _activation_check_proc_00_func_1264651050(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_name_digest, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_LLUUID_e.mData[0x3] &= _activatnvar_name_digest[0x8];

	/* inline */ _activation_check_proc_00_func_213956995(_activatnvar_confusing_U8_6, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_00_func_1743405224(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x8] == 0xc) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_00_func_1190368891(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_9++;

	/* inline */ _activation_check_proc_00_func_262636986(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_00_func_1838707124(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xc] >>= _activatnvar_confusing_chararray_e[0xf];

	/* inline */ _activation_check_proc_00_func_809740343(_activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_00_func_147142654(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_00_func_770509988(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_f = false;

	_activation_check_proc_00_func_598283713(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_00_func_1873251381(_activatnvar_confusing_U8_e, _activatnvar_confusing_char_1);
}

void _activation_check_proc_00_func_598283713(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_d[0x2] <<= _activatnvar_confusing_LLUUID_5.mData[0xa];

}

void _activation_check_proc_00_func_758880907(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_char_9 <<= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_00_func_1172757890(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_char_1 &= 0xe;

}

void _activation_check_proc_00_func_224335715(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = 0xb;

}

void _activation_check_proc_00_func_1036112674(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("9925c386-4859-f83c-a849-b7601b245dda");

}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
