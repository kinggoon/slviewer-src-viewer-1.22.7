// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation0d.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 0d

void _activation_check_proc_0d_func_1814907483(char& _activatnvar_confusing_char_4, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 |= 0xf;

	_activatnvar_confusing_char_4 = _activatnvar_confusing_chararray_f[0xf];

	_activation_check_proc_0d_func_1821503333(_activatnvar_secret, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1821503333(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1143797897(char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x1] == _activatnvar_confusing_char_9) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_0d_func_1615789519(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x7] != _activatnvar_confusing_char_2) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0d_func_1836341106(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_9, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	
	_activation_check_proc_0d_func_1615789519(_activatnvar_confusing_bool_7, _activatnvar_confusing_char_2, _activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_0d_func_1143797897(_activatnvar_confusing_char_9, _activatnvar_confusing_LLUUID_0, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_0d_func_1736800310(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_9.mData[0x6];

}

void _activation_check_proc_0d_func_1107158396(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_0d_func_1473215792(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_char_e++;

	_activation_check_proc_0d_func_1107158396(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0d_func_513953218(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_2, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_0d_func_1072099779(_activatnvar_section2, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_0d_func_1745697037(_activatnvar_confusing_chararray_f, _activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_0d_func_758927891(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_0d_func_1482062495(bool& _activatnvar_confusing_bool_9, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_f = false;

	_activation_check_proc_0d_func_1424605476(_activatnvar_confusing_int_b, _activatnvar_confusing_int_8);
}

void _activation_check_proc_0d_func_1424605476(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 *= _activatnvar_confusing_int_b;

}

void _activation_check_proc_0d_func_88106845(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b ^= 0xa;

}

void _activation_check_proc_0d_func_428540666(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 >>= 0xf;

}

void _activation_check_proc_0d_func_275920690(int& _activatnvar_confusing_int_5, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x3] == _activatnvar_pos) _activatnvar_confusing_bool_d = true;

	/* inline */ _activation_check_proc_0d_func_1070202711(_activatnvar_confusing_LLUUID_d);
	_activation_check_proc_0d_func_428540666(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0d_func_1659822738(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x3] ^= _activatnvar_confusing_chararray_8[0xf];

}

void _activation_check_proc_0d_func_172716444(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_e <<= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_0d_func_96390316(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] = _activatnvar_mac_digest[0x4];

}

void _activation_check_proc_0d_func_1155292265(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_a.mData[0xa] <<= _activatnvar_confusing_LLUUID_0.mData[0xc];

}

void _activation_check_proc_0d_func_79226710(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_e;

	_activation_check_proc_0d_func_172716444(_activatnvar_confusing_U8_e, _activatnvar_confusing_U8_4);
	_activation_check_proc_0d_func_96390316(_activatnvar_confusing_LLUUID_8, _activatnvar_mac_digest);
	_activation_check_proc_0d_func_1155292265(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_0d_func_1642651399(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("c172065b-846d-6631-c3d3-5ce7790e1ce5");

}

void _activation_check_proc_0d_func_1066940485(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_2.mData[0xc];

}

void _activation_check_proc_0d_func_1545348049(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_c[0x9] *= _activatnvar_name_digest[0x9];

}

void _activation_check_proc_0d_func_1846666675(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0d_func_1724074635(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0d_func_1846666675(_activatnvar_t0);
}

void _activation_check_proc_0d_func_2105036143(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0d_func_953561662(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0d_func_2076970805(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_so, LLUUID& _activatnvar_section2)
{
	_activatnvar_so ^= _activatnvar_section2;
	_activation_check_proc_0d_func_953561662(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_0d_func_223098557(unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c >>= _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_0d_func_2046136731(bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_6, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_0d_func_1529016816(_activatnvar_pos, _activatnvar_confusing_char_3, _activatnvar_confusing_bool_6);
	_activation_check_proc_0d_func_731924758(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_5);
	_activation_check_proc_0d_func_314513315(_activatnvar_confusing_chararray_8, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_0d_func_223098557(_activatnvar_confusing_chararray_7, _activatnvar_confusing_char_c);
}

void _activation_check_proc_0d_func_314513315(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xb] &= _activatnvar_confusing_chararray_8[0xc];

}

void _activation_check_proc_0d_func_1529016816(U8& _activatnvar_pos, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_3 <<= _activatnvar_pos;

}

void _activation_check_proc_0d_func_731924758(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_4.mData[0x9] <<= _activatnvar_confusing_chararray_5[0x1];

}

void _activation_check_proc_0d_func_1981960371(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0d_func_596724489(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_6)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0d_func_1390437335(LLUUID& _activatnvar_secret, int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x1] += _activatnvar_secret.mData[0xd];

	/* inline */ _activation_check_proc_0d_func_337136658(_activatnvar_confusing_int_d);
}

void _activation_check_proc_0d_func_1095828904(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 >>= _activatnvar_confusing_chararray_7[0x1];

}

void _activation_check_proc_0d_func_1617138229(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_5[0xc] *= _activatnvar_confusing_chararray_7[0x2];

}

void _activation_check_proc_0d_func_267937272(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_4;

	/* inline */ _activation_check_proc_0d_func_436726708(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_0d_func_1617138229(_activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_0d_func_301724276(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0d_func_1802611710(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= _activatnvar_confusing_int_4;

}

void _activation_check_proc_0d_func_465605927(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b *= 0xa;

	_activation_check_proc_0d_func_1802611710(_activatnvar_confusing_int_4, _activatnvar_confusing_int_e);
}

void _activation_check_proc_0d_func_649482030(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_0d_func_1704876281(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_0d_func_661286059(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_0d_func_1540521733(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0d_func_2118969426(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_5.mData[0xb];

}

void _activation_check_proc_0d_func_1626786240(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_section1;

}

void _activation_check_proc_0d_func_165969250(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x7] *= _activatnvar_confusing_LLUUID_f.mData[0x5];

}

void _activation_check_proc_0d_func_1684737487(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_chararray_f[0x9] = _activatnvar_combined_id.mData[0xe];

}

void _activation_check_proc_0d_func_226917973(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] += _activatnvar_confusing_LLUUID_f.mData[0x6];

}

void _activation_check_proc_0d_func_495623541(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_0d_func_464615793(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_0d_func_1726639031(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_int_8 &= 0xff;

	/* inline */ _activation_check_proc_0d_func_453068021(_activatnvar_confusing_LLUUID_9, _activatnvar_secret);
}

void _activation_check_proc_0d_func_837966399(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0d_func_867386151(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_4.mData[0xf] &= _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_0d_func_382319974(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_7)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x4] != _activatnvar_confusing_char_7) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_0d_func_1502859784(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_822331127(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xf] &= _activatnvar_confusing_LLUUID_2.mData[0x3];

}

void _activation_check_proc_0d_func_824939955(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_0d_func_822331127(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_0d_func_1196596380(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0d_func_193268279(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_d.mData[0x0] >>= _activatnvar_confusing_LLUUID_8.mData[0xc];

}

void _activation_check_proc_0d_func_1622137138(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_0d_func_1304473559(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("0c2ae0ad-0249-191c-cf9f-a2686dd05b80");

}

void _activation_check_proc_0d_func_664899283(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_0d_func_1321458608(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("7e08608b-6567-f990-d7a3-ab0e6794bf00");

}

void _activation_check_proc_0d_func_346870493(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 &= 0xa;

}

void _activation_check_proc_0d_func_311525488(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_1 *= _activatnvar_confusing_chararray_d[0x1];

}

void _activation_check_proc_0d_func_1949264889(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x8] &= _activatnvar_confusing_LLUUID_d.mData[0x0];

}

void _activation_check_proc_0d_func_1749908064(bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_0 += _activatnvar_confusing_int_e;

	/* inline */ _activation_check_proc_0d_func_325551111(_activatnvar_confusing_U8_b);
	_activation_check_proc_0d_func_1949264889(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_e);
	_activation_check_proc_0d_func_638617963(_activatnvar_confusing_LLUUID_4, _activatnvar_t1, _activatnvar_confusing_bool_5);
	/* inline */ _activation_check_proc_0d_func_277100150(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0d_func_638617963(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0xa] == _activatnvar_t1) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_0d_func_583469079(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_7 >>= _activatnvar_confusing_chararray_d[0x4];

	_activation_check_proc_0d_func_979561335(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0d_func_979561335(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_2.mData[0x9] <<= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_0d_func_1664981594(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("5ede1608-94ab-c5b6-a529-dd7ae041c8d6");

}

void _activation_check_proc_0d_func_843410932(LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_0d_func_929707949(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_0d_func_1949991625(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0d_func_1127513827(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_chararray_b[0x8];

}

void _activation_check_proc_0d_func_425771647(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1318511437(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[12];
	_activation_check_proc_0d_func_1774478137(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_0d_func_1075427050();
}

void _activation_check_proc_0d_func_1774478137(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0d_func_586924140(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_4)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
	_activation_check_proc_0d_func_412244221(_activatnvar_pos);
	_activation_check_proc_0d_func_893452539(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_8);
	_activation_check_proc_0d_func_1268669380(_activatnvar_confusing_chararray_a, _activatnvar_confusing_char_4);
}

void _activation_check_proc_0d_func_893452539(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0d_func_1268669380(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_chararray_a[0x6];

}

void _activation_check_proc_0d_func_412244221(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0d_func_564306819(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_code;

}

void _activation_check_proc_0d_func_1397937059(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_0d_func_685303366(std::string& _activatnvar_fullname, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_0d_func_171764031(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0d_func_1592144055(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_91196322(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_e)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x6] == _activatnvar_confusing_char_7) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0d_func_184923267(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0d_func_559802495(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0d_func_1096651098()
{
	
}

void _activation_check_proc_0d_func_1046227808(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_U8_3 >>= _activatnvar_confusing_char_c;

}

void _activation_check_proc_0d_func_1139222160(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_0d_func_281624439(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_0d_func_1139222160(_activatnvar_confusing_U8_9);
	/* inline */ _activation_check_proc_0d_func_166242147(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_0d_func_134284472(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0d_func_418001819(int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] |= _activatnvar_confusing_LLUUID_7.mData[0x1];

	_activation_check_proc_0d_func_134284472(_activatnvar_confusing_int_e);
}

void _activation_check_proc_0d_func_1896817101(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0d_func_1711857586(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0d_func_1568675084(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_0d_func_1936471872(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_730604218(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	
	/* inline */ _activation_check_proc_0d_func_1351640074(_activatnvar_generic_iterator);
	_activation_check_proc_0d_func_1936471872(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_579288472(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_318544575(char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_char_b &= 0x1;

}

void _activation_check_proc_0d_func_954839546(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0xc] >>= _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_0d_func_1256937688(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0d_func_894809163(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] = _activatnvar_mac_digest[0x3];

}

void _activation_check_proc_0d_func_101106029(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xf] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_0d_func_1446307814(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_372392573(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0d_func_1545853555(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e += 0x5;

}

void _activation_check_proc_0d_func_271419510(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_9;

}

void _activation_check_proc_0d_func_1420881108(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x8] == 0x4) _activatnvar_confusing_bool_a = false;

	_activation_check_proc_0d_func_1545853555(_activatnvar_confusing_U8_e);
	_activation_check_proc_0d_func_271419510(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0d_func_1014564783(char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_char_9 >>= _activatnvar_confusing_chararray_d[0xf];

}

void _activation_check_proc_0d_func_490824570(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_0d_func_2129354271(char& _activatnvar_feat, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0d_func_596073698(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_0d_func_2129354271(_activatnvar_feat, _activatnvar_doaccount, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1700073733(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xf] == _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_0d_func_682999670(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= _activatnvar_confusing_LLUUID_e.mData[0x3];

}

void _activation_check_proc_0d_func_1108624375(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_2, unsigned char* _activatnvar_confusing_chararray_0)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_2 = _activatnvar_confusing_bool_7;

	_activation_check_proc_0d_func_1939475130(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_c);
	/* inline */ _activation_check_proc_0d_func_245976839(_activatnvar_confusing_char_7, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0d_func_1939475130(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_0[0x0] <<= _activatnvar_confusing_chararray_c[0x1];

}

void _activation_check_proc_0d_func_1747435899(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0d_func_1383775266()
{
	
}

void _activation_check_proc_0d_func_1916848442(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] = _activatnvar_confusing_LLUUID_a.mData[0x5];

}

void _activation_check_proc_0d_func_839213043(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_b.mData[0xe] >>= _activatnvar_code.mData[0x9];

	/* inline */ _activation_check_proc_0d_func_682808316(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_0d_func_1916848442(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0d_func_1207693460(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_0d_func_1666661631(unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 >>= _activatnvar_confusing_chararray_c[0x3];

}

void _activation_check_proc_0d_func_1381584529(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0d_func_553561451(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xe] |= _activatnvar_confusing_LLUUID_f.mData[0xb];

}

void _activation_check_proc_0d_func_827659681(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_chararray_f[0xd];

}

void _activation_check_proc_0d_func_624951196(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x7] &= _activatnvar_confusing_chararray_e[0xb];

}

void _activation_check_proc_0d_func_1491142874(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_847408064(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_f;

	_activation_check_proc_0d_func_1491142874(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_717845682(_activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_fscked);
}

void _activation_check_proc_0d_func_1174540071(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

	_activation_check_proc_0d_func_808705237(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_0d_func_808705237(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0d_func_1208137903(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_section2;

}

void _activation_check_proc_0d_func_339712135(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_e &= _activatnvar_generic_bool_1;

	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0d_func_739608747(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_c.mData[0x2] &= _activatnvar_confusing_chararray_5[0xf];

}

void _activation_check_proc_0d_func_249877165(unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
	/* inline */ _activation_check_proc_0d_func_624317835(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
	/* inline */ _activation_check_proc_0d_func_2054172850(_activatnvar_confusing_chararray_f, _activatnvar_confusing_U8_7);
	_activation_check_proc_0d_func_739608747(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_5);
	_activation_check_proc_0d_func_339712135(_activatnvar_confusing_bool_e, _activatnvar_generic_bool_1, _activatnvar_confusing_bool_d, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_0d_func_1748148194(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x0] = _activatnvar_confusing_chararray_0[0xa];

	/* inline */ _activation_check_proc_0d_func_1049977489(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_f);
}

void _activation_check_proc_0d_func_1180259242(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0d_func_924953850(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_0d_func_417944621(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_0d_func_1620953112(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_code;

}

void _activation_check_proc_0d_func_572609850(LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0xf] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0d_func_1892339359(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1317704803(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_t1, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("5d6aea3f-8fca-22ab-9e22-b812cfb6171e");

	/* inline */ _activation_check_proc_0d_func_908283797(_activatnvar_confusing_int_e);
	_activation_check_proc_0d_func_1465297478(_activatnvar_t1, _activatnvar_section1, _activatnvar_confusing_char_f);
}

void _activation_check_proc_0d_func_1465297478(U8& _activatnvar_t1, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f |= _activatnvar_section1.mData[0x9];

	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_0d_func_1012847396(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= 0xb;

}

void _activation_check_proc_0d_func_649962606(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_1)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xd] == _activatnvar_confusing_char_1) _activatnvar_confusing_bool_2 = true;

}

void _activation_check_proc_0d_func_216565324(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_b, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_generic_iterator = 0;
	/* inline */ _activation_check_proc_0d_func_1856503077(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_c);
	/* inline */ _activation_check_proc_0d_func_314607293(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0d_func_1489302(LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_0++;

	_activation_check_proc_0d_func_312005410();
	/* inline */ _activation_check_proc_0d_func_528906416(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_0d_func_312005410()
{
	
}

void _activation_check_proc_0d_func_86583243(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1846713078(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_0d_func_196692178(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0d_func_1800361642(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e++;

}

void _activation_check_proc_0d_func_1260062433(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_0d_func_239021872(_activatnvar_confusing_U8_8, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_0d_func_1800361642(_activatnvar_confusing_U8_e);
}

void _activation_check_proc_0d_func_239021872(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_9.mData[0x3];

}

void _activation_check_proc_0d_func_659488427(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0d_func_511044087(_activatnvar_confusing_int_0);
}

void _activation_check_proc_0d_func_595364915(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_t1 += _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0d_func_796575258(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_7)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_2046278361(_activatnvar_confusing_int_7, _activatnvar_confusing_int_6);
}

void _activation_check_proc_0d_func_2046278361(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 >>= _activatnvar_confusing_int_7;

}

void _activation_check_proc_0d_func_1768542876(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0d_func_1798794222()
{
	
}

void _activation_check_proc_0d_func_1543506860(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[6];
}

void _activation_check_proc_0d_func_632665391(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_0d_func_834156559()
{
	
}

void _activation_check_proc_0d_func_948282943(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x0] = _activatnvar_confusing_LLUUID_1.mData[0x6];

}

void _activation_check_proc_0d_func_1554282508(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 79; _activatnvar_strbuf_0[0] ^= 121; _activatnvar_strbuf_0[1] = 123; _activatnvar_strbuf_0[1] ^= 75; _activatnvar_strbuf_0[2] = 79; _activatnvar_strbuf_0[2] ^= 123; _activatnvar_strbuf_0[3] = 66; _activatnvar_strbuf_0[3] ^= 115; _activatnvar_strbuf_0[4] = 49; _activatnvar_strbuf_0[4] ^= 2; _activatnvar_strbuf_0[5] = 114; _activatnvar_strbuf_0[5] ^= 17; _activatnvar_strbuf_0[6] = 56; _activatnvar_strbuf_0[6] ^= 8; _activatnvar_strbuf_0[7] = 124; _activatnvar_strbuf_0[7] ^= 78; _activatnvar_strbuf_0[8] = 77; _activatnvar_strbuf_0[8] ^= 96; _activatnvar_strbuf_0[9] = 74; _activatnvar_strbuf_0[9] ^= 122; _activatnvar_strbuf_0[10] = 70; _activatnvar_strbuf_0[10] ^= 116; _activatnvar_strbuf_0[11] = 20; _activatnvar_strbuf_0[11] ^= 32; _activatnvar_strbuf_0[12] = 15; _activatnvar_strbuf_0[12] ^= 57; _activatnvar_strbuf_0[13] = 99; _activatnvar_strbuf_0[13] ^= 78; _activatnvar_strbuf_0[14] = 74; _activatnvar_strbuf_0[14] ^= 122; _activatnvar_strbuf_0[15] = 18; _activatnvar_strbuf_0[15] ^= 34; _activatnvar_strbuf_0[16] = 11; _activatnvar_strbuf_0[16] ^= 56; _activatnvar_strbuf_0[17] = 120; _activatnvar_strbuf_0[17] ^= 72; _activatnvar_strbuf_0[18] = 106; _activatnvar_strbuf_0[18] ^= 71; _activatnvar_strbuf_0[19] = 91; _activatnvar_strbuf_0[19] ^= 105; _activatnvar_strbuf_0[20] = 90; _activatnvar_strbuf_0[20] ^= 107; _activatnvar_strbuf_0[21] = 17; _activatnvar_strbuf_0[21] ^= 33; _activatnvar_strbuf_0[22] = 55; _activatnvar_strbuf_0[22] ^= 14; _activatnvar_strbuf_0[23] = 114; _activatnvar_strbuf_0[23] ^= 95; _activatnvar_strbuf_0[24] = 77; _activatnvar_strbuf_0[24] ^= 117; _activatnvar_strbuf_0[25] = 21; _activatnvar_strbuf_0[25] ^= 45; _activatnvar_strbuf_0[26] = 14; _activatnvar_strbuf_0[26] ^= 59; _activatnvar_strbuf_0[27] = 38; _activatnvar_strbuf_0[27] ^= 23; _activatnvar_strbuf_0[28] = 115; _activatnvar_strbuf_0[28] ^= 71; _activatnvar_strbuf_0[29] = 113; _activatnvar_strbuf_0[29] ^= 72; _activatnvar_strbuf_0[30] = 121; _activatnvar_strbuf_0[30] ^= 73; _activatnvar_strbuf_0[31] = 70; _activatnvar_strbuf_0[31] ^= 39; _activatnvar_strbuf_0[32] = 4; _activatnvar_strbuf_0[32] ^= 103; _activatnvar_strbuf_0[33] = 4; _activatnvar_strbuf_0[33] ^= 60; _activatnvar_strbuf_0[34] = 71; _activatnvar_strbuf_0[34] ^= 34; _activatnvar_strbuf_0[35] = 110; _activatnvar_strbuf_0[35] ^= 93; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0d_func_816279181(char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_2;

	_activation_check_proc_0d_func_1554282508(_activatnvar_strbuf_0);
}

void _activation_check_proc_0d_func_130330807(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_5[0x2] ^= _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_0d_func_1635065315(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_U8_e += _activatnvar_confusing_char_9;

	/* inline */ _activation_check_proc_0d_func_1124186087(_activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0d_func_959278503(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_code;

}

void _activation_check_proc_0d_func_939822203(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0d_func_860050232(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] != _activatnvar_confusing_char_c) _activatnvar_confusing_bool_7 = true;

}

void _activation_check_proc_0d_func_982322995(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_8.mData[0x0] ^= _activatnvar_confusing_chararray_d[0xa];

}

void _activation_check_proc_0d_func_1549424650(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("6ff761a9-16e3-bd38-5c2b-4ce9d7121f4a");

}

void _activation_check_proc_0d_func_1661149180(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0d_func_1347729821(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0d_func_16692604()
{
	
}

void _activation_check_proc_0d_func_1597981622()
{
	
	_activation_check_proc_0d_func_16692604();
}

void _activation_check_proc_0d_func_1912713177(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_531160485(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0d_func_1813629147(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_0d_func_1008131483(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0d_func_629850331(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_e = true;

	/* inline */ _activation_check_proc_0d_func_377092125(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1574363304(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1289413895(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0d_func_1890540456(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_doaccount;

	_activation_check_proc_0d_func_1289413895(_activatnvar_generic_bool_0);
	_activation_check_proc_0d_func_173729062(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_173729062(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1961446197(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xa] *= _activatnvar_confusing_chararray_a[0xa];

	_activation_check_proc_0d_func_827893730(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0d_func_827893730(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_0d_func_1634630613(LLUUID& _activatnvar_confusing_LLUUID_0, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_LLUUID_0.mData[0xf];

}

void _activation_check_proc_0d_func_2076090025(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_LLUUID_4.mData[0x2];

}

void _activation_check_proc_0d_func_287243339(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_584570751(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_chararray_3[0x8] ^= _activatnvar_confusing_chararray_0[0xa];

	_activation_check_proc_0d_func_855835263(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_0d_func_860151030(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0d_func_855835263(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_6.mData[0xc] &= _activatnvar_confusing_chararray_4[0x1];

	
}

void _activation_check_proc_0d_func_268462607(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_941966418(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_770904889(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0d_func_692463324(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_0d_func_1240109868(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
}

void _activation_check_proc_0d_func_1529814598(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] &= _activatnvar_section1.mData[0x9];

	if(_activatnvar_confusing_LLUUID_9.mData[0x0] != 0x3) _activatnvar_confusing_bool_c = true;

	/* inline */ _activation_check_proc_0d_func_254950289(_activatnvar_confusing_char_7);
}

void _activation_check_proc_0d_func_1681111162(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0d_func_877581298(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0d_func_1722839920(U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 *= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_0d_func_1112315002(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_a.mData[0xf] &= _activatnvar_confusing_LLUUID_d.mData[0xf];

}

void _activation_check_proc_0d_func_1525606072(LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
	_activation_check_proc_0d_func_2078608215(_activatnvar_t0);
	_activation_check_proc_0d_func_1112315002(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0d_func_2078608215(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0d_func_1528692636(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0d_func_1160707032(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1756268904(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_d, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0d_func_1160707032(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_441863923(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_1826508544(_activatnvar_confusing_U8_d);
	/* inline */ _activation_check_proc_0d_func_290297146(_activatnvar_confusing_char_d);
}

void _activation_check_proc_0d_func_1817452048(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_0d_func_189560545(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 &= 0xe;

	_activation_check_proc_0d_func_14761223(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_5, _activatnvar_confusing_char_1);
}

void _activation_check_proc_0d_func_14761223(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_char_1 |= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_0d_func_796975092(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_b[0x0] *= _activatnvar_confusing_LLUUID_2.mData[0x2];

}

void _activation_check_proc_0d_func_1172626626(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0d_func_1173738988(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_LLUUID_e.mData[0xb];

}

void _activation_check_proc_0d_func_770213106(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_8)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x9] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0d_func_537451111(LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_9 = true;

	/* inline */ _activation_check_proc_0d_func_1368973089(_activatnvar_confusing_char_2, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0d_func_483722433(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0d_func_17975918(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_816611717(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] = _activatnvar_confusing_chararray_d[0x6];

	/* inline */ _activation_check_proc_0d_func_1138662026(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_0d_func_423320096(_activatnvar_confusing_chararray_1, _activatnvar_confusing_char_1);
}

void _activation_check_proc_0d_func_408019961(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0d_func_1448253237(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("918058df-6a86-6bfe-c26b-508ce23ec274");

	_activatnvar_confusing_U8_9 >>= _activatnvar_confusing_char_1;

}

void _activation_check_proc_0d_func_1270252316(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_7 &= _activatnvar_confusing_char_3;

}

void _activation_check_proc_0d_func_615880577(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_chararray_d[0x3] >>= _activatnvar_confusing_chararray_4[0x0];

	_activation_check_proc_0d_func_1448253237(_activatnvar_confusing_U8_9, _activatnvar_confusing_char_1, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_0d_func_1270252316(_activatnvar_confusing_U8_7, _activatnvar_confusing_char_3, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0d_func_250614606(LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_3, char& _activatnvar_feat, int& _activatnvar_confusing_int_a)
{
	_activatnvar_doaccount = false;
	/* inline */ _activation_check_proc_0d_func_1062378457(_activatnvar_confusing_int_a);
	_activation_check_proc_0d_func_1546309498(_activatnvar_confusing_bool_3, _activatnvar_doaccount);
	_activation_check_proc_0d_func_363870091(_activatnvar_feat, _activatnvar_lace);
}

void _activation_check_proc_0d_func_363870091(char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[3];
}

void _activation_check_proc_0d_func_1546309498(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_doaccount)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_0d_func_1654826884(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0d_func_1499985323(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_3)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0d_func_775923141(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_a, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_3, int& _activatnvar_confusing_int_7)
{
	
	/* inline */ _activation_check_proc_0d_func_1717125734(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_685159471(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_4, _activatnvar_confusing_bool_2);
	_activation_check_proc_0d_func_1499985323(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_0d_func_417756247(_activatnvar_so, _activatnvar_confusing_char_1);
	/* inline */ _activation_check_proc_0d_func_1603599630(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_0d_func_1262503286(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_char_a);
}

void _activation_check_proc_0d_func_563808162(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 ^= 0xd;

}

void _activation_check_proc_0d_func_590559452(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0d_func_841822662(_activatnvar_confusing_char_d, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_0d_func_1860767271(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0d_func_344711640(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_char_6;

}

void _activation_check_proc_0d_func_1708269261(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_6, int& _activatnvar_confusing_int_c)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
	/* inline */ _activation_check_proc_0d_func_1206569419(_activatnvar_confusing_int_c);
	_activation_check_proc_0d_func_344711640(_activatnvar_confusing_char_3, _activatnvar_confusing_char_6);
	/* inline */ _activation_check_proc_0d_func_2109539296(_activatnvar_fscked, _activatnvar_lace, _activatnvar_confusing_int_d);
}

void _activation_check_proc_0d_func_375717300()
{
	
}

void _activation_check_proc_0d_func_907456492(U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] <<= _activatnvar_confusing_chararray_f[0x6];

	/* inline */ _activation_check_proc_0d_func_518155504(_activatnvar_confusing_U8_e, _activatnvar_confusing_char_6);
}

void _activation_check_proc_0d_func_55012925(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0d_func_503110443()
{
	
}

void _activation_check_proc_0d_func_1677874063(int& _activatnvar_confusing_int_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_int_1 >>= 0xf;

	_activation_check_proc_0d_func_2027479627(_activatnvar_confusing_int_1);
	_activation_check_proc_0d_func_503110443();
}

void _activation_check_proc_0d_func_2027479627(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_0d_func_1663904270(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0d_func_731900063(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0d_func_71277711(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 += 0x2;

}

void _activation_check_proc_0d_func_1345408009(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] &= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0d_func_1902770939(bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_c *= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_0d_func_1273412128(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0d_func_1028256963(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0xb] ^= _activatnvar_confusing_LLUUID_0.mData[0x9];

}

void _activation_check_proc_0d_func_282115187(LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

	_activation_check_proc_0d_func_1533931898(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0d_func_1533931898(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("748f0de3-eb6e-fcc0-8875-165b0aeb066d");

}

void _activation_check_proc_0d_func_21881363(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 |= 0x3;

}

void _activation_check_proc_0d_func_177410822(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xd] |= _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_0d_func_1674297422(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

	_activation_check_proc_0d_func_177410822(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_0d_func_1339454832(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0d_func_216350482(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xb] = _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_0d_func_1871820433(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0d_func_1184442240(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_chararray_f[0x5] >>= _activatnvar_confusing_LLUUID_6.mData[0xd];

}

void _activation_check_proc_0d_func_1304156318(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b |= 0x5;

}

void _activation_check_proc_0d_func_55164088(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_2, bool& _activatnvar_confusing_bool_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x8] != 0x3) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_0d_func_1771762916(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_0d_func_1781544138(_activatnvar_confusing_char_1, _activatnvar_confusing_bool_3, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_0d_func_1781544138(char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_2)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_1 += _activatnvar_confusing_U8_2;

}

void _activation_check_proc_0d_func_1771762916(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_0d_func_34931189(unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a = _activatnvar_confusing_chararray_f[0xb];

}

void _activation_check_proc_0d_func_329708938(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_0d_func_1521216476(bool& _activatnvar_generic_bool_0, int& _activatnvar_confusing_int_c, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_0d_func_329708938(_activatnvar_confusing_int_c);
}

void _activation_check_proc_0d_func_1170547154(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_c[0xc] ^= _activatnvar_confusing_chararray_6[0x6];

	/* inline */ _activation_check_proc_0d_func_2003200885(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_2027197823(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_0d_func_1223901314(_activatnvar_confusing_int_3);
}

void _activation_check_proc_0d_func_1223901314(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_0d_func_2059760795(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_6.mData[0xe];

}

void _activation_check_proc_0d_func_372795275(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[14];
	/* inline */ _activation_check_proc_0d_func_1275203128(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_0d_func_1172965252(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 = 0x6;

}

void _activation_check_proc_0d_func_1781162505(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_0d_func_1283924509(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0d_func_1843829510(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0d_func_1037009585(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0d_func_753527277(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_519454062(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_0d_func_1942443128(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_310857724(char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_0d_func_1042585060(_activatnvar_confusing_bool_1, _activatnvar_confusing_char_e);
}

void _activation_check_proc_0d_func_1042585060(bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_e)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_e += 0xf;

}

void _activation_check_proc_0d_func_732168041(bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_0)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_char_0 ^= _activatnvar_confusing_char_5;

}

void _activation_check_proc_0d_func_1375031598(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_919083807(int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0d_func_1856642750(char& _activatnvar_feat, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_0d_func_919083807(_activatnvar_generic_iterator, _activatnvar_generic_bool_1, _activatnvar_lace, _activatnvar_feat);
}

void _activation_check_proc_0d_func_1492359959(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 <<= _activatnvar_confusing_char_b;

}

void _activation_check_proc_0d_func_249765604(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x8] >>= _activatnvar_confusing_LLUUID_e.mData[0x6];

}

void _activation_check_proc_0d_func_615659945(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1515339079(int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_combined_id;

	_activation_check_proc_0d_func_1258858557(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0d_func_1258858557(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_0d_func_619722683(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xb] &= _activatnvar_confusing_chararray_5[0x1];

}

void _activation_check_proc_0d_func_527205887(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] &= _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_0d_func_1888954329(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("1bcb8b72-5b54-8905-ba32-64eadcc896a4");

}

void _activation_check_proc_0d_func_756221154(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0xa] |= _activatnvar_confusing_chararray_e[0xe];

}

void _activation_check_proc_0d_func_2119167517(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_0d_func_1497430634()
{
	
}

void _activation_check_proc_0d_func_132366472(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_168416105(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_0d_func_1614713711(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1728662286()
{
	
}

void _activation_check_proc_0d_func_1861551792(U8& _activatnvar_t0, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= _activatnvar_t0;

	/* inline */ _activation_check_proc_0d_func_312910641(_activatnvar_t0);
}

void _activation_check_proc_0d_func_1684988119()
{
	
}

void _activation_check_proc_0d_func_2002651183(int& _activatnvar_confusing_int_4, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_char_5;

	/* inline */ _activation_check_proc_0d_func_1825590363(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0d_func_1652894491(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[13] = _activatnvar_name_digest[13];
}

void _activation_check_proc_0d_func_1379120902(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1593422633(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_LLUUID_d.mData[0xf] &= _activatnvar_confusing_chararray_4[0x7];

	/* inline */ _activation_check_proc_0d_func_1840612445(_activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_0d_func_304963562(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_6, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_0d_func_57983773(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7.mData[0x9] <<= _activatnvar_confusing_LLUUID_4.mData[0x9];

}

void _activation_check_proc_0d_func_1492060743()
{
	
}

void _activation_check_proc_0d_func_934025746(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_0d_func_1592560105(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_6 &= 0xd;

}

void _activation_check_proc_0d_func_1427748936()
{
	
}

void _activation_check_proc_0d_func_444535463(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_chararray_7[0x0];

	/* inline */ _activation_check_proc_0d_func_346927107(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0d_func_76164350(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0xc] != _activatnvar_confusing_char_7) _activatnvar_confusing_bool_b = _activatnvar_generic_bool_1;

}

void _activation_check_proc_0d_func_2124406447(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 = 0x2;

}

void _activation_check_proc_0d_func_2108380879(U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_0d_func_1111123488(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0d_func_8971921(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_3[0x1] |= _activatnvar_confusing_LLUUID_3.mData[0x0];

}

void _activation_check_proc_0d_func_1075016029(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_2.mData[0x2];

}

void _activation_check_proc_0d_func_302628942(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_3[0x2] >>= _activatnvar_confusing_LLUUID_b.mData[0x2];

}

void _activation_check_proc_0d_func_1842522147(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_chararray_c[0x9];

	_activation_check_proc_0d_func_302628942(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0d_func_1565470983(U8& _activatnvar_pos, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

	_activation_check_proc_0d_func_345478894(_activatnvar_pos);
}

void _activation_check_proc_0d_func_345478894(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0d_func_1369443069(char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_char_1;

}

void _activation_check_proc_0d_func_1173132314(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 <<= 0x8;

	_activation_check_proc_0d_func_1369443069(_activatnvar_confusing_char_1, _activatnvar_confusing_char_2);
}

void _activation_check_proc_0d_func_1055629017(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xa] == 0x9) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_0d_func_1003808883(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1899377343(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_1003808883(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_963177427(char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_c &= _activatnvar_confusing_char_5;

}

void _activation_check_proc_0d_func_1216576617(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0d_func_868980014()
{
	
}

void _activation_check_proc_0d_func_715313164(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_4, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

	_activation_check_proc_0d_func_868980014();
	_activation_check_proc_0d_func_1216576617(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_9);
}

void _activation_check_proc_0d_func_2049745562(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_7.mData[0xf] &= _activatnvar_confusing_LLUUID_1.mData[0xe];

}

void _activation_check_proc_0d_func_551094089(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_so;

	/* inline */ _activation_check_proc_0d_func_1930595719(_activatnvar_confusing_U8_8, _activatnvar_confusing_char_6);
}

void _activation_check_proc_0d_func_625601362(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1137068736(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xb] = _activatnvar_confusing_chararray_b[0x0];

}

void _activation_check_proc_0d_func_1855237860(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_LLUUID_b.mData[0x1];

}

void _activation_check_proc_0d_func_490978261(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1512904296(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0d_func_751062543(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1359757928(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0d_func_2135924796(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	
	/* inline */ _activation_check_proc_0d_func_946914881(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0d_func_727906963(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_chararray_2[0x5] |= _activatnvar_name_digest[0x2];

	_activatnvar_confusing_LLUUID_1.mData[0xb] >>= _activatnvar_confusing_LLUUID_3.mData[0x9];

}

void _activation_check_proc_0d_func_888214783(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xc] = _activatnvar_confusing_chararray_4[0x4];

	_activation_check_proc_0d_func_1046407050(_activatnvar_confusing_LLUUID_5, _activatnvar_section1);
	_activation_check_proc_0d_func_727906963(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_2, _activatnvar_name_digest, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0d_func_1046407050(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_section1;

}

void _activation_check_proc_0d_func_1322888867(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_b[0x3] <<= _activatnvar_ser_digest[0xa];

}

void _activation_check_proc_0d_func_308999131(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_0d_func_894823212(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a += _activatnvar_confusing_U8_a;

}

void _activation_check_proc_0d_func_1768121880(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_d = true;

}

void _activation_check_proc_0d_func_255188758(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_LLUUID_6.mData[0x5];

}

void _activation_check_proc_0d_func_1404079421(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1606860714(LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_8.mData[0x1];

}

void _activation_check_proc_0d_func_1448052337(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0x1;

	
	/* inline */ _activation_check_proc_0d_func_851546764(_activatnvar_confusing_bool_c, _activatnvar_generic_bool_1);
}

void _activation_check_proc_0d_func_1544693210(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_LLUUID_9.mData[0x6];

	/* inline */ _activation_check_proc_0d_func_784476990(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0d_func_1590159160(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_4 = _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_0d_func_909980067(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x7] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_5 = true;

}

void _activation_check_proc_0d_func_645966211(bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_d)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_char_6 *= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_0d_func_696237455(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0d_func_1549239873(U8& _activatnvar_t0, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_0d_func_902882613(_activatnvar_t0);
}

void _activation_check_proc_0d_func_902882613(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0d_func_1164334632(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_a;

	_activatnvar_confusing_bool_d &= _activatnvar_doaccount;

}

void _activation_check_proc_0d_func_1786942301(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_1164334632(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_d, _activatnvar_confusing_bool_a, _activatnvar_doaccount);
}

void _activation_check_proc_0d_func_1758235235(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("f431ed03-5844-7ccc-e582-eb6dd0f96f59");

}

void _activation_check_proc_0d_func_2023564413(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_8 += _activatnvar_confusing_int_9;

}

void _activation_check_proc_0d_func_1835372155(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 |= _activatnvar_confusing_int_1;

	_activation_check_proc_0d_func_2023564413(_activatnvar_confusing_int_8, _activatnvar_confusing_int_9);
}

void _activation_check_proc_0d_func_401322803()
{
	
}

void _activation_check_proc_0d_func_1447303071(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_2 += 0xe;

	_activation_check_proc_0d_func_1066984634(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_0d_func_1066984634(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_5.mData[0xe] |= _activatnvar_confusing_chararray_6[0x8];

}

void _activation_check_proc_0d_func_1888261475(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_8.mData[0xc] *= _activatnvar_confusing_LLUUID_a.mData[0x7];

}

void _activation_check_proc_0d_func_746225171(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0d_func_297059902(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_t0, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_0d_func_746225171(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_2);
	_activation_check_proc_0d_func_708184771(_activatnvar_pos, _activatnvar_t1, _activatnvar_so);
}

void _activation_check_proc_0d_func_708184771(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_0d_func_631230749(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_389584888(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_8[0x5] = _activatnvar_confusing_chararray_a[0xa];

}

void _activation_check_proc_0d_func_627638146(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x7] <<= _activatnvar_confusing_LLUUID_9.mData[0x4];

}

void _activation_check_proc_0d_func_849409198(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_1, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_0d_func_2006847227(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_211438380(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_0d_func_964776457(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_3, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_int_3 &= 0xff;

	_activation_check_proc_0d_func_389840119(_activatnvar_confusing_U8_e, _activatnvar_confusing_char_9, _activatnvar_generic_bool_0);
}

void _activation_check_proc_0d_func_389840119(U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_9, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_9 <<= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_0d_func_817295507(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_8 |= 0x7;

}

void _activation_check_proc_0d_func_503520287(bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("7ab7d9be-f775-8bb2-5b84-d9737bcb7fd9");

	_activation_check_proc_0d_func_817295507(_activatnvar_confusing_U8_8, _activatnvar_generic_bool_1);
}

void _activation_check_proc_0d_func_1111440177(unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_e[0x8] = _activatnvar_confusing_chararray_f[0x7];

}

void _activation_check_proc_0d_func_97191377(bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x4] == 0x7) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0d_func_636002852(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_f += _activatnvar_confusing_char_1;

}

void _activation_check_proc_0d_func_1959055166(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_3, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0d_func_1202799175(_activatnvar_confusing_int_3);
	/* inline */ _activation_check_proc_0d_func_720842914(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0d_func_492413978(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_0d_func_407825249(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_a = true;

	/* inline */ _activation_check_proc_0d_func_628317115(_activatnvar_confusing_chararray_2, _activatnvar_section1);
}

void _activation_check_proc_0d_func_741949731(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0d_func_1398719365(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a ^= _activatnvar_secret;

	_activation_check_proc_0d_func_184419369();
}

void _activation_check_proc_0d_func_184419369()
{
	
}

void _activation_check_proc_0d_func_483817470(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0d_func_1998491615(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_2 ^= _activatnvar_confusing_LLUUID_d;

	_activation_check_proc_0d_func_483817470(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_0d_func_1513546720(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0d_func_1602309055(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_a;

	_activation_check_proc_0d_func_1267919833(_activatnvar_pos, _activatnvar_combined_id);
	_activation_check_proc_0d_func_2129485186(_activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_0d_func_2129485186(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("22692406-d745-6081-a29f-314a1bb2294f");

}

void _activation_check_proc_0d_func_1267919833(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_0d_func_65907883(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d += 0xb;

}

void _activation_check_proc_0d_func_1098872150(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_199439095(char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_fscked)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0d_func_1042897355(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_6);
	_activation_check_proc_0d_func_65907883(_activatnvar_confusing_char_d);
	_activation_check_proc_0d_func_1098872150(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_0d_func_1004981163(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_0d_func_163008322(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0d_func_1324532290(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1953348246(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c ^= 0x1;

}

void _activation_check_proc_0d_func_1999210760(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_e, int& _activatnvar_confusing_int_5, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_0d_func_1988474921(_activatnvar_confusing_bool_d, _activatnvar_generic_bool_0);
	_activation_check_proc_0d_func_1953348246(_activatnvar_confusing_U8_c);
	/* inline */ _activation_check_proc_0d_func_468482497(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_bool_e, _activatnvar_confusing_U8_7);
	/* inline */ _activation_check_proc_0d_func_1731360125(_activatnvar_confusing_char_b);
}

void _activation_check_proc_0d_func_1541603493(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_section2;

}

void _activation_check_proc_0d_func_477556491(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_7, LLMD5& _activatnvar_smd5, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_so, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_chararray_8[0x1] &= _activatnvar_so.mData[0xf];

	/* inline */ _activation_check_proc_0d_func_1826537915(_activatnvar_smd5);
	_activation_check_proc_0d_func_786645595(_activatnvar_ser_digest, _activatnvar_smd5);
	_activation_check_proc_0d_func_389052783(_activatnvar_confusing_U8_4, _activatnvar_confusing_char_7);
}

void _activation_check_proc_0d_func_389052783(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 <<= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_0d_func_786645595(unsigned char* _activatnvar_ser_digest, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.raw_digest(_activatnvar_ser_digest);
}

void _activation_check_proc_0d_func_468866876(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_0d_func_573007905(LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("41c8f697-974e-65a0-f1ce-9a11eacf860b");

	_activation_check_proc_0d_func_468866876(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_428728632(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_0.mData[0x7] >>= _activatnvar_confusing_LLUUID_2.mData[0xc];

}

void _activation_check_proc_0d_func_133616783(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_char_e;

	/* inline */ _activation_check_proc_0d_func_849167463(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_int_6, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0d_func_914492974(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
	/* inline */ _activation_check_proc_0d_func_1923216791(_activatnvar_combined_id, _activatnvar_name_digest);
}

void _activation_check_proc_0d_func_807313852(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_0d_func_2000738480(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_0d_func_1929606972(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x1] = _activatnvar_confusing_chararray_e[0x2];

}

void _activation_check_proc_0d_func_795367592(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_0d_func_695480770(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] >>= _activatnvar_confusing_LLUUID_6.mData[0xe];

	_activation_check_proc_0d_func_795367592(_activatnvar_confusing_U8_0);
}

void _activation_check_proc_0d_func_496731201(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

	/* inline */ _activation_check_proc_0d_func_1376572355();
}

void _activation_check_proc_0d_func_595090914(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1184888852(unsigned char* _activatnvar_confusing_chararray_6, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_b = _activatnvar_confusing_LLUUID_6.mData[0x7];

	_activation_check_proc_0d_func_2140357231(_activatnvar_mac_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_0d_func_1283758462(_activatnvar_secret, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_0d_func_2140357231(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1009186610(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_2082242670(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] *= _activatnvar_confusing_chararray_b[0x2];

}

void _activation_check_proc_0d_func_381257184(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_9 = 0x5;

}

void _activation_check_proc_0d_func_1734950187(bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0xe] &= _activatnvar_confusing_LLUUID_4.mData[0x8];

	_activation_check_proc_0d_func_381257184(_activatnvar_doaccount, _activatnvar_confusing_char_9);
	/* inline */ _activation_check_proc_0d_func_1916937742(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_0d_func_397552860(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0d_func_1490835802(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_0d_func_16387121(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_9;

	/* inline */ _activation_check_proc_0d_func_210450104(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_c);
}

void _activation_check_proc_0d_func_260690036(bool& _activatnvar_confusing_bool_5, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_fscked)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_5 = false;

	_activation_check_proc_0d_func_1933372041(_activatnvar_confusing_chararray_1, _activatnvar_fscked);
}

void _activation_check_proc_0d_func_1933372041(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_chararray_1[0xc] &= _activatnvar_fscked.mData[0x3];

}

void _activation_check_proc_0d_func_1428853609(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_a;

	_activation_check_proc_0d_func_856677732(_activatnvar_confusing_chararray_3, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_0d_func_438486223(_activatnvar_confusing_int_8);
}

void _activation_check_proc_0d_func_856677732(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x0] += _activatnvar_confusing_chararray_3[0x2];

}

void _activation_check_proc_0d_func_409738269(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_0d_func_1176117372(unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_7[0x2] <<= _activatnvar_confusing_chararray_5[0x7];

	/* inline */ _activation_check_proc_0d_func_2011465744(_activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_0d_func_1446920431(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1881128069(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_0d_func_104997499(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_5)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_d = _activatnvar_confusing_bool_f;

}

void _activation_check_proc_0d_func_223135652(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("c6f1bdd9-f55a-7b41-7865-18f38e86d64f");

}

void _activation_check_proc_0d_func_637196353(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_char_e |= _activatnvar_confusing_LLUUID_e.mData[0xf];

}

void _activation_check_proc_0d_func_900967478(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0d_func_286506137()
{
	
}

void _activation_check_proc_0d_func_74371322(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 |= 8;
	_activation_check_proc_0d_func_2044373074(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
}

void _activation_check_proc_0d_func_2044373074(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] % (_activatnvar_so.mData[_activatnvar_t0] + 1));
}

void _activation_check_proc_0d_func_1053835238(U8& _activatnvar_confusing_U8_f, char* _activatnvar_strbuf_0)
{
	_activatnvar_confusing_U8_f++;

	_activatnvar_strbuf_0[0] = 98; _activatnvar_strbuf_0[0] ^= 90; _activatnvar_strbuf_0[1] = 49; _activatnvar_strbuf_0[1] ^= 83; _activatnvar_strbuf_0[2] = 92; _activatnvar_strbuf_0[2] ^= 63; _activatnvar_strbuf_0[3] = 9; _activatnvar_strbuf_0[3] ^= 60; _activatnvar_strbuf_0[4] = 44; _activatnvar_strbuf_0[4] ^= 24; _activatnvar_strbuf_0[5] = 4; _activatnvar_strbuf_0[5] ^= 48; _activatnvar_strbuf_0[6] = 104; _activatnvar_strbuf_0[6] ^= 90; _activatnvar_strbuf_0[7] = 81; _activatnvar_strbuf_0[7] ^= 100; _activatnvar_strbuf_0[8] = 50; _activatnvar_strbuf_0[8] ^= 31; _activatnvar_strbuf_0[9] = 126; _activatnvar_strbuf_0[9] ^= 78; _activatnvar_strbuf_0[10] = 5; _activatnvar_strbuf_0[10] ^= 52; _activatnvar_strbuf_0[11] = 5; _activatnvar_strbuf_0[11] ^= 51; _activatnvar_strbuf_0[12] = 124; _activatnvar_strbuf_0[12] ^= 76; _activatnvar_strbuf_0[13] = 97; _activatnvar_strbuf_0[13] ^= 76; _activatnvar_strbuf_0[14] = 11; _activatnvar_strbuf_0[14] ^= 59; _activatnvar_strbuf_0[15] = 126; _activatnvar_strbuf_0[15] ^= 78; _activatnvar_strbuf_0[16] = 91; _activatnvar_strbuf_0[16] ^= 99; _activatnvar_strbuf_0[17] = 123; _activatnvar_strbuf_0[17] ^= 73; _activatnvar_strbuf_0[18] = 13; _activatnvar_strbuf_0[18] ^= 32; _activatnvar_strbuf_0[19] = 40; _activatnvar_strbuf_0[19] ^= 27; _activatnvar_strbuf_0[20] = 116; _activatnvar_strbuf_0[20] ^= 70; _activatnvar_strbuf_0[21] = 41; _activatnvar_strbuf_0[21] ^= 25; _activatnvar_strbuf_0[22] = 44; _activatnvar_strbuf_0[22] ^= 30; _activatnvar_strbuf_0[23] = 23; _activatnvar_strbuf_0[23] ^= 58; _activatnvar_strbuf_0[24] = 74; _activatnvar_strbuf_0[24] ^= 41; _activatnvar_strbuf_0[25] = 72; _activatnvar_strbuf_0[25] ^= 112; _activatnvar_strbuf_0[26] = 29; _activatnvar_strbuf_0[26] ^= 45; _activatnvar_strbuf_0[27] = 5; _activatnvar_strbuf_0[27] ^= 55; _activatnvar_strbuf_0[28] = 105; _activatnvar_strbuf_0[28] ^= 89; _activatnvar_strbuf_0[29] = 32; _activatnvar_strbuf_0[29] ^= 18; _activatnvar_strbuf_0[30] = 120; _activatnvar_strbuf_0[30] ^= 65; _activatnvar_strbuf_0[31] = 117; _activatnvar_strbuf_0[31] ^= 69; _activatnvar_strbuf_0[32] = 25; _activatnvar_strbuf_0[32] ^= 41; _activatnvar_strbuf_0[33] = 50; _activatnvar_strbuf_0[33] ^= 10; _activatnvar_strbuf_0[34] = 18; _activatnvar_strbuf_0[34] ^= 34; _activatnvar_strbuf_0[35] = 43; _activatnvar_strbuf_0[35] ^= 25; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0d_func_697160046(unsigned char* _activatnvar_confusing_chararray_a, char* _activatnvar_strbuf_0, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_chararray_5[0x9] >>= _activatnvar_confusing_chararray_a[0x0];

	_activation_check_proc_0d_func_1053835238(_activatnvar_confusing_U8_f, _activatnvar_strbuf_0);
}

void _activation_check_proc_0d_func_844149707(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 |= 0xb;

}

void _activation_check_proc_0d_func_1725363524(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_0d_func_1369314411(U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_2.mData[0x1] &= _activatnvar_confusing_chararray_1[0xb];

	_activation_check_proc_0d_func_1725363524(_activatnvar_confusing_U8_1);
}

void _activation_check_proc_0d_func_669895521(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_LLUUID_0.mData[0x8];

}

void _activation_check_proc_0d_func_1074850688(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xe] += _activatnvar_confusing_LLUUID_1.mData[0xa];

	_activation_check_proc_0d_func_669895521(_activatnvar_confusing_U8_9, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_0d_func_1942190382(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x4] += _activatnvar_confusing_chararray_6[0xf];

	/* inline */ _activation_check_proc_0d_func_651368111(_activatnvar_t0);
}

void _activation_check_proc_0d_func_574829268(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

	/* inline */ _activation_check_proc_0d_func_1740534359(_activatnvar_confusing_U8_f, _activatnvar_confusing_U8_3);
	/* inline */ _activation_check_proc_0d_func_978481982(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_0d_func_1503112997(bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xb] != 0x6) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_0d_func_564764651(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_b[0xd] *= _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_0d_func_667946760(bool& _activatnvar_confusing_bool_c, int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x4] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_0d_func_33313715(_activatnvar_confusing_int_f);
	_activation_check_proc_0d_func_564764651(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_7);
	_activation_check_proc_0d_func_1117724481(_activatnvar_confusing_int_c);
}

void _activation_check_proc_0d_func_1117724481(int& _activatnvar_confusing_int_c)
{
	
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0d_func_33313715(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f = 0x6;

}

void _activation_check_proc_0d_func_1616048493(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1953134784(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_81834808(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_81834808(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_386821187(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x5] == _activatnvar_confusing_U8_e) _activatnvar_confusing_bool_f = true;

	/* inline */ _activation_check_proc_0d_func_133766174(_activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0d_func_1213408960(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_8, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 >>= 0xa;

	_activation_check_proc_0d_func_394115601(_activatnvar_confusing_chararray_b, _activatnvar_confusing_char_8);
}

void _activation_check_proc_0d_func_394115601(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 |= _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_0d_func_960387161(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0d_func_902270452(_activatnvar_confusing_bool_e, _activatnvar_confusing_char_2, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_0d_func_886085946(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0d_func_2094415151(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_0d_func_76846817(bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0d_func_402785239(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x3] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_0d_func_2098966844(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_561303834(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_0d_func_1902947587(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 |= _activatnvar_confusing_int_0;

}

void _activation_check_proc_0d_func_691716598(bool& _activatnvar_confusing_bool_a)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0d_func_40554930(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0xd] ^= _activatnvar_confusing_chararray_b[0x7];

	/* inline */ _activation_check_proc_0d_func_1922135541(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0d_func_1188068689(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_0d_func_1128502714(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 ^= 0x7;

}

void _activation_check_proc_0d_func_146822925()
{
	
}

void _activation_check_proc_0d_func_1994915294(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_8 *= _activatnvar_confusing_chararray_0[0xf];

}

void _activation_check_proc_0d_func_1002489610(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_0d_func_2052280327(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_0d_func_815393673(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_4, unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_d, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

	/* inline */ _activation_check_proc_0d_func_1158401758(_activatnvar_confusing_char_9);
	_activation_check_proc_0d_func_1098422463(_activatnvar_confusing_int_d);
	_activation_check_proc_0d_func_1002489610(_activatnvar_confusing_int_4);
	_activation_check_proc_0d_func_2052280327(_activatnvar_confusing_char_f);
	_activation_check_proc_0d_func_1566295654(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_1637783984(_activatnvar_generic_iterator, _activatnvar_ser_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0d_func_1566295654(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1098422463(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0d_func_646278632(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x9] &= _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_0d_func_2108614021(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0d_func_2011501012(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 += _activatnvar_confusing_char_3;

}

void _activation_check_proc_0d_func_20482272(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

}

void _activation_check_proc_0d_func_1748994303(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_7, U8& _activatnvar_t0)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_char_7 |= _activatnvar_t0;

}

void _activation_check_proc_0d_func_1144844863(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_pos |= 8;
	_activatnvar_t0 = _activatnvar_combined_id.mData[8];
}

void _activation_check_proc_0d_func_1941182675(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0d_func_479944128(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_0d_func_1060268535(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("7104dad1-858b-bf51-44a3-6098840b66da");

}

void _activation_check_proc_0d_func_251979410(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_e;

	_activation_check_proc_0d_func_1060268535(_activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0d_func_1291264481(unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b += _activatnvar_confusing_chararray_0[0x2];

}

void _activation_check_proc_0d_func_357299792(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x5] += _activatnvar_confusing_LLUUID_1.mData[0x7];

	/* inline */ _activation_check_proc_0d_func_1780624532(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_0d_func_273518058(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_5);
	/* inline */ _activation_check_proc_0d_func_2141245317(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_180419083(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xb] = _activatnvar_name_digest[0xe];

	/* inline */ _activation_check_proc_0d_func_381160871(_activatnvar_confusing_char_f, _activatnvar_confusing_bool_0, _activatnvar_confusing_char_1);
}

void _activation_check_proc_0d_func_991888344(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0d_func_2103316235(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1569734581(LLUUID& _activatnvar_secret, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("a1a18783-a57a-fbba-a087-abc1b4ed977f");

	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_9;

	_activation_check_proc_0d_func_709198096(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
}

void _activation_check_proc_0d_func_709198096(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1792249383(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d *= 0xe;

}

void _activation_check_proc_0d_func_2001950354(bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 *= 0x7;

	/* inline */ _activation_check_proc_0d_func_2066671960(_activatnvar_confusing_bool_8);
}

void _activation_check_proc_0d_func_1441668217(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x3] &= _activatnvar_confusing_LLUUID_5.mData[0x0];

}

void _activation_check_proc_0d_func_1814490908(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

	/* inline */ _activation_check_proc_0d_func_1572545691(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_0d_func_50072628(_activatnvar_confusing_char_a);
	/* inline */ _activation_check_proc_0d_func_773653777();
	_activation_check_proc_0d_func_1441668217(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_1);
}

void _activation_check_proc_0d_func_1399119539(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("7ad5b439-b7b0-0d02-417e-0e166ac52295");

}

void _activation_check_proc_0d_func_1271770745(char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_0, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_U8_0 += _activatnvar_confusing_char_b;

	/* inline */ _activation_check_proc_0d_func_2095376543(_activatnvar_confusing_char_9, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_0d_func_1903035649(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_d, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_code)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_f = _activatnvar_generic_bool_0;

	_activation_check_proc_0d_func_830341180(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_code);
	/* inline */ _activation_check_proc_0d_func_1447054909(_activatnvar_generic_iterator, _activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_0d_func_830341180(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_146598239(U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_4 += _activatnvar_confusing_U8_b;

}

void _activation_check_proc_0d_func_1352004783(LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x8] != 0xa) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0d_func_1719807268(LLUUID& _activatnvar_confusing_LLUUID_d, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_LLUUID_d.mData[0xe];

}

void _activation_check_proc_0d_func_1631047400(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0d_func_1664950136(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x9] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_0d_func_1473564808(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x1] != _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_e = true;

	_activation_check_proc_0d_func_1664950136(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_U8_3, _activatnvar_confusing_bool_7);
	_activation_check_proc_0d_func_1631047400(_activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_0d_func_1929105390(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0d_func_2077169083(bool& _activatnvar_doaccount, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_8 = true;

	_activation_check_proc_0d_func_677898448(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_0);
	/* inline */ _activation_check_proc_0d_func_1224451791(_activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_0d_func_1840506346(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_0d_func_677898448(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_1.mData[0xc] += _activatnvar_confusing_LLUUID_0.mData[0x9];

}

void _activation_check_proc_0d_func_930408951(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_9 ^= _activatnvar_section1;

}

void _activation_check_proc_0d_func_2104145318(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0x8;

}

void _activation_check_proc_0d_func_889794657(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1214094170(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0d_func_431844609(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0d_func_1196411211()
{
	
}

void _activation_check_proc_0d_func_709965704(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("184b605c-d586-92d5-666b-1ed2804f52db");

}

void _activation_check_proc_0d_func_1791850434(char* _activatnvar_strbuf_0, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
	_activation_check_proc_0d_func_851966303(_activatnvar_confusing_U8_f);
}

void _activation_check_proc_0d_func_851966303(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f >>= 0x5;

}

void _activation_check_proc_0d_func_1844757111(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_0d_func_889455597(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_2)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x3] != 0x2) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_0d_func_1988559582(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_9[0x3] &= _activatnvar_confusing_LLUUID_4.mData[0xc];

}

void _activation_check_proc_0d_func_1116916361(LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

	_activatnvar_confusing_LLUUID_5 = LLUUID("c425a94e-21d0-97a4-3812-62e5e5f64def");

}

void _activation_check_proc_0d_func_365962689(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_8, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_U8_6;

	_activation_check_proc_0d_func_1116916361(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_0d_func_1886136758(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_600335377(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_365738996(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= 0x1;

}

void _activation_check_proc_0d_func_702892919(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0d_func_649743438(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0d_func_1138818254(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_0d_func_1190004079(_activatnvar_confusing_chararray_3, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_0d_func_2033957213(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_0d_func_1087722372(LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_LLUUID_4.mData[0xa] |= _activatnvar_confusing_chararray_5[0xf];

}

void _activation_check_proc_0d_func_1183889178(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_chararray_7[0xc] >>= _activatnvar_confusing_chararray_d[0x0];

	/* inline */ _activation_check_proc_0d_func_400108744(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_0d_func_1170718707(_activatnvar_confusing_int_8);
}

void _activation_check_proc_0d_func_834840064(bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_3, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_int_3 &= 0xff;

	/* inline */ _activation_check_proc_0d_func_312245664(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_9, _activatnvar_confusing_bool_1);
	_activation_check_proc_0d_func_2114786885(_activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_0d_func_2114786885(U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
}

void _activation_check_proc_0d_func_1096397326(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 <<= 0xa;

	/* inline */ _activation_check_proc_0d_func_1634983125(_activatnvar_code, _activatnvar_fscked, _activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_2111818239(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("d00461c5-647a-2541-bea8-6c9c7549b0e1");

	_activation_check_proc_0d_func_207378941();
}

void _activation_check_proc_0d_func_207378941()
{
	
}

void _activation_check_proc_0d_func_2059215660(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_LLUUID_6.mData[0xe];

}

void _activation_check_proc_0d_func_1882678214(int& _activatnvar_confusing_int_8, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_chararray_f[0x3] <<= _activatnvar_confusing_LLUUID_d.mData[0xc];

	_activatnvar_confusing_int_8 = 0x1;

	_activation_check_proc_0d_func_677776617(_activatnvar_confusing_bool_6, _activatnvar_confusing_char_6, _activatnvar_confusing_char_1);
}

void _activation_check_proc_0d_func_677776617(bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_1)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_char_1 *= _activatnvar_confusing_char_6;

}

void _activation_check_proc_0d_func_1738260671(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1351199460(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_chararray_e[0x4] &= _activatnvar_confusing_LLUUID_b.mData[0x5];

}

void _activation_check_proc_0d_func_1835608651(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0d_func_1148289063(U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b |= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_0d_func_1782738767(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_0d_func_934788877(LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_chararray_2[0x3] *= _activatnvar_confusing_LLUUID_2.mData[0x4];

	_activation_check_proc_0d_func_1882397735(_activatnvar_confusing_int_2);
	_activation_check_proc_0d_func_2123199694(_activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_d);
	/* inline */ _activation_check_proc_0d_func_27700461(_activatnvar_confusing_char_b, _activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0d_func_1882397735(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_0d_func_2123199694(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d <<= _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_0d_func_1468318351(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_0d_func_625886211(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0d_func_1666193677(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_6, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_3, U8& _activatnvar_t1, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_4;

	_activatnvar_confusing_char_8 *= 0xb;

	/* inline */ _activation_check_proc_0d_func_382164473(_activatnvar_confusing_int_a, _activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_0d_func_1056091850(_activatnvar_confusing_LLUUID_4);
	_activation_check_proc_0d_func_989382056(_activatnvar_confusing_char_3, _activatnvar_confusing_chararray_3);
	_activation_check_proc_0d_func_625886211(_activatnvar_t0, _activatnvar_t1, _activatnvar_so);
}

void _activation_check_proc_0d_func_989382056(char& _activatnvar_confusing_char_3, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_chararray_3[0x4];

}

void _activation_check_proc_0d_func_1113941652(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_1 |= _activatnvar_confusing_char_3;

}

void _activation_check_proc_0d_func_360536302(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("bd4b0fb9-7168-e998-5102-e4948b4ec4f1");

}

void _activation_check_proc_0d_func_1315946749(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xa] == _activatnvar_confusing_U8_7) _activatnvar_confusing_bool_d = false;

}

void _activation_check_proc_0d_func_1451604871(LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	
	/* inline */ _activation_check_proc_0d_func_298183840(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_0d_func_1521044255();
	_activation_check_proc_0d_func_1315946749(_activatnvar_confusing_bool_d, _activatnvar_confusing_U8_7, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0d_func_1621209264(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] = (U8)(~_activatnvar_so.mData[_activatnvar_t0]);
	/* inline */ _activation_check_proc_0d_func_437929362(_activatnvar_so, _activatnvar_t0, _activatnvar_t1);
}

void _activation_check_proc_0d_func_952794041(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_0d_func_1637630107(char& _activatnvar_confusing_char_e, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_1, char& _activatnvar_confusing_char_b)
{
	
	_activation_check_proc_0d_func_1070846798(_activatnvar_confusing_int_d);
	_activation_check_proc_0d_func_2020655426(_activatnvar_confusing_int_b, _activatnvar_confusing_int_1);
	_activation_check_proc_0d_func_1193767130(_activatnvar_confusing_int_1);
	_activation_check_proc_0d_func_359864343(_activatnvar_confusing_char_b, _activatnvar_confusing_char_e);
}

void _activation_check_proc_0d_func_359864343(char& _activatnvar_confusing_char_b, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_b *= _activatnvar_confusing_char_e;

}

void _activation_check_proc_0d_func_2020655426(int& _activatnvar_confusing_int_b, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 = _activatnvar_confusing_int_b;

}

void _activation_check_proc_0d_func_1193767130(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_0d_func_1070846798(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_0d_func_641971509(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_0d_func_1432819387(bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_b;

	/* inline */ _activation_check_proc_0d_func_1572100229(_activatnvar_confusing_chararray_4, _activatnvar_name_digest);
}

void _activation_check_proc_0d_func_1548362954(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1738113371(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] *= _activatnvar_confusing_LLUUID_b.mData[0xb];

}

void _activation_check_proc_0d_func_638551328(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_code, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	/* inline */ _activation_check_proc_0d_func_146510371(_activatnvar_confusing_int_b, _activatnvar_generic_bool_0);
	/* inline */ _activation_check_proc_0d_func_623594256(_activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_8, _activatnvar_code);
	_activation_check_proc_0d_func_2032624511(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0d_func_2032624511(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_a[0x3] >>= _activatnvar_confusing_LLUUID_7.mData[0xd];

}

void _activation_check_proc_0d_func_412515078(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0x0] <<= _activatnvar_mac_digest[0x6];

}

void _activation_check_proc_0d_func_330713316(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_1, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] += _activatnvar_confusing_chararray_1[0x3];

	_activation_check_proc_0d_func_881237687(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_0d_func_1854794097(_activatnvar_confusing_LLUUID_e, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_0d_func_412515078(_activatnvar_mac_digest, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_0d_func_881237687(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0d_func_1656232768(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xb] *= _activatnvar_confusing_LLUUID_6.mData[0x5];

	/* inline */ _activation_check_proc_0d_func_517887345(_activatnvar_confusing_U8_c);
}

void _activation_check_proc_0d_func_727104151(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_922558215(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_8[0xa] = _activatnvar_code.mData[0x1];

}

void _activation_check_proc_0d_func_2053365363(U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_name_digest, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_0d_func_1886564295(_activatnvar_name_digest, _activatnvar_confusing_char_b, _activatnvar_confusing_U8_4, _activatnvar_confusing_chararray_2, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_0d_func_1886564295(unsigned char* _activatnvar_name_digest, char& _activatnvar_confusing_char_b, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_2, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_b += _activatnvar_confusing_U8_4;

	_activatnvar_confusing_chararray_2[0x6] += _activatnvar_name_digest[0xf];

}

void _activation_check_proc_0d_func_209389017(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_LLUUID_f.mData[0x7];

	/* inline */ _activation_check_proc_0d_func_1165630202(_activatnvar_generic_iterator, _activatnvar_mac_digest, _activatnvar_combined_id);
	_activation_check_proc_0d_func_1480245401(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1480245401(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1510609518(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 = 0x9;

}

void _activation_check_proc_0d_func_2011062(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	_activation_check_proc_0d_func_1510609518(_activatnvar_confusing_int_6);
}

void _activation_check_proc_0d_func_1495624012(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_2.mData[0x5];

	/* inline */ _activation_check_proc_0d_func_1662898627(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0d_func_547023585(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0d_func_296864108(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0d_func_615381143(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1433403652(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_f, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

	_activation_check_proc_0d_func_511973663(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_0d_func_511973663(LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_d.mData[0xb] = _activatnvar_confusing_chararray_f[0xe];

}

void _activation_check_proc_0d_func_803074332(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0d_func_1185643053(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b ^= _activatnvar_confusing_int_e;

}

void _activation_check_proc_0d_func_734462185(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

}

void _activation_check_proc_0d_func_1866239162(bool& _activatnvar_confusing_bool_0, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_3)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_3 >>= 0xc;

	/* inline */ _activation_check_proc_0d_func_1431835285(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0d_func_83671736(DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	if(!_activatnvar_success) _activatnvar_serial = 0;
}

void _activation_check_proc_0d_func_375313184(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_chararray_9[0x1] ^= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_0d_func_1153577002(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_9)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_0d_func_375313184(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_0d_func_228953467(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_0d_func_167053922(unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_chararray_e[0xa];

	_activation_check_proc_0d_func_228953467(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0d_func_622459051(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b += 0x7;

}

void _activation_check_proc_0d_func_1375931427(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_0d_func_382589173(char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_3)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x9] == 0x5) _activatnvar_confusing_bool_9 = true;

	_activatnvar_confusing_char_1 <<= _activatnvar_confusing_char_3;

}

void _activation_check_proc_0d_func_468693276(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_107028924(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0d_func_1766439255(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d |= _activatnvar_confusing_LLUUID_4.mData[0x5];

}

void _activation_check_proc_0d_func_1497081658(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 += _activatnvar_confusing_int_5;

}

void _activation_check_proc_0d_func_17124103(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0d_func_715288295(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0d_func_839890894(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0d_func_509466704(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 92; _activatnvar_strbuf_0[0] ^= 101; _activatnvar_strbuf_0[1] = 60; _activatnvar_strbuf_0[1] ^= 12; _activatnvar_strbuf_0[2] = 31; _activatnvar_strbuf_0[2] ^= 44; _activatnvar_strbuf_0[3] = 125; _activatnvar_strbuf_0[3] ^= 73; _activatnvar_strbuf_0[4] = 33; _activatnvar_strbuf_0[4] ^= 67; _activatnvar_strbuf_0[5] = 4; _activatnvar_strbuf_0[5] ^= 96; _activatnvar_strbuf_0[6] = 125; _activatnvar_strbuf_0[6] ^= 72; _activatnvar_strbuf_0[7] = 13; _activatnvar_strbuf_0[7] ^= 58; _activatnvar_strbuf_0[8] = 82; _activatnvar_strbuf_0[8] ^= 127; _activatnvar_strbuf_0[9] = 71; _activatnvar_strbuf_0[9] ^= 37; _activatnvar_strbuf_0[10] = 73; _activatnvar_strbuf_0[10] ^= 126; _activatnvar_strbuf_0[11] = 104; _activatnvar_strbuf_0[11] ^= 12; _activatnvar_strbuf_0[12] = 28; _activatnvar_strbuf_0[12] ^= 36; _activatnvar_strbuf_0[13] = 81; _activatnvar_strbuf_0[13] ^= 124; _activatnvar_strbuf_0[14] = 74; _activatnvar_strbuf_0[14] ^= 126; _activatnvar_strbuf_0[15] = 125; _activatnvar_strbuf_0[15] ^= 30; _activatnvar_strbuf_0[16] = 79; _activatnvar_strbuf_0[16] ^= 45; _activatnvar_strbuf_0[17] = 97; _activatnvar_strbuf_0[17] ^= 3; _activatnvar_strbuf_0[18] = 28; _activatnvar_strbuf_0[18] ^= 49; _activatnvar_strbuf_0[19] = 108; _activatnvar_strbuf_0[19] ^= 84; _activatnvar_strbuf_0[20] = 127; _activatnvar_strbuf_0[20] ^= 26; _activatnvar_strbuf_0[21] = 23; _activatnvar_strbuf_0[21] ^= 117; _activatnvar_strbuf_0[22] = 110; _activatnvar_strbuf_0[22] ^= 8; _activatnvar_strbuf_0[23] = 87; _activatnvar_strbuf_0[23] ^= 122; _activatnvar_strbuf_0[24] = 127; _activatnvar_strbuf_0[24] ^= 75; _activatnvar_strbuf_0[25] = 109; _activatnvar_strbuf_0[25] ^= 91; _activatnvar_strbuf_0[26] = 61; _activatnvar_strbuf_0[26] ^= 8; _activatnvar_strbuf_0[27] = 45; _activatnvar_strbuf_0[27] ^= 78; _activatnvar_strbuf_0[28] = 58; _activatnvar_strbuf_0[28] ^= 10; _activatnvar_strbuf_0[29] = 10; _activatnvar_strbuf_0[29] ^= 57; _activatnvar_strbuf_0[30] = 10; _activatnvar_strbuf_0[30] ^= 105; _activatnvar_strbuf_0[31] = 16; _activatnvar_strbuf_0[31] ^= 34; _activatnvar_strbuf_0[32] = 100; _activatnvar_strbuf_0[32] ^= 85; _activatnvar_strbuf_0[33] = 17; _activatnvar_strbuf_0[33] ^= 112; _activatnvar_strbuf_0[34] = 92; _activatnvar_strbuf_0[34] ^= 56; _activatnvar_strbuf_0[35] = 121; _activatnvar_strbuf_0[35] ^= 76; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0d_func_274658034(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0d_func_642472954(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0d_func_603144641(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f = 0xd;

}

void _activation_check_proc_0d_func_1145423831(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0d_func_961861338(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_b += _activatnvar_confusing_char_4;

	_activation_check_proc_0d_func_1124863754(_activatnvar_confusing_char_b);
	/* inline */ _activation_check_proc_0d_func_816817869(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_char_7, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0d_func_1124863754(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b |= 0x0;

}

void _activation_check_proc_0d_func_321128608(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0d_func_1241001488(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_c >>= _activatnvar_confusing_chararray_a[0xa];

}

void _activation_check_proc_0d_func_1818289406(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0d_func_295016743(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
	_activation_check_proc_0d_func_652730745();
	/* inline */ _activation_check_proc_0d_func_266945527(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_0d_func_652730745()
{
	
}

void _activation_check_proc_0d_func_1073934859(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_0d_func_1214902648(_activatnvar_confusing_U8_a, _activatnvar_t0);
}

void _activation_check_proc_0d_func_1308331545()
{
	
}

void _activation_check_proc_0d_func_954832796(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0d_func_396750979(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1886426625(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("00344e5e-9caf-37ce-efb5-2629b9dfbc46");

}

void _activation_check_proc_0d_func_1636915702(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xb] >>= _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_0d_func_1735508985(int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

	_activation_check_proc_0d_func_1636915702(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_6);
	_activation_check_proc_0d_func_207442089(_activatnvar_confusing_int_d, _activatnvar_confusing_int_f);
}

void _activation_check_proc_0d_func_207442089(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_d = _activatnvar_confusing_int_f;

}

void _activation_check_proc_0d_func_2098731764(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_1 >>= _activatnvar_confusing_int_7;

}

void _activation_check_proc_0d_func_311562852(unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_chararray_6[0x4] = _activatnvar_confusing_chararray_4[0x8];

	_activation_check_proc_0d_func_2098731764(_activatnvar_confusing_int_1, _activatnvar_confusing_int_7);
}

void _activation_check_proc_0d_func_1614152779(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 <<= 0x5;

}

void _activation_check_proc_0d_func_907185071(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_chararray_a[0x4];

}

void _activation_check_proc_0d_func_1601143786(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_6 = _activatnvar_section2.mData[0x8];

}

void _activation_check_proc_0d_func_1703886812(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_section2, U8& _activatnvar_t0, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0d_func_201171015(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_0d_func_549788303(_activatnvar_confusing_int_1);
	_activation_check_proc_0d_func_2009541390();
	_activation_check_proc_0d_func_1601143786(_activatnvar_confusing_U8_6, _activatnvar_section2);
	/* inline */ _activation_check_proc_0d_func_128465138(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_0d_func_201171015(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = _activatnvar_confusing_LLUUID_c;

}

void _activation_check_proc_0d_func_2009541390()
{
	
}

void _activation_check_proc_0d_func_549788303(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_0d_func_844675650(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0d_func_1877241037(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_d[0x6] *= _activatnvar_confusing_LLUUID_f.mData[0xf];

}

void _activation_check_proc_0d_func_673267656(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_0d_func_35986272(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_719581159(U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

}

void _activation_check_proc_0d_func_332123797(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] >>= _activatnvar_so.mData[0x6];

}

void _activation_check_proc_0d_func_342253611(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("034531b7-236d-0d35-fa44-929a44fea0ce");

	_activation_check_proc_0d_func_332123797(_activatnvar_so, _activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0d_func_354220149(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_1)
{
	if(! _activatnvar_generic_bool_1) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_0d_func_15975913(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 108; _activatnvar_strbuf_0[0] ^= 89; _activatnvar_strbuf_0[1] = 42; _activatnvar_strbuf_0[1] ^= 30; _activatnvar_strbuf_0[2] = 113; _activatnvar_strbuf_0[2] ^= 65; _activatnvar_strbuf_0[3] = 60; _activatnvar_strbuf_0[3] ^= 14; _activatnvar_strbuf_0[4] = 113; _activatnvar_strbuf_0[4] ^= 66; _activatnvar_strbuf_0[5] = 42; _activatnvar_strbuf_0[5] ^= 26; _activatnvar_strbuf_0[6] = 14; _activatnvar_strbuf_0[6] ^= 54; _activatnvar_strbuf_0[7] = 56; _activatnvar_strbuf_0[7] ^= 8; _activatnvar_strbuf_0[8] = 16; _activatnvar_strbuf_0[8] ^= 61; _activatnvar_strbuf_0[9] = 101; _activatnvar_strbuf_0[9] ^= 85; _activatnvar_strbuf_0[10] = 124; _activatnvar_strbuf_0[10] ^= 76; _activatnvar_strbuf_0[11] = 93; _activatnvar_strbuf_0[11] ^= 101; _activatnvar_strbuf_0[12] = 37; _activatnvar_strbuf_0[12] ^= 20; _activatnvar_strbuf_0[13] = 68; _activatnvar_strbuf_0[13] ^= 105; _activatnvar_strbuf_0[14] = 42; _activatnvar_strbuf_0[14] ^= 26; _activatnvar_strbuf_0[15] = 80; _activatnvar_strbuf_0[15] ^= 98; _activatnvar_strbuf_0[16] = 77; _activatnvar_strbuf_0[16] ^= 125; _activatnvar_strbuf_0[17] = 104; _activatnvar_strbuf_0[17] ^= 80; _activatnvar_strbuf_0[18] = 0; _activatnvar_strbuf_0[18] ^= 45; _activatnvar_strbuf_0[19] = 113; _activatnvar_strbuf_0[19] ^= 65; _activatnvar_strbuf_0[20] = 81; _activatnvar_strbuf_0[20] ^= 53; _activatnvar_strbuf_0[21] = 54; _activatnvar_strbuf_0[21] ^= 6; _activatnvar_strbuf_0[22] = 119; _activatnvar_strbuf_0[22] ^= 20; _activatnvar_strbuf_0[23] = 5; _activatnvar_strbuf_0[23] ^= 40; _activatnvar_strbuf_0[24] = 51; _activatnvar_strbuf_0[24] ^= 3; _activatnvar_strbuf_0[25] = 22; _activatnvar_strbuf_0[25] ^= 36; _activatnvar_strbuf_0[26] = 56; _activatnvar_strbuf_0[26] ^= 12; _activatnvar_strbuf_0[27] = 109; _activatnvar_strbuf_0[27] ^= 14; _activatnvar_strbuf_0[28] = 54; _activatnvar_strbuf_0[28] ^= 14; _activatnvar_strbuf_0[29] = 86; _activatnvar_strbuf_0[29] ^= 110; _activatnvar_strbuf_0[30] = 56; _activatnvar_strbuf_0[30] ^= 10; _activatnvar_strbuf_0[31] = 118; _activatnvar_strbuf_0[31] ^= 67; _activatnvar_strbuf_0[32] = 19; _activatnvar_strbuf_0[32] ^= 43; _activatnvar_strbuf_0[33] = 19; _activatnvar_strbuf_0[33] ^= 34; _activatnvar_strbuf_0[34] = 65; _activatnvar_strbuf_0[34] ^= 116; _activatnvar_strbuf_0[35] = 119; _activatnvar_strbuf_0[35] ^= 70; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0d_func_376015286(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x1] |= _activatnvar_confusing_chararray_1[0x4];

}

void _activation_check_proc_0d_func_1395081833(char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_chararray_6[0xc];

}

void _activation_check_proc_0d_func_772355079(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_6 ^= 0x5;

	_activation_check_proc_0d_func_1656702758(_activatnvar_t0, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_0d_func_561291092(_activatnvar_t0);
	/* inline */ _activation_check_proc_0d_func_1764480113(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0d_func_1656702758(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_0d_func_1491869840(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("7e6fde7f-1103-d583-cc53-c42811fb884e");

}

void _activation_check_proc_0d_func_551140489(char& _activatnvar_confusing_char_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_a += _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_0d_func_1920688008(U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_U8_b &= _activatnvar_confusing_LLUUID_8.mData[0x2];

}

void _activation_check_proc_0d_func_1431375670(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("de6d2208-6614-7240-79aa-f05eb2152e56");

}

void _activation_check_proc_0d_func_371249114(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_t1 = _activatnvar_so.mData[_activatnvar_pos];
}

void _activation_check_proc_0d_func_2093895015(U8& _activatnvar_t0, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_0d_func_2106825900(_activatnvar_combined_id, _activatnvar_t0);
}

void _activation_check_proc_0d_func_828769195(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_5.mData[0x2] |= _activatnvar_ser_digest[0x1];

}

void _activation_check_proc_0d_func_1826889318(unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_1 = true;

	_activation_check_proc_0d_func_828769195(_activatnvar_confusing_LLUUID_5, _activatnvar_ser_digest);
}

void _activation_check_proc_0d_func_1262655994(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_pos |= 8;
	_activation_check_proc_0d_func_1703778480(_activatnvar_combined_id, _activatnvar_t0);
	_activation_check_proc_0d_func_1169813738(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0d_func_1169813738(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_7[0xf] &= _activatnvar_confusing_LLUUID_8.mData[0x0];

}

void _activation_check_proc_0d_func_1703778480(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[9];
}

void _activation_check_proc_0d_func_1305436894(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_0d_func_1771882618(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_char_2 >>= _activatnvar_confusing_chararray_a[0xa];

}

void _activation_check_proc_0d_func_971808044(int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_e = true;

	/* inline */ _activation_check_proc_0d_func_471885563(_activatnvar_confusing_int_9);
}

void _activation_check_proc_0d_func_1146762804(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_a[0x7] *= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_0d_func_264224817(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_324986611(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_b |= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_0d_func_667042476(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x0] &= _activatnvar_confusing_LLUUID_c.mData[0xb];

}

void _activation_check_proc_0d_func_1216476308(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xe] <<= _activatnvar_confusing_chararray_2[0xb];

}

void _activation_check_proc_0d_func_1473080115(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_char_7 = _activatnvar_confusing_chararray_4[0x3];

}

void _activation_check_proc_0d_func_2111200934(unsigned char* _activatnvar_confusing_chararray_4, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_9, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_9++;

	_activation_check_proc_0d_func_1216476308(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_2);
	_activation_check_proc_0d_func_1473080115(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_4);
	_activation_check_proc_0d_func_667042476(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_0d_func_1954754668(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0d_func_1054024892(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f >>= 0xb;

}

void _activation_check_proc_0d_func_634943808(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0d_func_1919716132(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_4)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0x2] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_f = false;

	_activatnvar_confusing_int_4++;

	/* inline */ _activation_check_proc_0d_func_431707035(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_0d_func_1222207264(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_e &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_0d_func_1204158828(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0d_func_2067332348(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
}

void _activation_check_proc_0d_func_2067332348(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1469030942(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_442168715(int& _activatnvar_confusing_int_d, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("48964cbc-adf2-5235-00b0-28664c419e70");

	_activation_check_proc_0d_func_1410161268(_activatnvar_confusing_int_d);
}

void _activation_check_proc_0d_func_1410161268(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0d_func_1994909072(LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_b)
{
	if(_activatnvar_confusing_LLUUID_a.mData[0xf] != _activatnvar_confusing_char_b) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0d_func_1438560167(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_71878375(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_e, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_2, U8& _activatnvar_confusing_U8_6)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_d <<= _activatnvar_confusing_char_6;

	/* inline */ _activation_check_proc_0d_func_602581180(_activatnvar_confusing_U8_6);
	_activation_check_proc_0d_func_1091608480(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_1);
	_activation_check_proc_0d_func_1116913803(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_1715900520(_activatnvar_confusing_int_9);
	_activation_check_proc_0d_func_1438560167(_activatnvar_fscked, _activatnvar_code, _activatnvar_combined_id, _activatnvar_generic_iterator);
	_activation_check_proc_0d_func_1807954875(_activatnvar_confusing_char_c, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_0d_func_1132352644(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1116913803(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1091608480(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0d_func_1807954875(char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_c &= _activatnvar_confusing_LLUUID_2.mData[0x8];

}

void _activation_check_proc_0d_func_784634870(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("1df3c5e7-fb62-f8d5-00c8-6b760f0ebaf4");

}

void _activation_check_proc_0d_func_87803643(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xa] != _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_4 = true;

}

void _activation_check_proc_0d_func_1227934225(LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
}

void _activation_check_proc_0d_func_1751700027(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_char_6 &= _activatnvar_confusing_LLUUID_4.mData[0x0];

	_activation_check_proc_0d_func_1291541016(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0d_func_1291541016(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0d_func_2141932103(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0d_func_2028357262(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_U8_f, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_0d_func_2028357262(LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_LLUUID_5.mData[0x5];

	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_0d_func_1833656198(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1181096110(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0d_func_1814070052(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_425814660(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1239566724(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_7[0xe] &= _activatnvar_confusing_chararray_3[0x0];

}

void _activation_check_proc_0d_func_1893454364(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_chararray_5[0xe] += _activatnvar_so.mData[0x8];

}

void _activation_check_proc_0d_func_501870024(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1684587930()
{
	
}

void _activation_check_proc_0d_func_1889660291(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_990166091(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_section1)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_2 = false;

	_activatnvar_confusing_U8_b |= _activatnvar_section1.mData[0x0];

}

void _activation_check_proc_0d_func_1945148906(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0d_func_1346656747(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_568521221(LLUUID& _activatnvar_section2, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x3] ^= _activatnvar_section2.mData[0xa];

}

void _activation_check_proc_0d_func_1984924515(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("3c258da1-9076-02c6-cf41-be1df8d33688");

}

void _activation_check_proc_0d_func_2115861318(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_fscked, U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_lace, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_1 *= 0xd;

	_activation_check_proc_0d_func_1984924515(_activatnvar_confusing_LLUUID_4);
	/* inline */ _activation_check_proc_0d_func_1105195065(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_lace);
	_activation_check_proc_0d_func_568521221(_activatnvar_section2, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_0d_func_1259091220(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0d_func_402345070(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_secret;

}

void _activation_check_proc_0d_func_1595744329(U8& _activatnvar_confusing_U8_0, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_5, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_U8_0 ^= _activatnvar_confusing_char_3;

	_activation_check_proc_0d_func_1259091220(_activatnvar_confusing_int_5);
	_activation_check_proc_0d_func_402345070(_activatnvar_secret, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_0d_func_1206282544(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1006644023(U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5++;

}

void _activation_check_proc_0d_func_608053140(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1693384490(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_c, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_3;

	_activation_check_proc_0d_func_608053140(_activatnvar_fscked, _activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_code);
}

void _activation_check_proc_0d_func_465964174(bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_confusing_bool_e, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("e8710d39-538e-dd91-7a2c-acc87e0bc1b6");

	_activation_check_proc_0d_func_1023367590(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_chararray_a);
	_activation_check_proc_0d_func_70356754(_activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_d);
	/* inline */ _activation_check_proc_0d_func_1504014035(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0d_func_1023367590(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xb] >>= _activatnvar_confusing_LLUUID_b.mData[0xc];

}

void _activation_check_proc_0d_func_70356754(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_d)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x9] != 0x7) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0d_func_1271853710(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_lace;

}

void _activation_check_proc_0d_func_189025113()
{
	
}

void _activation_check_proc_0d_func_334450044(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_0d_func_1896845645(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_912285753();
	/* inline */ _activation_check_proc_0d_func_1648962622(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_912285753()
{
	
}

void _activation_check_proc_0d_func_54588855(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("563d94bb-d0ba-051b-3f11-411e060bc31a");

}

void _activation_check_proc_0d_func_504822558(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 += _activatnvar_confusing_chararray_6[0xc];

	_activation_check_proc_0d_func_54588855(_activatnvar_confusing_LLUUID_3);
}

void _activation_check_proc_0d_func_1692034984(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0d_func_612418410(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_d, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_chararray_d[0x2];

	_activation_check_proc_0d_func_1692034984(_activatnvar_confusing_int_e);
}

void _activation_check_proc_0d_func_1330839414(U8& _activatnvar_t1)
{
	_activatnvar_t1 &= 0xff;
}

void _activation_check_proc_0d_func_615188152(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6++;

}

void _activation_check_proc_0d_func_1653078568(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_8 ^= _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_0d_func_1739023409(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_0d_func_861145278(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0d_func_412277144(char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_char_8 ^= _activatnvar_confusing_chararray_1[0xb];

}

void _activation_check_proc_0d_func_1977332550(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_chararray_1[0xf] &= _activatnvar_section1.mData[0x7];

}

void _activation_check_proc_0d_func_1968683268(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("2130e521-7845-e551-2785-386a3a939e91");

}

void _activation_check_proc_0d_func_1339911359(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_2, char& _activatnvar_confusing_char_8, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_confusing_int_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_int_2++;

	_activatnvar_confusing_char_d *= _activatnvar_confusing_chararray_c[0x4];

	/* inline */ _activation_check_proc_0d_func_732367731();
	_activation_check_proc_0d_func_412277144(_activatnvar_confusing_char_8, _activatnvar_confusing_chararray_1);
	_activation_check_proc_0d_func_861145278(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_0d_func_1814372354(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_f);
	_activation_check_proc_0d_func_1977332550(_activatnvar_confusing_chararray_1, _activatnvar_section1);
	_activation_check_proc_0d_func_1968683268(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0d_func_1083751897(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
	_activation_check_proc_0d_func_1310805840(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_0d_func_1310805840(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_LLUUID_b.mData[0x5];

}

void _activation_check_proc_0d_func_195619615(LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_confusing_int_4, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] += _activatnvar_confusing_LLUUID_0.mData[0x9];

	_activatnvar_confusing_int_4 &= 0xff;

}

void _activation_check_proc_0d_func_1396596636(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("c210dfd0-d06b-5366-f1da-fe3b91d89836");

}

void _activation_check_proc_0d_func_1081312469(LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x7] <<= _activatnvar_fscked.mData[0xb];

}

void _activation_check_proc_0d_func_1136502743(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_0d_func_1379726534(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_0d_func_1948002170(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("cad3204a-65b8-62c9-31ce-76a25a2b260e");

}

void _activation_check_proc_0d_func_204789557(U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_2)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_char_2 <<= _activatnvar_confusing_U8_6;

}

void _activation_check_proc_0d_func_2080989642(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("e725c385-e245-fb79-da1f-27c168e430b7");

}

void _activation_check_proc_0d_func_70688950(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_0d_func_388364717(LLUUID& _activatnvar_confusing_LLUUID_b, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0xd] == _activatnvar_confusing_char_e) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_0d_func_1968444258(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0d_func_243129227(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activation_check_proc_0d_func_1968444258(_activatnvar_generic_bool_0);
}

void _activation_check_proc_0d_func_570153810(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_doaccount, unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x5] *= _activatnvar_ser_digest[0xc];

	/* inline */ _activation_check_proc_0d_func_961788183(_activatnvar_feat, _activatnvar_lace, _activatnvar_doaccount, _activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_964179571(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_0d_func_2001914550(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_d, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_9.mData[0x2] >>= _activatnvar_confusing_chararray_c[0xb];

	_activation_check_proc_0d_func_992865877(_activatnvar_confusing_chararray_1, _activatnvar_confusing_chararray_f);
	_activation_check_proc_0d_func_1155510770(_activatnvar_combined_id, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_0d_func_1902920599(_activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_d, _activatnvar_confusing_char_7);
	/* inline */ _activation_check_proc_0d_func_659060593(_activatnvar_combined_id, _activatnvar_confusing_U8_b);
}

void _activation_check_proc_0d_func_1155510770(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x6] += _activatnvar_combined_id.mData[0x7];

}

void _activation_check_proc_0d_func_992865877(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x1] >>= _activatnvar_confusing_chararray_1[0x3];

}

void _activation_check_proc_0d_func_403381068(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] += _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_0d_func_193251620(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] <<= _activatnvar_confusing_chararray_a[0xf];

}

void _activation_check_proc_0d_func_293154917(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_c += _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_0d_func_1179869112(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0x3] ^= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_0d_func_891120609(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_8.mData[0x3] |= _activatnvar_confusing_LLUUID_4.mData[0xb];

	_activation_check_proc_0d_func_1903702270(_activatnvar_t0);
}

void _activation_check_proc_0d_func_1903702270(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0d_func_345962126(unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_f[0x3];

	_activation_check_proc_0d_func_611842714(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_0d_func_611842714(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x0] ^= _activatnvar_confusing_LLUUID_6.mData[0x2];

}

void _activation_check_proc_0d_func_81510(U8& _activatnvar_confusing_U8_3, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xe] == _activatnvar_confusing_U8_3) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_0d_func_736180600(U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_b, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_int_b &= 0x8;

	_activation_check_proc_0d_func_81510(_activatnvar_confusing_U8_3, _activatnvar_confusing_bool_8, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0d_func_1782238()
{
	
}

void _activation_check_proc_0d_func_191114649(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0d_func_779816374(char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 |= 0xf;

	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0d_func_983372132(char& _activatnvar_feat, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_0, bool& _activatnvar_confusing_bool_c)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_c = false;

	_activation_check_proc_0d_func_779816374(_activatnvar_feat, _activatnvar_lace, _activatnvar_generic_iterator, _activatnvar_doaccount, _activatnvar_confusing_int_0);
}

void _activation_check_proc_0d_func_1713785238(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a |= 0x3;

}

void _activation_check_proc_0d_func_1404304337(unsigned char* _activatnvar_confusing_chararray_9, int& _activatnvar_confusing_int_a, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 >>= _activatnvar_confusing_chararray_9[0xe];

	_activation_check_proc_0d_func_1713785238(_activatnvar_confusing_int_a);
}

void _activation_check_proc_0d_func_1556084096(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_725674801()
{
	
}

void _activation_check_proc_0d_func_189522275(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_f.mData[0x7];

}

void _activation_check_proc_0d_func_852968922(int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
	/* inline */ _activation_check_proc_0d_func_445265819(_activatnvar_confusing_int_3);
}

void _activation_check_proc_0d_func_1881814847(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0d_func_1743815914(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0d_func_1037727961(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_U8_1 ^= _activatnvar_confusing_chararray_e[0xc];

	_activation_check_proc_0d_func_162538005(_activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_4);
	_activation_check_proc_0d_func_249150065(_activatnvar_confusing_U8_9, _activatnvar_confusing_chararray_6);
	_activation_check_proc_0d_func_48075917(_activatnvar_t0);
	_activation_check_proc_0d_func_241282452(_activatnvar_confusing_int_3, _activatnvar_confusing_int_5);
}

void _activation_check_proc_0d_func_249150065(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_chararray_6[0x7];

}

void _activation_check_proc_0d_func_241282452(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_3 = 0x7;

	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0d_func_48075917(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0d_func_162538005(bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x2] != 0xd) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0d_func_1828914209(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 |= _activatnvar_fscked.mData[0x2];

	_activation_check_proc_0d_func_1813383911(_activatnvar_confusing_int_a);
}

void _activation_check_proc_0d_func_1813383911(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_0d_func_1171211605(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_3;

	/* inline */ _activation_check_proc_0d_func_88407365(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_0d_func_2040906607(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_2040906607(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1843962263(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_chararray_f[0x9];

}

void _activation_check_proc_0d_func_2014127150(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0d_func_1301890872(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 ^= _activatnvar_confusing_chararray_9[0x8];

}

void _activation_check_proc_0d_func_1018273800(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_c *= _activatnvar_confusing_chararray_6[0xb];

}

void _activation_check_proc_0d_func_377891552(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_c, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_7, bool& _activatnvar_confusing_bool_d)
{
	_activatnvar_generic_iterator = 0;
	_activation_check_proc_0d_func_2014127150(_activatnvar_confusing_bool_d, _activatnvar_confusing_bool_9);
	_activation_check_proc_0d_func_1301890872(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_7);
	/* inline */ _activation_check_proc_0d_func_1179088068(_activatnvar_generic_iterator, _activatnvar_secret, _activatnvar_section2);
	/* inline */ _activation_check_proc_0d_func_385424966(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_7);
	_activation_check_proc_0d_func_1018273800(_activatnvar_confusing_U8_c, _activatnvar_confusing_chararray_6);
	_activation_check_proc_0d_func_1914533875(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0d_func_1914533875(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x2] += _activatnvar_confusing_LLUUID_3.mData[0x6];

}

void _activation_check_proc_0d_func_1145823847(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("eb7e8ee9-7c38-cf54-1cda-c1b604fdea1c");

}

void _activation_check_proc_0d_func_1137669946(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_0d_func_1145823847(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0d_func_140674718(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0d_func_866239728(int& _activatnvar_confusing_int_b, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0d_func_140674718(_activatnvar_confusing_int_b);
}

void _activation_check_proc_0d_func_19803411(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 = 0xd;

	_activation_check_proc_0d_func_833780992(_activatnvar_t0, _activatnvar_combined_id);
	_activation_check_proc_0d_func_1831755620(_activatnvar_t0);
	_activation_check_proc_0d_func_903797862();
}

void _activation_check_proc_0d_func_833780992(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_0d_func_903797862()
{
	
}

void _activation_check_proc_0d_func_1831755620(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0d_func_2001779215(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_0)
{
	if(! _activatnvar_confusing_bool_0) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_0d_func_1975239310(U8& _activatnvar_confusing_U8_d, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_3)
{
	
	/* inline */ _activation_check_proc_0d_func_167077569(_activatnvar_confusing_chararray_3, _activatnvar_confusing_U8_d, _activatnvar_confusing_chararray_2);
}

void _activation_check_proc_0d_func_858183351(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_4.mData[0x7] <<= _activatnvar_so.mData[0xb];

	/* inline */ _activation_check_proc_0d_func_26526524(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_0d_func_780910407(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_0d_func_1717833833(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1320025870(U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_8)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_d = 0x5;

}

void _activation_check_proc_0d_func_1808815139(unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x3] <<= _activatnvar_mac_digest[0xe];

}

void _activation_check_proc_0d_func_1752166379(U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
	_activation_check_proc_0d_func_1808815139(_activatnvar_mac_digest, _activatnvar_confusing_chararray_b);
}

void _activation_check_proc_0d_func_959715903(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
}

void _activation_check_proc_0d_func_981949985()
{
	
}

void _activation_check_proc_0d_func_591740964(char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 *= 0x8;

}

void _activation_check_proc_0d_func_1573818049(U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_a.mData[0xc];

}

void _activation_check_proc_0d_func_1183419720(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0d_func_469529545(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_6, unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_1, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_1++;

	_activation_check_proc_0d_func_1183419720(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_e);
	_activation_check_proc_0d_func_1573818049(_activatnvar_confusing_U8_a, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_0d_func_1395636887(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_9);
	/* inline */ _activation_check_proc_0d_func_1080118036(_activatnvar_confusing_char_7, _activatnvar_confusing_U8_1);
	_activation_check_proc_0d_func_591740964(_activatnvar_confusing_char_6);
	/* inline */ _activation_check_proc_0d_func_372614168(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_U8_e);
	_activation_check_proc_0d_func_1197502268(_activatnvar_confusing_bool_e, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_bool_5, _activatnvar_confusing_char_3);
}

void _activation_check_proc_0d_func_1197502268(bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_3)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x1] != _activatnvar_confusing_char_3) _activatnvar_confusing_bool_e = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0d_func_1666872485(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 &= _activatnvar_confusing_LLUUID_e.mData[0x0];

}

void _activation_check_proc_0d_func_55072575(unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_f[0xa] <<= _activatnvar_confusing_LLUUID_9.mData[0x4];

}

void _activation_check_proc_0d_func_760799532(LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = _activatnvar_lace.mData[0x8];

}

void _activation_check_proc_0d_func_1881122536(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_7[0xf] += _activatnvar_confusing_chararray_d[0xe];

}

void _activation_check_proc_0d_func_1415853583(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_f, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8++;

	_activation_check_proc_0d_func_760799532(_activatnvar_lace, _activatnvar_confusing_U8_8);
	_activation_check_proc_0d_func_55072575(_activatnvar_confusing_chararray_f, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_0d_func_1881122536(_activatnvar_confusing_chararray_7, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_0d_func_579144896(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1640057060(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_1, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("29b1682c-4005-2abe-134f-a0d384194d93");

	_activatnvar_confusing_LLUUID_3 = LLUUID("cc69ee19-1a6e-2dd8-a2fb-e9a4347f8bf6");

	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0d_func_571280025(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_chararray_b[0xc] >>= _activatnvar_code.mData[0x1];

}

void _activation_check_proc_0d_func_104803575(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_0d_func_571280025(_activatnvar_confusing_chararray_b, _activatnvar_code);
}

void _activation_check_proc_0d_func_823164807(unsigned char* _activatnvar_confusing_chararray_8, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 |= _activatnvar_confusing_chararray_8[0x7];

}

void _activation_check_proc_0d_func_1686619760(LLUUID& _activatnvar_confusing_LLUUID_a, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c = _activatnvar_confusing_LLUUID_a.mData[0xd];

}

void _activation_check_proc_0d_func_1718435840(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_secret;

}

void _activation_check_proc_0d_func_954174586(bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_7)
{
	if(  _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_2 = true;

	/* inline */ _activation_check_proc_0d_func_2135782280(_activatnvar_confusing_U8_7, _activatnvar_confusing_char_d);
}

void _activation_check_proc_0d_func_1600307725(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0d_func_86152404()
{
	
}

void _activation_check_proc_0d_func_1506959653(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0d_func_1415790084(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xd] >>= _activatnvar_lace.mData[0xc];

}

void _activation_check_proc_0d_func_1056972812(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1546765705(U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_2 = false;

	if(_activatnvar_confusing_LLUUID_5.mData[0x2] == _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_0d_func_551999751(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0d_func_951081540(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_c)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xa] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0d_func_2122066586(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_4, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_5.mData[0xd] += _activatnvar_confusing_LLUUID_0.mData[0x7];

	/* inline */ _activation_check_proc_0d_func_338685768(_activatnvar_confusing_char_0, _activatnvar_confusing_U8_4);
	_activation_check_proc_0d_func_951081540(_activatnvar_confusing_bool_d, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_U8_9, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_0d_func_211420737(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_LLUUID_b.mData[0xb];

	_activation_check_proc_0d_func_1754822611(_activatnvar_confusing_char_c, _activatnvar_confusing_U8_b, _activatnvar_confusing_bool_1);
	_activation_check_proc_0d_func_1616803400(_activatnvar_confusing_LLUUID_e);
	/* inline */ _activation_check_proc_0d_func_554699886(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_U8_b, _activatnvar_confusing_bool_e);
	/* inline */ _activation_check_proc_0d_func_469393050();
}

void _activation_check_proc_0d_func_1616803400(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("6dd8212b-acf1-dd18-dd98-31910df8cb4d");

}

void _activation_check_proc_0d_func_1754822611(char& _activatnvar_confusing_char_c, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_char_c >>= _activatnvar_confusing_U8_b;

}

void _activation_check_proc_0d_func_702440631(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x5] &= _activatnvar_confusing_LLUUID_e.mData[0x6];

}

void _activation_check_proc_0d_func_799648500(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_6.mData[0x1] = _activatnvar_confusing_LLUUID_9.mData[0x4];

}

void _activation_check_proc_0d_func_1049951677(unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] >>= _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_0d_func_213794774(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_0 &= 0x9;

}

void _activation_check_proc_0d_func_1070390240(U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0d_func_1560129797(_activatnvar_pos);
	/* inline */ _activation_check_proc_0d_func_1221485080(_activatnvar_secret, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_0d_func_1049951677(_activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_0d_func_213794774(_activatnvar_confusing_U8_0, _activatnvar_confusing_bool_a, _activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_0d_func_1560129797(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0d_func_379601053(U8& _activatnvar_confusing_U8_c, unsigned char* _activatnvar_name_digest, LLMD5*& _activatnvar_nmd5, int& _activatnvar_confusing_int_3, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_chararray_2[0xf];

	_activatnvar_confusing_int_3++;

	_activation_check_proc_0d_func_2051666221(_activatnvar_name_digest, _activatnvar_nmd5);
}

void _activation_check_proc_0d_func_2051666221(unsigned char* _activatnvar_name_digest, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_0d_func_753472962(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_4 >>= _activatnvar_confusing_int_9;

}

void _activation_check_proc_0d_func_1948188721(LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x1] *= _activatnvar_confusing_LLUUID_5.mData[0xe];

	/* inline */ _activation_check_proc_0d_func_901868289(_activatnvar_confusing_int_7);
}

void _activation_check_proc_0d_func_2040878343(U8& _activatnvar_pos, bool& _activatnvar_doaccount, U8& _activatnvar_confusing_U8_c)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_U8_c <<= _activatnvar_pos;

}

void _activation_check_proc_0d_func_1521841320(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_0d_func_1008422264(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_fscked, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_U8_0 = _activatnvar_fscked.mData[0x3];

	_activation_check_proc_0d_func_1592937132(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_4, _activatnvar_confusing_bool_1);
	/* inline */ _activation_check_proc_0d_func_689732821(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	_activation_check_proc_0d_func_179678367(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_0d_func_179678367(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_6;

}

void _activation_check_proc_0d_func_1592937132(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0d_func_656961609(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_so;

}

void _activation_check_proc_0d_func_997919430(LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_U8_f++;

	_activation_check_proc_0d_func_656961609(_activatnvar_confusing_LLUUID_0, _activatnvar_so);
}

void _activation_check_proc_0d_func_1844457419(LLUUID& _activatnvar_secret, char* _activatnvar_strbuf_0)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0d_func_1905386574(char* _activatnvar_strbuf_0, bool& _activatnvar_confusing_bool_e, LLUUID& _activatnvar_secret, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_e &= _activatnvar_generic_bool_1;

	_activation_check_proc_0d_func_1112724030(_activatnvar_strbuf_0);
	_activation_check_proc_0d_func_1844457419(_activatnvar_secret, _activatnvar_strbuf_0);
}

void _activation_check_proc_0d_func_1112724030(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 6; _activatnvar_strbuf_0[0] ^= 55; _activatnvar_strbuf_0[1] = 117; _activatnvar_strbuf_0[1] ^= 69; _activatnvar_strbuf_0[2] = 94; _activatnvar_strbuf_0[2] ^= 109; _activatnvar_strbuf_0[3] = 71; _activatnvar_strbuf_0[3] ^= 115; _activatnvar_strbuf_0[4] = 72; _activatnvar_strbuf_0[4] ^= 42; _activatnvar_strbuf_0[5] = 86; _activatnvar_strbuf_0[5] ^= 48; _activatnvar_strbuf_0[6] = 111; _activatnvar_strbuf_0[6] ^= 9; _activatnvar_strbuf_0[7] = 104; _activatnvar_strbuf_0[7] ^= 94; _activatnvar_strbuf_0[8] = 40; _activatnvar_strbuf_0[8] ^= 5; _activatnvar_strbuf_0[9] = 115; _activatnvar_strbuf_0[9] ^= 17; _activatnvar_strbuf_0[10] = 56; _activatnvar_strbuf_0[10] ^= 15; _activatnvar_strbuf_0[11] = 88; _activatnvar_strbuf_0[11] ^= 108; _activatnvar_strbuf_0[12] = 82; _activatnvar_strbuf_0[12] ^= 98; _activatnvar_strbuf_0[13] = 56; _activatnvar_strbuf_0[13] ^= 21; _activatnvar_strbuf_0[14] = 75; _activatnvar_strbuf_0[14] ^= 123; _activatnvar_strbuf_0[15] = 26; _activatnvar_strbuf_0[15] ^= 124; _activatnvar_strbuf_0[16] = 14; _activatnvar_strbuf_0[16] ^= 108; _activatnvar_strbuf_0[17] = 125; _activatnvar_strbuf_0[17] ^= 25; _activatnvar_strbuf_0[18] = 116; _activatnvar_strbuf_0[18] ^= 89; _activatnvar_strbuf_0[19] = 105; _activatnvar_strbuf_0[19] ^= 88; _activatnvar_strbuf_0[20] = 94; _activatnvar_strbuf_0[20] ^= 61; _activatnvar_strbuf_0[21] = 127; _activatnvar_strbuf_0[21] ^= 29; _activatnvar_strbuf_0[22] = 24; _activatnvar_strbuf_0[22] ^= 126; _activatnvar_strbuf_0[23] = 120; _activatnvar_strbuf_0[23] ^= 85; _activatnvar_strbuf_0[24] = 98; _activatnvar_strbuf_0[24] ^= 86; _activatnvar_strbuf_0[25] = 70; _activatnvar_strbuf_0[25] ^= 112; _activatnvar_strbuf_0[26] = 61; _activatnvar_strbuf_0[26] ^= 8; _activatnvar_strbuf_0[27] = 122; _activatnvar_strbuf_0[27] ^= 25; _activatnvar_strbuf_0[28] = 2; _activatnvar_strbuf_0[28] ^= 50; _activatnvar_strbuf_0[29] = 127; _activatnvar_strbuf_0[29] ^= 78; _activatnvar_strbuf_0[30] = 92; _activatnvar_strbuf_0[30] ^= 56; _activatnvar_strbuf_0[31] = 78; _activatnvar_strbuf_0[31] ^= 124; _activatnvar_strbuf_0[32] = 29; _activatnvar_strbuf_0[32] ^= 44; _activatnvar_strbuf_0[33] = 127; _activatnvar_strbuf_0[33] ^= 29; _activatnvar_strbuf_0[34] = 15; _activatnvar_strbuf_0[34] ^= 107; _activatnvar_strbuf_0[35] = 71; _activatnvar_strbuf_0[35] ^= 114; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0d_func_1519984011(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_0d_func_202006084(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_799010333(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x8] == 0x9) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_0d_func_1315232195(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_0d_func_1075833155(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0d_func_549874815(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_chararray_7[0x8] |= _activatnvar_confusing_LLUUID_9.mData[0x0];

	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_0d_func_563802810(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4++;

}

void _activation_check_proc_0d_func_1724284296(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_0d_func_2135942153(int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_7, char& _activatnvar_confusing_char_c, int& _activatnvar_confusing_int_1, char& _activatnvar_confusing_char_4, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_int_d++;

	_activation_check_proc_0d_func_549874815(_activatnvar_confusing_char_c, _activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_0d_func_563802810(_activatnvar_confusing_char_4);
	/* inline */ _activation_check_proc_0d_func_818876810(_activatnvar_confusing_int_6);
	_activation_check_proc_0d_func_1724284296(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0d_func_630029959(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 30; _activatnvar_strbuf_0[0] ^= 95; _activatnvar_strbuf_0[1] = 16; _activatnvar_strbuf_0[1] ^= 115; _activatnvar_strbuf_0[2] = 111; _activatnvar_strbuf_0[2] ^= 27; _activatnvar_strbuf_0[3] = 24; _activatnvar_strbuf_0[3] ^= 113; _activatnvar_strbuf_0[4] = 127; _activatnvar_strbuf_0[4] ^= 9; _activatnvar_strbuf_0[5] = 126; _activatnvar_strbuf_0[5] ^= 31; _activatnvar_strbuf_0[6] = 126; _activatnvar_strbuf_0[6] ^= 10; _activatnvar_strbuf_0[7] = 49; _activatnvar_strbuf_0[7] ^= 88; _activatnvar_strbuf_0[8] = 103; _activatnvar_strbuf_0[8] ^= 8; _activatnvar_strbuf_0[9] = 67; _activatnvar_strbuf_0[9] ^= 45; _activatnvar_strbuf_0[10] = 93; _activatnvar_strbuf_0[10] ^= 30; _activatnvar_strbuf_0[11] = 54; _activatnvar_strbuf_0[11] ^= 89; _activatnvar_strbuf_0[12] = 99; _activatnvar_strbuf_0[12] ^= 7; _activatnvar_strbuf_0[13] = 55; _activatnvar_strbuf_0[13] ^= 82; _activatnvar_strbuf_0[14] = 0;
}

void _activation_check_proc_0d_func_1438327735(std::string& _activatnvar_fullname)
{
	_activatnvar_fullname = gFullName;
}

void _activation_check_proc_0d_func_971272909(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_f[0xc] |= _activatnvar_name_digest[0xe];

}

void _activation_check_proc_0d_func_206901743(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b = 0x6;

}

void _activation_check_proc_0d_func_402136442(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9++;

}

void _activation_check_proc_0d_func_1990687273(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_a[0x5] *= _activatnvar_mac_digest[0xa];

	/* inline */ _activation_check_proc_0d_func_1046391058(_activatnvar_confusing_chararray_6, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0d_func_1965499822(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xb] |= _activatnvar_confusing_LLUUID_9.mData[0xb];

}

void _activation_check_proc_0d_func_484955346(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_c, U8& _activatnvar_t1)
{
	_activatnvar_confusing_U8_c++;

	/* inline */ _activation_check_proc_0d_func_485019146(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_chararray_7, _activatnvar_confusing_U8_5, _activatnvar_t1);
}

void _activation_check_proc_0d_func_503180388(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_c) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0d_func_821168556(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("a46dd2e9-161f-739a-1751-e0cca526b910");

}

void _activation_check_proc_0d_func_732286737(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_0d_func_685258936(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_doaccount)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] += _activatnvar_confusing_LLUUID_3.mData[0xb];

	if(! _activatnvar_doaccount) _activatnvar_confusing_char_9 ^= _activatnvar_confusing_char_6;

}

void _activation_check_proc_0d_func_131986706(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("6c0fc301-2f4c-6e8f-4d84-d3b0f5379747");

	_activatnvar_confusing_U8_6++;

}

void _activation_check_proc_0d_func_1354443965(LLUUID& _activatnvar_code, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b &= _activatnvar_code.mData[0x2];

}

void _activation_check_proc_0d_func_709499427(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_567244617(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_837313373(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0d_func_720070060(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 += _activatnvar_confusing_int_2;

}

void _activation_check_proc_0d_func_1612866691(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_5[0xd] <<= _activatnvar_confusing_chararray_2[0xc];

}

void _activation_check_proc_0d_func_1825104081(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_2061522556(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1438039301(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_b.mData[0x9] &= _activatnvar_confusing_chararray_9[0xd];

}

void _activation_check_proc_0d_func_1085628293(unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_b, unsigned char* _activatnvar_confusing_chararray_a)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_b = false;

	/* inline */ _activation_check_proc_0d_func_1214466297(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_0d_func_1901815803(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_section2;

}

void _activation_check_proc_0d_func_362331568(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	/* inline */ _activation_check_proc_0d_func_184550885(_activatnvar_confusing_int_c);
	/* inline */ _activation_check_proc_0d_func_1230512038(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_0d_func_1173794340(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_chararray_3[0x4];

}

void _activation_check_proc_0d_func_517206588(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_f.mData[0xd] >>= _activatnvar_confusing_LLUUID_8.mData[0x6];

}

void _activation_check_proc_0d_func_863352570(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_201114514(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_d, char& _activatnvar_confusing_char_9)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_9 |= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_0d_func_1856319287(char& _activatnvar_confusing_char_6, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
	/* inline */ _activation_check_proc_0d_func_1885570152(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_6);
}

void _activation_check_proc_0d_func_1500193881(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("59aa678a-5184-099f-c1f5-096e66e41d18");

}

void _activation_check_proc_0d_func_1931488959(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1007505373(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_e;

}

void _activation_check_proc_0d_func_255501224(LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 >>= 0x2;

	/* inline */ _activation_check_proc_0d_func_18338225(_activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0d_func_1571300121(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_0d_func_203670098(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_0d_func_1530817379(int& _activatnvar_confusing_int_0)
{
	
	_activation_check_proc_0d_func_1364033180(_activatnvar_confusing_int_0);
}

void _activation_check_proc_0d_func_1364033180(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0d_func_1652655461(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_7;

	_activation_check_proc_0d_func_1348491265(_activatnvar_confusing_U8_3);
}

void _activation_check_proc_0d_func_1348491265(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

}

void _activation_check_proc_0d_func_599064623(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

}

void _activation_check_proc_0d_func_896039924(char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

}

void _activation_check_proc_0d_func_1157611591(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, char& _activatnvar_confusing_char_2)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_896039924(_activatnvar_confusing_char_2);
	_activation_check_proc_0d_func_599064623(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_0d_func_758718698(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1212600110(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_1337723052(_activatnvar_confusing_U8_3, _activatnvar_confusing_LLUUID_a);
	/* inline */ _activation_check_proc_0d_func_1589333276(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_0d_func_1892108692(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_0d_func_1337723052(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_LLUUID_a.mData[0x1];

}

void _activation_check_proc_0d_func_268648389(U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d++;

}

void _activation_check_proc_0d_func_642249065(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_2 = _activatnvar_section1.mData[0x2];

}

void _activation_check_proc_0d_func_299386692(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_4;

}

void _activation_check_proc_0d_func_582830233(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_0.mData[0xa] |= _activatnvar_section1.mData[0xd];

}

void _activation_check_proc_0d_func_1086093394(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0d_func_1025599484(DWORD& _activatnvar_gvi_flags)
{
	_activatnvar_gvi_flags = 0;
}

void _activation_check_proc_0d_func_539980821(U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_U8_7 &= _activatnvar_confusing_chararray_6[0xc];

}

void _activation_check_proc_0d_func_2042645778(int& _activatnvar_confusing_int_0, U8& _activatnvar_confusing_U8_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_0d_func_539980821(_activatnvar_confusing_U8_7, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_0d_func_1112924311(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_0d_func_1253851945(int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_f, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a <<= _activatnvar_confusing_chararray_f[0x9];

	_activation_check_proc_0d_func_1112924311(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_0d_func_28217437(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_9);
	/* inline */ _activation_check_proc_0d_func_60203492(_activatnvar_confusing_bool_f, _activatnvar_confusing_U8_2, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0d_func_1886433839(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_e)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0d_func_345846240(char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e++;

}

void _activation_check_proc_0d_func_847478422(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0d_func_631128681(_activatnvar_confusing_chararray_6, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_0d_func_2131640734(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] = _activatnvar_confusing_chararray_8[0x6];

}

void _activation_check_proc_0d_func_1407064951(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 ^= 0x4;

	_activation_check_proc_0d_func_2131640734(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_0d_func_708048968(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0d_func_1132415031(U8& _activatnvar_confusing_U8_8, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_8 <<= _activatnvar_confusing_chararray_4[0x7];

}

void _activation_check_proc_0d_func_1246568965()
{
	
}

void _activation_check_proc_0d_func_271925464(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_9)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_9 &= _activatnvar_confusing_char_5;

}

void _activation_check_proc_0d_func_460769683(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1543675082(unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x3] ^= _activatnvar_confusing_chararray_4[0x3];

}

void _activation_check_proc_0d_func_2079771887(LLUUID& _activatnvar_lace, char& _activatnvar_feat)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
}

void _activation_check_proc_0d_func_1360131295(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_1, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7++;

	_activation_check_proc_0d_func_1794241942(_activatnvar_confusing_chararray_1, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0d_func_1794241942(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] |= _activatnvar_confusing_chararray_1[0x9];

}

void _activation_check_proc_0d_func_1775601089(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_0d_func_645417913(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_267444285(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1034652473(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_a, int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_mac_digest, unsigned char* _activatnvar_confusing_chararray_c, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0d_func_1951410368(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_2);
	/* inline */ _activation_check_proc_0d_func_2071122667(_activatnvar_confusing_chararray_c, _activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_0d_func_518365920(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_8);
	_activation_check_proc_0d_func_936713617(_activatnvar_confusing_int_d);
	_activation_check_proc_0d_func_1121971763(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
	_activation_check_proc_0d_func_267444285(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_936713617(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d += _activatnvar_confusing_int_d;

}

void _activation_check_proc_0d_func_1951410368(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_0d_func_1121971763(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_357577150(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1064780191(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_5)
{
	if(  _activatnvar_doaccount) _activatnvar_confusing_char_5 |= 0x2;

}

void _activation_check_proc_0d_func_1233866511(bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_secret, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_b.mData[0x7] != 0xf) _activatnvar_confusing_bool_0 = false;

	/* inline */ _activation_check_proc_0d_func_546044713(_activatnvar_secret, _activatnvar_confusing_LLUUID_1);
	/* inline */ _activation_check_proc_0d_func_1700887430(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_6);
}

void _activation_check_proc_0d_func_1156062359(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("786f66dd-be54-eef5-517e-e3a13f7e4e41");

}

void _activation_check_proc_0d_func_883591668(U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_chararray_d[0xd];

}

void _activation_check_proc_0d_func_7635799(unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_f)
{
	
	_activation_check_proc_0d_func_883591668(_activatnvar_confusing_U8_f, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_0d_func_1249196359(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_LLUUID_f = _activatnvar_lace;

	/* inline */ _activation_check_proc_0d_func_402969485(_activatnvar_t0);
}

void _activation_check_proc_0d_func_1439213732(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0d_func_673912396(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

	_activation_check_proc_0d_func_333676153(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_0d_func_333676153(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] = _activatnvar_confusing_chararray_e[0x9];

}

void _activation_check_proc_0d_func_415515444(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_3)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_3 ^= _activatnvar_confusing_char_c;

}

void _activation_check_proc_0d_func_588281626(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_8)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xd] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_6 = false;

	/* inline */ _activation_check_proc_0d_func_186751689(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_815781060(_activatnvar_confusing_char_a);
}

void _activation_check_proc_0d_func_1499774144(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x7] ^= _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_0d_func_1241551254(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_1499774144(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0d_func_1838271015(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_8 >>= _activatnvar_confusing_int_f;

}

void _activation_check_proc_0d_func_647514115(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_0d_func_1233180161(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_char_a ^= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_0d_func_63640449(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_7, unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 *= _activatnvar_confusing_chararray_1[0x1];

	/* inline */ _activation_check_proc_0d_func_1545667609(_activatnvar_confusing_LLUUID_9);
	/* inline */ _activation_check_proc_0d_func_453302147(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_0d_func_1825514274(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0d_func_706084500(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_b;

}

void _activation_check_proc_0d_func_295617151(U8& _activatnvar_t1, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_1, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_b, bool& _activatnvar_confusing_bool_b, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

	_activation_check_proc_0d_func_245316626(_activatnvar_t1, _activatnvar_confusing_char_d, _activatnvar_confusing_bool_4);
	/* inline */ _activation_check_proc_0d_func_1764118422(_activatnvar_confusing_char_1, _activatnvar_confusing_LLUUID_8);
	/* inline */ _activation_check_proc_0d_func_1118235336(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_LLUUID_b);
	_activation_check_proc_0d_func_706084500(_activatnvar_confusing_bool_c, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_0d_func_245316626(U8& _activatnvar_t1, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_d ^= _activatnvar_t1;

}

void _activation_check_proc_0d_func_790275914()
{
	
}

void _activation_check_proc_0d_func_1259998075(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

	/* inline */ _activation_check_proc_0d_func_57009827(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0d_func_1891344897(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0d_func_1569546227(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0d_func_163680242(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("4b6c4058-de6e-572c-beb2-2f578cf5a410");

}

void _activation_check_proc_0d_func_853391110(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 += _activatnvar_confusing_chararray_e[0xf];

}

void _activation_check_proc_0d_func_1114023124(LLUUID& _activatnvar_confusing_LLUUID_4, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

	/* inline */ _activation_check_proc_0d_func_880825983(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0d_func_138397021(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_U8_d;

	_activation_check_proc_0d_func_143672709(_activatnvar_confusing_chararray_9, _activatnvar_confusing_char_3);
}

void _activation_check_proc_0d_func_143672709(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 <<= _activatnvar_confusing_chararray_9[0x9];

}

void _activation_check_proc_0d_func_2009165192(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_0d_func_634125816(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_2009165192(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_748497981(_activatnvar_combined_id, _activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_code);
}

void _activation_check_proc_0d_func_2048181274(bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_char_0++;

	_activation_check_proc_0d_func_2052416779(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_0d_func_2052416779(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0d_func_1932612123(U8& _activatnvar_confusing_U8_c, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x9] == _activatnvar_confusing_U8_c) _activatnvar_confusing_bool_9 = true;

}

void _activation_check_proc_0d_func_54600297(LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_e.mData[0x3];

}

void _activation_check_proc_0d_func_630316147(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_0d_func_2124903913(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_d)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_bool_3 = true;

}

void _activation_check_proc_0d_func_453766495(unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_chararray_b[0x3];

}

void _activation_check_proc_0d_func_901475332(U8& _activatnvar_confusing_U8_7, char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_2 *= _activatnvar_confusing_U8_7;

}

void _activation_check_proc_0d_func_899729340(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_7)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x6] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_4 = false;

	_activation_check_proc_0d_func_927691595(_activatnvar_confusing_LLUUID_f, _activatnvar_ser_digest);
	_activation_check_proc_0d_func_989035237(_activatnvar_confusing_char_c, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_0d_func_989035237(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_c += _activatnvar_confusing_chararray_7[0x0];

}

void _activation_check_proc_0d_func_927691595(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_LLUUID_f.mData[0x4] >>= _activatnvar_ser_digest[0x0];

}

void _activation_check_proc_0d_func_5847864(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) LLUI::sImageProvider = NULL;
}

void _activation_check_proc_0d_func_936093043(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0d_func_947978791(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0d_func_1093582222(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 |= 0x9;

}

void _activation_check_proc_0d_func_232782302(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xb] += _activatnvar_confusing_chararray_2[0x6];

}

void _activation_check_proc_0d_func_1739328472(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_bool_2 = false;

}

void _activation_check_proc_0d_func_1680615062(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x0] >>= _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_0d_func_731428611(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1990575561(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_0d_func_2074989404(int& _activatnvar_confusing_int_c, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_0d_func_785842298(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_0d_func_785842298(LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 = _activatnvar_confusing_LLUUID_6.mData[0x6];

}

void _activation_check_proc_0d_func_881487170(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_507851961(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_0d_func_230194757(LLUUID& _activatnvar_confusing_LLUUID_5, DWORD& _activatnvar_serial, LLUUID& _activatnvar_confusing_LLUUID_1, DWORD& _activatnvar_gvi_flags, unsigned char* _activatnvar_name_digest, BOOL& _activatnvar_success)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("de3d927b-60bb-5e89-f39c-ce02cd706ed7");

	_activation_check_proc_0d_func_1748506933(_activatnvar_confusing_LLUUID_1, _activatnvar_name_digest, _activatnvar_gvi_flags, _activatnvar_success, _activatnvar_serial);
}

void _activation_check_proc_0d_func_1748506933(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_name_digest, DWORD& _activatnvar_gvi_flags, BOOL& _activatnvar_success, DWORD& _activatnvar_serial)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	_activatnvar_confusing_LLUUID_1.mData[0x6] = _activatnvar_name_digest[0xf];

}

void _activation_check_proc_0d_func_500483594(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_0d_func_43539157(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0d_func_1852622017(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_0d_func_829346012(U8& _activatnvar_t0, U8& _activatnvar_t1, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_section2;

	/* inline */ _activation_check_proc_0d_func_1925216235(_activatnvar_t0, _activatnvar_t1);
	_activation_check_proc_0d_func_332431422(_activatnvar_t1);
}

void _activation_check_proc_0d_func_332431422(U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(~_activatnvar_t1);
}

void _activation_check_proc_0d_func_514705342(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_7.mData[0x5] ^= _activatnvar_confusing_chararray_0[0xc];

}

void _activation_check_proc_0d_func_33096024(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_5.mData[0x5] = _activatnvar_fscked.mData[0x5];

	_activatnvar_confusing_LLUUID_e.mData[0x5] ^= _activatnvar_confusing_chararray_3[0x7];

	_activation_check_proc_0d_func_514705342(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_0d_func_931237569(bool& _activatnvar_doaccount, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
}

void _activation_check_proc_0d_func_1453563592(U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xc] == _activatnvar_t0) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_d;

}

void _activation_check_proc_0d_func_664055844(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b &= 0xff;

}

void _activation_check_proc_0d_func_194192961(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_confusing_LLUUID_a, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_3++;

	/* inline */ _activation_check_proc_0d_func_531366887(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_LLUUID_a, _activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_870266491(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_2118960346(int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_9;

	/* inline */ _activation_check_proc_0d_func_1989586012(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	/* inline */ _activation_check_proc_0d_func_1845800381(_activatnvar_confusing_int_9);
	/* inline */ _activation_check_proc_0d_func_1230678047(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_203532256(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_chararray_0[0x5];

}

void _activation_check_proc_0d_func_1818366487(LLUUID& _activatnvar_confusing_LLUUID_f, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x0] = _activatnvar_confusing_LLUUID_f.mData[0x0];

}

void _activation_check_proc_0d_func_864077552()
{
	
}

void _activation_check_proc_0d_func_2132209926(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1727041438(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 ^= _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_0d_func_188948229(int& _activatnvar_confusing_int_5, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	/* inline */ _activation_check_proc_0d_func_1995315970(_activatnvar_confusing_int_7, _activatnvar_confusing_int_5);
}

void _activation_check_proc_0d_func_2472608(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_t1;
}

void _activation_check_proc_0d_func_1452783342(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b)
{
	
	_activation_check_proc_0d_func_1240371801(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_0d_func_1240371801(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_f;

}

void _activation_check_proc_0d_func_1683788829(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_468763067(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_0[0xe] *= _activatnvar_confusing_chararray_5[0x0];

}

void _activation_check_proc_0d_func_1527094350(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_8, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e = _activatnvar_section1.mData[0x9];

	_activatnvar_confusing_U8_7 = _activatnvar_confusing_chararray_0[0x5];

	_activation_check_proc_0d_func_1859371055(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_char_2);
}

void _activation_check_proc_0d_func_1859371055(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_LLUUID_8.mData[0xd];

}

void _activation_check_proc_0d_func_484087889(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_d, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_U8_d++;

	/* inline */ _activation_check_proc_0d_func_472223473(_activatnvar_confusing_char_2, _activatnvar_confusing_char_4);
}

void _activation_check_proc_0d_func_1850384053(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0d_func_1104305538(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x7] |= _activatnvar_ser_digest[0x2];

}

void _activation_check_proc_0d_func_2139620875(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_0d_func_1509810082(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_9.mData[0x3] &= _activatnvar_confusing_LLUUID_8.mData[0x1];

}

void _activation_check_proc_0d_func_712885460(U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_0d_func_1271804900(bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_6;

}

void _activation_check_proc_0d_func_180082024(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_bool_6 = false;

}

void _activation_check_proc_0d_func_623225456(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0d_func_288403810(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= 0xf;

}

void _activation_check_proc_0d_func_650392759(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_2092099235(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x7] &= _activatnvar_so.mData[0xe];

}

void _activation_check_proc_0d_func_1277600713(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xd] &= _activatnvar_confusing_LLUUID_d.mData[0xf];

	_activation_check_proc_0d_func_2092099235(_activatnvar_so, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_0d_func_356618667(LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_generic_iterator++;
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_194379232(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_confusing_chararray_d[0x2] |= _activatnvar_name_digest[0x4];

}

void _activation_check_proc_0d_func_553346436(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0d_func_1878552383(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_0d_func_1513183598(LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_b, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_char_0 &= _activatnvar_so.mData[0x5];

	/* inline */ _activation_check_proc_0d_func_2075380985(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_b);
	_activation_check_proc_0d_func_1966636402(_activatnvar_confusing_U8_9, _activatnvar_confusing_bool_9, _activatnvar_confusing_U8_a);
	_activation_check_proc_0d_func_399302305(_activatnvar_generic_iterator);
}

void _activation_check_proc_0d_func_1966636402(U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_a)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_9 ^= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_0d_func_399302305(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0d_func_1186659028(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0d_func_896500858(int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_int_9++;

	_activation_check_proc_0d_func_190969118(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_0d_func_239316662(_activatnvar_lace, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_0d_func_190969118(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("919874f4-93a2-845a-1fc9-55247369a687");

}

void _activation_check_proc_0d_func_345791434(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] >>= _activatnvar_confusing_chararray_e[0xe];

}

void _activation_check_proc_0d_func_456753051(bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_d, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_int_d &= 0xff;

	/* inline */ _activation_check_proc_0d_func_1488082835(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_7);
	_activation_check_proc_0d_func_345791434(_activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0d_func_1284636801(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_6;

	/* inline */ _activation_check_proc_0d_func_184066206(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
}

void _activation_check_proc_0d_func_1948020429(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_U8_0++;

	/* inline */ _activation_check_proc_0d_func_1251515596(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0d_func_1386475065(U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_LLUUID_9.mData[0x5];

}

void _activation_check_proc_0d_func_1670543469(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x0] |= _activatnvar_name_digest[0x2];

}

void _activation_check_proc_0d_func_402949844(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_e = 0xf;

	_activation_check_proc_0d_func_1670543469(_activatnvar_name_digest, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_0d_func_1584371172(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1623897223(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0d_func_17856666(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	/* inline */ _activation_check_proc_0d_func_195720322(_activatnvar_confusing_char_9, _activatnvar_doaccount, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_0d_func_84148824(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_4, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c++;

	/* inline */ _activation_check_proc_0d_func_1283434554(_activatnvar_confusing_int_7);
	/* inline */ _activation_check_proc_0d_func_1885733379(_activatnvar_confusing_int_4);
}

void _activation_check_proc_0d_func_1199167055(unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_chararray_a[0x7];

}

void _activation_check_proc_0d_func_1322626923(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0d_func_113480255(_activatnvar_confusing_char_1, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0d_func_113480255(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_1 <<= _activatnvar_confusing_chararray_3[0xb];

}

void _activation_check_proc_0d_func_1199626515(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	_activation_check_proc_0d_func_1718274146(_activatnvar_generic_bool_1, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0d_func_1718274146(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_0d_func_1633562865()
{
	
}

void _activation_check_proc_0d_func_451453565(char& _activatnvar_confusing_char_9, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_char_9++;

	_activation_check_proc_0d_func_280104616(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0d_func_280104616(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 >>= 0x4;

}

void _activation_check_proc_0d_func_851326133(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_LLUUID_6.mData[0x6] += _activatnvar_confusing_chararray_a[0xe];

}

void _activation_check_proc_0d_func_682626388(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_2)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
	_activatnvar_confusing_int_2++;

	_activation_check_proc_0d_func_851326133(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_0d_func_246792854(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0d_func_240216949(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_272667718(U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_U8_8 = _activatnvar_confusing_LLUUID_e.mData[0x8];

}

void _activation_check_proc_0d_func_1901678695(char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0d_func_2086845297(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_char_3);
}

void _activation_check_proc_0d_func_2086845297(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 = _activatnvar_confusing_LLUUID_f.mData[0x9];

}

void _activation_check_proc_0d_func_1803040455(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 ^= 0xf;

}

void _activation_check_proc_0d_func_2124513163(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_0d_func_171450115(LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x2] *= _activatnvar_section1.mData[0x1];

	
}

void _activation_check_proc_0d_func_451587337(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1297991732(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0d_func_1155636419(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_1 >>= _activatnvar_confusing_char_c;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0d_func_1747772340(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_1171832605(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xd] += _activatnvar_confusing_chararray_0[0x5];

}

void _activation_check_proc_0d_func_1894186930(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

}

void _activation_check_proc_0d_func_315314061(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_3++;

	_activation_check_proc_0d_func_1894186930(_activatnvar_confusing_int_2);
}

void _activation_check_proc_0d_func_767101912(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	
}

void _activation_check_proc_0d_func_460772403(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x2] != _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_0d_func_2066291592(int& _activatnvar_confusing_int_b, U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	/* inline */ _activation_check_proc_0d_func_1058610662(_activatnvar_confusing_int_b);
}

void _activation_check_proc_0d_func_625808715(bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_6)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x5] == 0xb) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_0d_func_1497302778(unsigned char* _activatnvar_mac_digest, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
}

void _activation_check_proc_0d_func_1931944702(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0x3] *= _activatnvar_confusing_LLUUID_e.mData[0x4];

}

void _activation_check_proc_0d_func_1915572248(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	
	_activatnvar_confusing_LLUUID_1.mData[0x0] <<= _activatnvar_confusing_chararray_1[0xd];

}

void _activation_check_proc_0d_func_1514620317(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_0d_func_1742765636(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = ~(_activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_0d_func_1619362100(_activatnvar_confusing_chararray_6, _activatnvar_confusing_U8_f);
}

void _activation_check_proc_0d_func_1619362100(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_chararray_6[0x5];

}

void _activation_check_proc_0d_func_248373542(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0d_func_989025891(LLUUID& _activatnvar_confusing_LLUUID_f, bool& _activatnvar_confusing_bool_7)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xa] != 0xa) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_0d_func_198278(char& _activatnvar_confusing_char_e, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_char_e = _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0d_func_557175978(LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] *= _activatnvar_confusing_chararray_4[0x0];

}

void _activation_check_proc_0d_func_1181009973(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("8d92d7ce-1412-8715-1879-db54fdde33dd");

}

void _activation_check_proc_0d_func_1540715659(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_958907583(char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_chararray_7[0x6];

}

void _activation_check_proc_0d_func_1828109192(bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0d_func_851162395(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_0d_func_416926132(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_0, U8& _activatnvar_confusing_U8_4)
{
	if(_activatnvar_confusing_LLUUID_0.mData[0x6] != _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_0d_func_33168490(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_0d_func_287675926(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_LLUUID_d.mData[0x3];

}

void _activation_check_proc_0d_func_1829145907(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= _activatnvar_confusing_int_c;

}

void _activation_check_proc_0d_func_1928832234(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_928764846(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("b71fe963-6377-2332-9ac2-3be8ed673d93");

}

void _activation_check_proc_0d_func_109440676(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0d_func_224034024(_activatnvar_confusing_LLUUID_0);
	_activation_check_proc_0d_func_1668545630(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_1742855804();
}

void _activation_check_proc_0d_func_1668545630(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0d_func_661263202(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_4, U8& _activatnvar_t1, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_chararray_4[0xb] ^= _activatnvar_confusing_LLUUID_2.mData[0xb];

	/* inline */ _activation_check_proc_0d_func_407594203(_activatnvar_confusing_U8_6, _activatnvar_lace, _activatnvar_fscked, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0d_func_298080534(_activatnvar_confusing_char_4, _activatnvar_confusing_bool_c, _activatnvar_t1);
}

void _activation_check_proc_0d_func_1129536208(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0d_func_1597977345(LLUUID& _activatnvar_so, U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
}

void _activation_check_proc_0d_func_843312135(LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_6, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_6.mData[0xb] *= _activatnvar_confusing_LLUUID_9.mData[0x8];

	if(_activatnvar_confusing_LLUUID_d.mData[0xf] == _activatnvar_confusing_char_f) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_0d_func_475665508(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_0d_func_560033791(bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_8)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_char_1 >>= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0d_func_1637770179(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_7[0x3] &= _activatnvar_secret.mData[0x2];

}

void _activation_check_proc_0d_func_223462315(LLUUID& _activatnvar_secret, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

	_activation_check_proc_0d_func_1637770179(_activatnvar_confusing_chararray_7, _activatnvar_secret);
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
