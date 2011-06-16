// <edit> TESTZONE

#include "llviewerprecompiledheaders.h"
#include "llactivation0e.h"
#include "llpanellogin.h"
#include "llviewercontrol.h" // gSavedSettings
#include "llviewernetwork.h" // gMACAddress
#include "llagent.h" // gAgent

#pragma warning(push)
#pragma warning(disable:4748)
#pragma optimize("", off)




// definitions 0e

void _activation_check_proc_0e_func_154634609(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1013949643(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_524884826(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_1528758893(_activatnvar_generic_iterator);
	_activation_check_proc_0e_func_1013949643(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_0e_func_1528758893(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_2147355616(LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1, int& _activatnvar_generic_iterator, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_0e_func_878656310(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_0e_func_878656310(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0e_func_1650388579(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_531633336(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_0e_func_217303387(LLUUID& _activatnvar_secret, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_5 = _activatnvar_secret.mData[0xf];

	_activatnvar_t0 = _activatnvar_combined_id.mData[3];
}

void _activation_check_proc_0e_func_1037658178(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_5, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_b, LLUUID& _activatnvar_secret, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_b = true;

	_activation_check_proc_0e_func_217303387(_activatnvar_secret, _activatnvar_t0, _activatnvar_confusing_U8_5, _activatnvar_combined_id);
	_activation_check_proc_0e_func_803021898(_activatnvar_confusing_char_f, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_0e_func_803021898(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_char_f >>= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_0e_func_1950791536(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_generic_iterator++;
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_0e_func_1672716700(_activatnvar_confusing_int_e);
	_activation_check_proc_0e_func_846047081(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_LLUUID_e);
	_activation_check_proc_0e_func_810821600(_activatnvar_generic_iterator, _activatnvar_section2, _activatnvar_secret);
}

void _activation_check_proc_0e_func_810821600(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_846047081(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_0 = _activatnvar_confusing_LLUUID_e;

}

void _activation_check_proc_0e_func_1672716700(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0e_func_2013492250(U8& _activatnvar_t1, U8& _activatnvar_pos, LLUUID& _activatnvar_so)
{
	_activatnvar_t1 = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
}

void _activation_check_proc_0e_func_709218895(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("32130389-2fba-c735-7768-b4339d82fc29");

	_activation_check_proc_0e_func_1900777995(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_3);
}

void _activation_check_proc_0e_func_1900777995(LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 |= _activatnvar_confusing_LLUUID_c.mData[0xe];

}

void _activation_check_proc_0e_func_1327846771()
{
	
}

void _activation_check_proc_0e_func_1696034782(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_0;

}

void _activation_check_proc_0e_func_1794178128(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_section2;

}

void _activation_check_proc_0e_func_2131115612(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_char_e = 0x4;

	_activation_check_proc_0e_func_1794178128(_activatnvar_section2, _activatnvar_confusing_LLUUID_6);
}

void _activation_check_proc_0e_func_13617475(char& _activatnvar_confusing_char_4, U8& _activatnvar_t1)
{
	
	/* inline */ _activation_check_proc_0e_func_159869426(_activatnvar_t1, _activatnvar_confusing_char_4);
}

void _activation_check_proc_0e_func_921565355(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_0e_func_1185680495(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = LLUUID("04203f2d-6418-ace6-1520-755435b59dc0");

	_activation_check_proc_0e_func_1923292780(_activatnvar_confusing_int_2);
}

void _activation_check_proc_0e_func_1923292780(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0e_func_752901041(char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8++;

}

void _activation_check_proc_0e_func_2058326550(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0e_func_485560425(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_0[0xd] ^= _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_0e_func_1691628387(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_0, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_U8_2 >>= 0x7;

	_activation_check_proc_0e_func_485560425(_activatnvar_confusing_chararray_0, _activatnvar_confusing_chararray_f);
}

void _activation_check_proc_0e_func_1518408059(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0e_func_1605623644(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_4.mData[0xd] += _activatnvar_section2.mData[0xf];

}

void _activation_check_proc_0e_func_470691690(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_238657427(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_9.mData[0xf];

	/* inline */ _activation_check_proc_0e_func_560221694(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0e_func_463865609(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_LLUUID_a.mData[0x9] = _activatnvar_confusing_chararray_f[0xd];

	_activation_check_proc_0e_func_406128562(_activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_0e_func_959029327(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0e_func_406128562(LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = LLUUID("32071955-cf50-9635-a871-8c96630f6198");

}

void _activation_check_proc_0e_func_565436589(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_846178384(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_b, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	if(_activatnvar_confusing_LLUUID_f.mData[0xe] == _activatnvar_confusing_U8_b) _activatnvar_confusing_bool_b = false;

}

void _activation_check_proc_0e_func_990216807(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_379074537(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0e_func_204433228(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c |= 0x9;

	/* inline */ _activation_check_proc_0e_func_2101751019(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_LLUUID_8);
}

void _activation_check_proc_0e_func_1468976381(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1184742074(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_0e_func_1436834566(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_chararray_5[0xe] += _activatnvar_confusing_LLUUID_f.mData[0x4];

}

void _activation_check_proc_0e_func_2129879010(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[8];
	_activation_check_proc_0e_func_6731688(_activatnvar_pos);
}

void _activation_check_proc_0e_func_6731688(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0e_func_1527895901(unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f *= _activatnvar_confusing_chararray_0[0x1];

}

void _activation_check_proc_0e_func_1040021676(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x0] |= _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_0e_func_1544049245(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[11];
	_activation_check_proc_0e_func_1040021676(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_LLUUID_d);
}

void _activation_check_proc_0e_func_1967407784(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_c ^= _activatnvar_section2;

	/* inline */ _activation_check_proc_0e_func_1198591022(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_7);
}

void _activation_check_proc_0e_func_1642438380(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0xf] *= _activatnvar_confusing_chararray_d[0x8];

}

void _activation_check_proc_0e_func_1049154569(U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_b)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_U8_b &= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_0e_func_521363891(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0e_func_1201434608(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_419820969(int& _activatnvar_confusing_int_2, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 <<= _activatnvar_generic_iterator;

	/* inline */ _activation_check_proc_0e_func_1479369979(_activatnvar_confusing_int_2);
}

void _activation_check_proc_0e_func_475911952(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[15] = _activatnvar_name_digest[15];
}

void _activation_check_proc_0e_func_2072564653(char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1++;

}

void _activation_check_proc_0e_func_548672965(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("b14851f2-60b1-c70b-372b-da3635c4e93c");

}

void _activation_check_proc_0e_func_421779712(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0e_func_1904305863(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_2);
	_activation_check_proc_0e_func_799309839(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_0e_func_799309839(LLUUID& _activatnvar_confusing_LLUUID_4, bool& _activatnvar_confusing_bool_b)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x5] == 0x3) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0e_func_1904305863(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xc] *= _activatnvar_confusing_LLUUID_1.mData[0x0];

}

void _activation_check_proc_0e_func_672082777(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_0e_func_207384597(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f ^= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0e_func_252573049(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0x9] = _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_0e_func_99421188(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_7, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_7++;

	/* inline */ _activation_check_proc_0e_func_926081288(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_4);
	/* inline */ _activation_check_proc_0e_func_131312230(_activatnvar_generic_iterator, _activatnvar_combined_id, _activatnvar_mac_digest);
}

void _activation_check_proc_0e_func_1041920719(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1457212761(U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2++;

}

void _activation_check_proc_0e_func_1677276476(char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 ^= 0xa;

}

void _activation_check_proc_0e_func_1411790897(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_d)
{
	if(! _activatnvar_confusing_bool_d) _activatnvar_confusing_char_e <<= _activatnvar_confusing_char_0;

}

void _activation_check_proc_0e_func_745074266(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_a, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_e)
{
	_activatnvar_confusing_LLUUID_0.mData[0x0] *= _activatnvar_confusing_chararray_a[0x2];

	/* inline */ _activation_check_proc_0e_func_1509209534(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_d);
	/* inline */ _activation_check_proc_0e_func_1938519052(_activatnvar_confusing_LLUUID_a, _activatnvar_ser_digest);
	_activation_check_proc_0e_func_187367158(_activatnvar_confusing_LLUUID_2, _activatnvar_generic_iterator, _activatnvar_confusing_chararray_6);
	_activation_check_proc_0e_func_1411790897(_activatnvar_confusing_char_0, _activatnvar_confusing_char_e, _activatnvar_confusing_bool_d);
}

void _activation_check_proc_0e_func_187367158(LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0xd] = _activatnvar_confusing_LLUUID_2.mData[0x2];

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_174463270(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_c <<= 0xf;

	_activation_check_proc_0e_func_343782333(_activatnvar_confusing_int_8);
}

void _activation_check_proc_0e_func_343782333(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_0e_func_1658389631(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_7)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0e_func_1985897115(std::string& _activatnvar_fullname, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5 = new LLMD5((unsigned char*)_activatnvar_fullname.c_str());
}

void _activation_check_proc_0e_func_1459997290(LLMD5*& _activatnvar_nmd5, std::string& _activatnvar_fullname, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("c559f439-6287-5998-6937-154386df98d1");

	_activation_check_proc_0e_func_1985897115(_activatnvar_fullname, _activatnvar_nmd5);
}

void _activation_check_proc_0e_func_33444930(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x4] += _activatnvar_confusing_LLUUID_c.mData[0x0];

}

void _activation_check_proc_0e_func_1498526696(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_0e_func_615380492(bool& _activatnvar_confusing_bool_8, U8& _activatnvar_confusing_U8_0, LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0xf] = _activatnvar_confusing_LLUUID_b.mData[0x8];

	/* inline */ _activation_check_proc_0e_func_1922077773(_activatnvar_confusing_bool_8, _activatnvar_confusing_U8_0);
}

void _activation_check_proc_0e_func_1570755239(char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 += _activatnvar_confusing_char_9;

}

void _activation_check_proc_0e_func_334962868(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_c, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_so, bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
	_activation_check_proc_0e_func_1570755239(_activatnvar_confusing_char_9, _activatnvar_confusing_char_5);
	/* inline */ _activation_check_proc_0e_func_1325405669(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_c, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_0e_func_1487934023(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("8a4d7edb-ceb9-94bd-e480-03df601fe3ae");

}

void _activation_check_proc_0e_func_200533166(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_c;

}

void _activation_check_proc_0e_func_1692638792(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0x5] >>= _activatnvar_confusing_LLUUID_5.mData[0xb];

}

void _activation_check_proc_0e_func_1180176864(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x5] *= _activatnvar_confusing_LLUUID_5.mData[0xf];

}

void _activation_check_proc_0e_func_2115423911(int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x5] <<= _activatnvar_confusing_chararray_5[0x2];

	/* inline */ _activation_check_proc_0e_func_1406059527(_activatnvar_confusing_int_f);
}

void _activation_check_proc_0e_func_1659973593(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0e_func_646481171(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_7 <<= _activatnvar_confusing_int_d;

}

void _activation_check_proc_0e_func_1928549281(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_a, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_7++;

	/* inline */ _activation_check_proc_0e_func_307874510(_activatnvar_confusing_int_9, _activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_0e_func_1481332126(_activatnvar_confusing_int_8);
	_activation_check_proc_0e_func_672146499(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_672146499(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_180268486(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0e_func_1099308024(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0e_func_678386933(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_8 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_0e_func_1697789664(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1613771919(LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_473493968(char& _activatnvar_confusing_char_b, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0e_func_710411296(_activatnvar_combined_id, _activatnvar_confusing_char_b);
}

void _activation_check_proc_0e_func_710411296(LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b |= _activatnvar_combined_id.mData[0x1];

}

void _activation_check_proc_0e_func_360662724(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_chararray_9[0x5] |= _activatnvar_ser_digest[0xa];

}

void _activation_check_proc_0e_func_247868544(unsigned char* _activatnvar_confusing_chararray_5, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_c;

	_activation_check_proc_0e_func_672111188(_activatnvar_confusing_chararray_5, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_0e_func_2104112818(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_672111188(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_5[0x8] |= _activatnvar_mac_digest[0x6];

}

void _activation_check_proc_0e_func_1411488171(LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_d.mData[0xd];

}

void _activation_check_proc_0e_func_128301710(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x6] *= _activatnvar_ser_digest[0xa];

}

void _activation_check_proc_0e_func_1276699950(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_confusing_LLUUID_d, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_f, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_f;

	_activation_check_proc_0e_func_993262313(_activatnvar_confusing_LLUUID_6);
	_activation_check_proc_0e_func_1411488171(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_U8_1);
	/* inline */ _activation_check_proc_0e_func_552478368(_activatnvar_confusing_int_9);
	_activation_check_proc_0e_func_128301710(_activatnvar_ser_digest, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0e_func_993262313(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("f785e4a3-513e-8d8c-4963-1215fa8f5425");

}

void _activation_check_proc_0e_func_87667375(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 <<= 0x6;

}

void _activation_check_proc_0e_func_778465978(LLUUID& _activatnvar_confusing_LLUUID_e, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("d0ba894a-551d-2a9b-225e-e5f293970e41");

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_862321282(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_3, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_4, bool& _activatnvar_confusing_bool_a, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x5] |= _activatnvar_confusing_chararray_4[0x2];

	_activation_check_proc_0e_func_1849876338();
	/* inline */ _activation_check_proc_0e_func_1156267255();
	_activation_check_proc_0e_func_786526878(_activatnvar_t0);
	_activation_check_proc_0e_func_74825507(_activatnvar_confusing_LLUUID_d, _activatnvar_confusing_int_c, _activatnvar_confusing_int_4);
	_activation_check_proc_0e_func_880802213(_activatnvar_confusing_bool_a, _activatnvar_t0, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_0e_func_1849876338()
{
	
}

void _activation_check_proc_0e_func_74825507(LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("7e45cc57-52b9-13fe-f25a-82ff92ddefd3");

	_activatnvar_confusing_int_c += _activatnvar_confusing_int_4;

}

void _activation_check_proc_0e_func_880802213(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_3)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_U8_3 += _activatnvar_t0;

}

void _activation_check_proc_0e_func_786526878(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0e_func_1887121150(char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = 0xd;

}

void _activation_check_proc_0e_func_628074712(LLUUID& _activatnvar_section2, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0e_func_1242556247(_activatnvar_secret, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_0e_func_1887121150(_activatnvar_confusing_char_7);
}

void _activation_check_proc_0e_func_1174756458(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a = _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_0e_func_1527011895(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_3[0x8] |= _activatnvar_confusing_LLUUID_6.mData[0xf];

}

void _activation_check_proc_0e_func_1535234347(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 |= _activatnvar_confusing_chararray_c[0xf];

}

void _activation_check_proc_0e_func_497012017(U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_t1, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_e, U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_t1 -= _activatnvar_so.mData[_activatnvar_t0];
	/* inline */ _activation_check_proc_0e_func_1097118507(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_e);
	_activation_check_proc_0e_func_1535234347(_activatnvar_confusing_chararray_c, _activatnvar_confusing_U8_5);
}

void _activation_check_proc_0e_func_444538318(std::string& _activatnvar_fullname, unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0x7] >>= _activatnvar_confusing_chararray_d[0x0];

	/* inline */ _activation_check_proc_0e_func_1812966703(_activatnvar_fullname);
}

void _activation_check_proc_0e_func_1721997954(U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e &= 0xa;

}

void _activation_check_proc_0e_func_378812189(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_602258814(LLUUID& _activatnvar_confusing_LLUUID_7, U8& _activatnvar_confusing_U8_a, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0xf] != _activatnvar_confusing_U8_a) _activatnvar_confusing_bool_f = true;

	/* inline */ _activation_check_proc_0e_func_1763826094(_activatnvar_confusing_bool_f, _activatnvar_generic_bool_0, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0e_func_148937957(bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0e_func_1674099683(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so)
{
	_activatnvar_section2 = LLUUID(_activatnvar_so);
}

void _activation_check_proc_0e_func_2139725111(int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_c >>= _activatnvar_confusing_int_9;

}

void _activation_check_proc_0e_func_643342050(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0e_func_1934521985(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0e_func_1559876699(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_code)
{
	_activatnvar_confusing_LLUUID_7.mData[0x3] >>= _activatnvar_code.mData[0xa];

}

void _activation_check_proc_0e_func_1590056950(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

}

void _activation_check_proc_0e_func_702666253(LLUUID& _activatnvar_combined_id, int& _activatnvar_confusing_int_7, U8& _activatnvar_t0)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[5];
	_activation_check_proc_0e_func_1590056950(_activatnvar_confusing_int_7);
}

void _activation_check_proc_0e_func_892838316(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_t0)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x2] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_b = true;

	_activation_check_proc_0e_func_1901102459(_activatnvar_t0);
}

void _activation_check_proc_0e_func_1901102459(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0e_func_611866670(bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_7)
{
	if(! _activatnvar_confusing_bool_b) _activatnvar_confusing_U8_7 ^= 0xc;

}

void _activation_check_proc_0e_func_1364480300(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0e_func_361121104(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[11] = _activatnvar_name_digest[11];
}

void _activation_check_proc_0e_func_196684808(bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest, int& _activatnvar_confusing_int_8, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_int_8++;

	if(  _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_d += 0xd;

	_activation_check_proc_0e_func_361121104(_activatnvar_name_digest, _activatnvar_combined_id);
	_activation_check_proc_0e_func_634264858(_activatnvar_name_digest, _activatnvar_combined_id);
	/* inline */ _activation_check_proc_0e_func_1198354851(_activatnvar_name_digest, _activatnvar_combined_id);
}

void _activation_check_proc_0e_func_634264858(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[12] = _activatnvar_name_digest[12];
}

void _activation_check_proc_0e_func_186108006(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_5)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_2 ^= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_0e_func_2100901704(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_7) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_0e_func_345760928(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("a8087937-27d7-3a30-8ab6-8906899d39bc");

	_activation_check_proc_0e_func_1969544754(_activatnvar_confusing_U8_f, _activatnvar_confusing_LLUUID_f);
}

void _activation_check_proc_0e_func_1969544754(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_LLUUID_f.mData[0xe];

}

void _activation_check_proc_0e_func_1978776670(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0e_func_1080171290(bool& _activatnvar_doaccount, char& _activatnvar_feat, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_5, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	if(_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat) _activatnvar_doaccount = true;
	/* inline */ _activation_check_proc_0e_func_1905414385(_activatnvar_confusing_LLUUID_c);
	_activation_check_proc_0e_func_1978776670(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0e_func_1860198818(LLUUID& _activatnvar_confusing_LLUUID_7, int& _activatnvar_confusing_int_0, char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_LLUUID_7.mData[0xe];

	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_0e_func_154132350(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_2, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_U8_b ^= 0x7;

	_activation_check_proc_0e_func_243020790(_activatnvar_confusing_bool_b, _activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_a);
	_activation_check_proc_0e_func_1219746892(_activatnvar_confusing_chararray_8, _activatnvar_confusing_chararray_2);
	/* inline */ _activation_check_proc_0e_func_829514644(_activatnvar_confusing_LLUUID_1, _activatnvar_section1);
}

void _activation_check_proc_0e_func_1219746892(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0x1] &= _activatnvar_confusing_chararray_8[0x3];

}

void _activation_check_proc_0e_func_243020790(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0xf] != _activatnvar_confusing_char_d) _activatnvar_confusing_bool_b = _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0e_func_2123480699(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_f &= 0x1;

}

void _activation_check_proc_0e_func_2068039663(U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_d, U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_pos] *= _activatnvar_so.mData[_activatnvar_t0];
	/* inline */ _activation_check_proc_0e_func_2103963369(_activatnvar_confusing_U8_b, _activatnvar_confusing_U8_d);
}

void _activation_check_proc_0e_func_1818191594(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("9eab567f-0bc9-3fc2-5592-8292e1dcd1d3");

}

void _activation_check_proc_0e_func_1625005175(unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xc] >>= _activatnvar_confusing_chararray_8[0x7];

}

void _activation_check_proc_0e_func_367198076(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0e_func_330453645(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_d, U8& _activatnvar_t0)
{
	_activatnvar_confusing_LLUUID_d.mData[0xc] ^= _activatnvar_confusing_chararray_6[0x4];

	_activation_check_proc_0e_func_367198076(_activatnvar_t0);
}

void _activation_check_proc_0e_func_1748342330(U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b++;

}

void _activation_check_proc_0e_func_1142818683(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c += 0x4;

}

void _activation_check_proc_0e_func_564594511()
{
	
}

void _activation_check_proc_0e_func_729982434(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_564594511();
}

void _activation_check_proc_0e_func_1756371066(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_0e_func_1627038093();
}

void _activation_check_proc_0e_func_1550558647(char& _activatnvar_confusing_char_2, U8& _activatnvar_t0, U8& _activatnvar_pos, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(~_activatnvar_so.mData[_activatnvar_pos]);
	_activation_check_proc_0e_func_94590634(_activatnvar_combined_id, _activatnvar_pos);
	_activation_check_proc_0e_func_222675179(_activatnvar_confusing_char_2, _activatnvar_confusing_char_8);
	_activation_check_proc_0e_func_512204624(_activatnvar_pos);
}

void _activation_check_proc_0e_func_222675179(char& _activatnvar_confusing_char_2, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_2 &= _activatnvar_confusing_char_8;

}

void _activation_check_proc_0e_func_512204624(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0e_func_94590634(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[14];
}

void _activation_check_proc_0e_func_1583681549(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_5.mData[0x1] >>= _activatnvar_confusing_LLUUID_1.mData[0xf];

}

void _activation_check_proc_0e_func_1817938488(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("3ee45914-4ab2-5cea-e4b5-1eedd877deac");

	_activation_check_proc_0e_func_1583681549(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0e_func_1830039027(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d |= 0xe;

}

void _activation_check_proc_0e_func_665709858(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_6[0x0] |= _activatnvar_confusing_chararray_b[0x0];

}

void _activation_check_proc_0e_func_1938778668(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_confusing_chararray_1[0x2] = _activatnvar_confusing_chararray_3[0x9];

}

void _activation_check_proc_0e_func_1152188208(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_d;

	/* inline */ _activation_check_proc_0e_func_1063324138(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0e_func_248379067(U8& _activatnvar_pos, LLUUID& _activatnvar_so, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_c, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x4] &= _activatnvar_confusing_LLUUID_c.mData[0x3];

	_activation_check_proc_0e_func_1923376914(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
}

void _activation_check_proc_0e_func_1923376914(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_0e_func_483512431(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_so, bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_doaccount;

	/* inline */ _activation_check_proc_0e_func_1980030665(_activatnvar_section2, _activatnvar_so);
}

void _activation_check_proc_0e_func_821473068()
{
	
}

void _activation_check_proc_0e_func_1931417750(LLUUID& _activatnvar_confusing_LLUUID_8, int& _activatnvar_confusing_int_8, unsigned char* _activatnvar_mac_digest, int& _activatnvar_confusing_int_6, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator)
{
	
	/* inline */ _activation_check_proc_0e_func_1444248237(_activatnvar_confusing_LLUUID_8, _activatnvar_code, _activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
	_activation_check_proc_0e_func_821473068();
	/* inline */ _activation_check_proc_0e_func_1061994863(_activatnvar_confusing_int_6, _activatnvar_confusing_int_8);
}

void _activation_check_proc_0e_func_2046731528(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0e_func_86218054(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_bool_4);
}

void _activation_check_proc_0e_func_86218054(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0xb] != 0xb) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_0e_func_543769034(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("315cadef-85f8-3e04-4bd8-64437f2b7505");

}

void _activation_check_proc_0e_func_1500009110(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xe] >>= _activatnvar_name_digest[0x1];

}

void _activation_check_proc_0e_func_476650849(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 |= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_0e_func_1956413102(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_a;

}

void _activation_check_proc_0e_func_299418521()
{
	
}

void _activation_check_proc_0e_func_1929647408(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= _activatnvar_confusing_int_a;

}

void _activation_check_proc_0e_func_1821403627(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_6, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0e_func_1929647408(_activatnvar_confusing_int_a, _activatnvar_confusing_int_6);
	/* inline */ _activation_check_proc_0e_func_1652546230(_activatnvar_secret, _activatnvar_confusing_LLUUID_3);
	_activation_check_proc_0e_func_299418521();
}

void _activation_check_proc_0e_func_58776876(int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

}

void _activation_check_proc_0e_func_992273772(bool& _activatnvar_confusing_bool_1, int& _activatnvar_confusing_int_7)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_1 = false;

	_activation_check_proc_0e_func_58776876(_activatnvar_confusing_int_7);
}

void _activation_check_proc_0e_func_619908362(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0e_func_1388237184(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_chararray_7[0x0] += _activatnvar_confusing_LLUUID_4.mData[0x3];

	_activation_check_proc_0e_func_573017866(_activatnvar_lace, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0e_func_573017866(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_lace;

}

void _activation_check_proc_0e_func_1476406765(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0e_func_321997908(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_0e_func_321997908(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_f[0xf] |= _activatnvar_confusing_chararray_4[0xd];

}

void _activation_check_proc_0e_func_186048932(U8& _activatnvar_confusing_U8_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_U8_b += 0x7;

	/* inline */ _activation_check_proc_0e_func_1757949996(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_1412547754(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_c, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_char_c &= _activatnvar_lace.mData[0xa];

	/* inline */ _activation_check_proc_0e_func_574545273(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0e_func_1740796847(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0e_func_1539697897(LLMD5& _activatnvar_smd5, DWORD& _activatnvar_serial)
{
	
	_activation_check_proc_0e_func_1016894819(_activatnvar_serial, _activatnvar_smd5);
}

void _activation_check_proc_0e_func_1016894819(DWORD& _activatnvar_serial, LLMD5& _activatnvar_smd5)
{
	_activatnvar_smd5.update((unsigned char*)&_activatnvar_serial, sizeof(DWORD));
}

void _activation_check_proc_0e_func_1408763710(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0e_func_1877642170(U8& _activatnvar_confusing_U8_0, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_U8_0 = _activatnvar_confusing_chararray_1[0x9];

}

void _activation_check_proc_0e_func_1929457531()
{
	
}

void _activation_check_proc_0e_func_1734185725(U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_U8_e <<= _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_0e_func_1398301888(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0e_func_343678474(int& _activatnvar_confusing_int_d, U8& _activatnvar_confusing_U8_e, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7++;

	_activation_check_proc_0e_func_1734185725(_activatnvar_confusing_U8_e, _activatnvar_confusing_chararray_3);
	_activation_check_proc_0e_func_1398301888(_activatnvar_confusing_int_d);
	_activation_check_proc_0e_func_1929457531();
}

void _activation_check_proc_0e_func_837067413(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_5 = true;

	/* inline */ _activation_check_proc_0e_func_1276489069(_activatnvar_code, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0e_func_400699851(_activatnvar_confusing_LLUUID_9, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_0e_func_1913456361(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_a *= _activatnvar_confusing_int_9;

}

void _activation_check_proc_0e_func_1764868973(char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_char_0 >>= _activatnvar_confusing_U8_5;

}

void _activation_check_proc_0e_func_1631428014(char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_0, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_5, bool& _activatnvar_confusing_bool_a, char& _activatnvar_confusing_char_6, char& _activatnvar_confusing_char_4)
{
	if(! _activatnvar_confusing_bool_a) _activatnvar_confusing_char_6 ^= _activatnvar_confusing_char_4;

	/* inline */ _activation_check_proc_0e_func_1948908405(_activatnvar_confusing_char_f);
	_activation_check_proc_0e_func_1764868973(_activatnvar_confusing_char_0, _activatnvar_confusing_U8_5, _activatnvar_confusing_bool_1);
	_activation_check_proc_0e_func_1309694155(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
	_activation_check_proc_0e_func_1778188923(_activatnvar_generic_bool_0);
}

void _activation_check_proc_0e_func_1778188923(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_0e_func_1309694155(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0e_func_1488971869(char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9++;

}

void _activation_check_proc_0e_func_1197506867(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 ^= 0xb;

}

void _activation_check_proc_0e_func_1869733318()
{
	
}

void _activation_check_proc_0e_func_1890081007(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1705163331(char& _activatnvar_confusing_char_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_1671555422(_activatnvar_confusing_char_3);
	_activation_check_proc_0e_func_2118774445(_activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0e_func_1671555422(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_0e_func_2118774445(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("5c49a6aa-c878-bd3e-0c97-75006e5db343");

}

void _activation_check_proc_0e_func_503407330(U8& _activatnvar_confusing_U8_5, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_5 += _activatnvar_confusing_chararray_a[0xb];

}

void _activation_check_proc_0e_func_612476874(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_5, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_ser_digest, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_871448050(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_0);
	/* inline */ _activation_check_proc_0e_func_788646448(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_0e_func_503407330(_activatnvar_confusing_U8_5, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_0e_func_442701858(_activatnvar_confusing_U8_9, _activatnvar_confusing_bool_8, _activatnvar_confusing_char_7);
}

void _activation_check_proc_0e_func_871448050(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_0e_func_1001866193(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0e_func_1480032731(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_6, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

	/* inline */ _activation_check_proc_0e_func_2031262464(_activatnvar_confusing_char_6, _activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_0e_func_1001866193(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_0e_func_1274193502(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x3] *= _activatnvar_confusing_LLUUID_0.mData[0x0];

}

void _activation_check_proc_0e_func_670431949(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0e_func_171378401(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f++;

}

void _activation_check_proc_0e_func_1845260496(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1882337019(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_183838932(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_1882337019(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_2086800615(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c <<= _activatnvar_confusing_chararray_6[0xe];

}

void _activation_check_proc_0e_func_1494865589(U8& _activatnvar_t1, LLUUID& _activatnvar_so, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_e, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_so.mData[_activatnvar_pos] >>= _activatnvar_t0;
	/* inline */ _activation_check_proc_0e_func_1383577987(_activatnvar_t1, _activatnvar_confusing_chararray_5, _activatnvar_confusing_chararray_a);
	/* inline */ _activation_check_proc_0e_func_1981291037(_activatnvar_confusing_chararray_c, _activatnvar_confusing_chararray_d);
	_activation_check_proc_0e_func_657091110(_activatnvar_confusing_int_e);
}

void _activation_check_proc_0e_func_657091110(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0e_func_1415542778(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_code, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_7 = false;

	_activation_check_proc_0e_func_1635387541(_activatnvar_confusing_bool_8, _activatnvar_confusing_bool_a);
	/* inline */ _activation_check_proc_0e_func_710242764(_activatnvar_code, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0e_func_1635387541(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0e_func_1666700224(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0e_func_1248038529(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_6.mData[0x4] >>= _activatnvar_secret.mData[0xe];

}

void _activation_check_proc_0e_func_1382808962(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_confusing_LLUUID_b;

}

void _activation_check_proc_0e_func_159447754(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1366160504(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0e_func_1422249322(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_9, bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_f;

	if(_activatnvar_confusing_LLUUID_9.mData[0xb] != _activatnvar_confusing_char_a) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0e_func_124486342(LLUUID& _activatnvar_confusing_LLUUID_9, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_a, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_f)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("8de3fb09-6770-c755-d036-0f600621ab10");

	/* inline */ _activation_check_proc_0e_func_113639821(_activatnvar_confusing_U8_b, _activatnvar_confusing_LLUUID_8);
	_activation_check_proc_0e_func_1422249322(_activatnvar_confusing_bool_2, _activatnvar_confusing_LLUUID_9, _activatnvar_confusing_bool_f, _activatnvar_confusing_bool_b, _activatnvar_confusing_char_a);
	_activation_check_proc_0e_func_1962768339(_activatnvar_confusing_U8_a);
	/* inline */ _activation_check_proc_0e_func_527812883(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_1962768339(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a += 0x8;

}

void _activation_check_proc_0e_func_668596392(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_U8_d ^= 0x9;

	/* inline */ _activation_check_proc_0e_func_1336398507(_activatnvar_confusing_char_a, _activatnvar_lace);
}

void _activation_check_proc_0e_func_1885651292(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0e_func_1450790678(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1417396040(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_341257195(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_842617234(bool& _activatnvar_confusing_bool_5, char& _activatnvar_confusing_char_f, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_0e_func_750680285(_activatnvar_confusing_char_f);
}

void _activation_check_proc_0e_func_34470684(int& _activatnvar_confusing_int_2, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_int_2++;

	/* inline */ _activation_check_proc_0e_func_1279626268(_activatnvar_confusing_LLUUID_1, _activatnvar_section2);
}

void _activation_check_proc_0e_func_1677708034(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_0e_func_610782500(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_section1.mData[0x6];

}

void _activation_check_proc_0e_func_169574032(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_0e_func_343457540(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_confusing_LLUUID_c.mData[0xc];

}

void _activation_check_proc_0e_func_2007895604(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] = _activatnvar_fscked.mData[0x0];

	/* inline */ _activation_check_proc_0e_func_631098287(_activatnvar_combined_id, _activatnvar_confusing_chararray_e);
}

void _activation_check_proc_0e_func_31110769(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	
	_activation_check_proc_0e_func_129673749(_activatnvar_t0, _activatnvar_t1);
	/* inline */ _activation_check_proc_0e_func_1244972275(_activatnvar_t1);
}

void _activation_check_proc_0e_func_129673749(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 >>= _activatnvar_t0;
}

void _activation_check_proc_0e_func_1258757243(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0e_func_104783172(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("b2af2550-d73b-990b-4674-bb324f522b06");

}

void _activation_check_proc_0e_func_1388017945(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("a97aad99-5009-3c11-69b3-6348a5453681");

}

void _activation_check_proc_0e_func_1246060602(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_code)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_642128988()
{
	
}

void _activation_check_proc_0e_func_224929730(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x9] *= _activatnvar_lace.mData[0x3];

}

void _activation_check_proc_0e_func_1224085082(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("50615935-3301-7da2-ccbf-084ccf242cbf");

}

void _activation_check_proc_0e_func_1560825612(U8& _activatnvar_confusing_U8_f, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_U8_f &= _activatnvar_confusing_char_8;

}

void _activation_check_proc_0e_func_660001223(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3++;

}

void _activation_check_proc_0e_func_2109305991(bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_U8_b++;

	/* inline */ _activation_check_proc_0e_func_104397263(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_8, _activatnvar_confusing_bool_f);
	_activation_check_proc_0e_func_610549851(_activatnvar_confusing_int_1);
}

void _activation_check_proc_0e_func_610549851(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 &= 0xff;

}

void _activation_check_proc_0e_func_821583266(LLUUID& _activatnvar_code, U8& _activatnvar_confusing_U8_5)
{
	_activatnvar_confusing_U8_5 = _activatnvar_code.mData[0xb];

}

void _activation_check_proc_0e_func_1489097669(char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_f)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x1] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_0e_func_1546414885(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 <<= 0x9;

}

void _activation_check_proc_0e_func_159214817(unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_chararray_7[0x1] |= _activatnvar_confusing_LLUUID_5.mData[0x3];

	_activation_check_proc_0e_func_1546414885(_activatnvar_confusing_int_9);
}

void _activation_check_proc_0e_func_1848610664(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_6[0x5] &= _activatnvar_confusing_chararray_3[0x6];

}

void _activation_check_proc_0e_func_332317605(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 |= _activatnvar_confusing_int_9;

}

void _activation_check_proc_0e_func_1586917163(unsigned char* _activatnvar_confusing_chararray_4, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_7, char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_f, int& _activatnvar_confusing_int_9, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_2 *= _activatnvar_confusing_U8_f;

	_activation_check_proc_0e_func_332317605(_activatnvar_confusing_int_9, _activatnvar_confusing_int_7);
	_activation_check_proc_0e_func_28678016();
	_activation_check_proc_0e_func_678585939(_activatnvar_lace, _activatnvar_fscked);
	/* inline */ _activation_check_proc_0e_func_80611015(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0e_func_678585939(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[1] = _activatnvar_fscked.mData[1];
}

void _activation_check_proc_0e_func_28678016()
{
	
}

void _activation_check_proc_0e_func_1241698283()
{
	
}

void _activation_check_proc_0e_func_787678200(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_0e_func_506615176(bool& _activatnvar_confusing_bool_8, int& _activatnvar_confusing_int_6, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_8;

	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_0e_func_1177278297(U8& _activatnvar_confusing_U8_6, U8& _activatnvar_pos)
{
	_activatnvar_confusing_U8_6 <<= _activatnvar_pos;

}

void _activation_check_proc_0e_func_59934023(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_9 = true;

	_activation_check_proc_0e_func_1199381647(_activatnvar_ser_digest, _activatnvar_combined_id, _activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_1199381647(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_520027488(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1330039960(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1372377286(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_9;

	/* inline */ _activation_check_proc_0e_func_1891879869();
	/* inline */ _activation_check_proc_0e_func_1572296374(_activatnvar_generic_iterator);
	_activation_check_proc_0e_func_1330039960(_activatnvar_section2, _activatnvar_section1, _activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_854140035(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1073853505(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 = 0x4;

}

void _activation_check_proc_0e_func_1724947280(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 ^= _activatnvar_confusing_LLUUID_8;

}

void _activation_check_proc_0e_func_2012475658(U8& _activatnvar_t0, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f += _activatnvar_t0;

}

void _activation_check_proc_0e_func_587561503(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
	_activation_check_proc_0e_func_1367188730(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
}

void _activation_check_proc_0e_func_1367188730(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t1)
{
	_activatnvar_so.mData[_activatnvar_pos] |= _activatnvar_t1;
}

void _activation_check_proc_0e_func_1506992145(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0x9] ^= _activatnvar_confusing_chararray_0[0x5];

}

void _activation_check_proc_0e_func_374518106(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("eeeb3ef2-77a0-ac83-36e9-427ba77316dc");

}

void _activation_check_proc_0e_func_1581455921(unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xa] = _activatnvar_confusing_chararray_0[0xf];

}

void _activation_check_proc_0e_func_438801905(U8& _activatnvar_t0, LLUUID& _activatnvar_so, U8& _activatnvar_pos)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0e_func_1802101607(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
}

void _activation_check_proc_0e_func_1802101607(U8& _activatnvar_pos, U8& _activatnvar_t0, LLUUID& _activatnvar_so)
{
	_activatnvar_t0 &= 3;
	_activatnvar_so.mData[_activatnvar_pos] <<= _activatnvar_t0;
}

void _activation_check_proc_0e_func_1335038402(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_473814406(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_0e_func_2085683416(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_1 ^= _activatnvar_confusing_chararray_5[0x9];

}

void _activation_check_proc_0e_func_1679066928(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
	_activatnvar_confusing_chararray_2[0xd] >>= _activatnvar_confusing_chararray_d[0xe];

	_activatnvar_confusing_LLUUID_1.mData[0x8] >>= _activatnvar_confusing_chararray_3[0x5];

}

void _activation_check_proc_0e_func_1170200149(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[0];
}

void _activation_check_proc_0e_func_1405680204(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_0e_func_1987223212(char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_char_3++;

	_activation_check_proc_0e_func_1029825314(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_0e_func_1029825314(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("39afc16f-7f53-400c-93cc-cec8d523975b");

	_activatnvar_confusing_U8_8 &= 0xb;

}

void _activation_check_proc_0e_func_1721299846(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_0e_func_96159962(unsigned char* _activatnvar_confusing_chararray_8, U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a *= _activatnvar_confusing_chararray_8[0x1];

}

void _activation_check_proc_0e_func_1871471386(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0e_func_287457428(unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x5] ^= _activatnvar_confusing_chararray_e[0xa];

}

void _activation_check_proc_0e_func_135201765(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_e, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x2] != _activatnvar_confusing_char_e) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0e_func_1289180098(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_LLUUID_d.mData[0x4];

}

void _activation_check_proc_0e_func_813510645(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_c = _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0e_func_942006647(bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_f, char* _activatnvar_strbuf_0)
{
	_activatnvar_section2 = LLUUID((std::string)_activatnvar_strbuf_0);
	_activation_check_proc_0e_func_813510645(_activatnvar_confusing_bool_f, _activatnvar_confusing_bool_2, _activatnvar_confusing_bool_c);
}

void _activation_check_proc_0e_func_471011105(U8& _activatnvar_t1, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f <<= _activatnvar_t1;

}

void _activation_check_proc_0e_func_145503263(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1166172330(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1, int& _activatnvar_confusing_int_0)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0e_func_559458357(_activatnvar_section2, _activatnvar_generic_iterator, _activatnvar_section1);
	/* inline */ _activation_check_proc_0e_func_621663634(_activatnvar_confusing_int_0);
	/* inline */ _activation_check_proc_0e_func_2040051627(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_559458357(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_74259335(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_5 = _activatnvar_confusing_LLUUID_0.mData[0x7];

}

void _activation_check_proc_0e_func_1741366943(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= _activatnvar_confusing_int_e;

}

void _activation_check_proc_0e_func_1715008907(bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_b)
{
	_activatnvar_confusing_char_6++;

	/* inline */ _activation_check_proc_0e_func_214538235(_activatnvar_confusing_bool_7, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_0e_func_1139585114(U8& _activatnvar_pos, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0++;

	_activation_check_proc_0e_func_407418249(_activatnvar_pos);
}

void _activation_check_proc_0e_func_407418249(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0e_func_736934474(bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_0e_func_440097707(unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_chararray_7[0xd];

}

void _activation_check_proc_0e_func_1372377635(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_fscked;

}

void _activation_check_proc_0e_func_2020398698(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_fscked;

}

void _activation_check_proc_0e_func_710824668(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_section1;

}

void _activation_check_proc_0e_func_1862231278(LLUUID& _activatnvar_combined_id, U8& _activatnvar_confusing_U8_c)
{
	_activatnvar_confusing_U8_c = _activatnvar_combined_id.mData[0x8];

}

void _activation_check_proc_0e_func_1928764231(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0e_func_133505645(bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_c, char& _activatnvar_confusing_char_c)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_c *= _activatnvar_confusing_char_c;

}

void _activation_check_proc_0e_func_1477521526(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_7)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_char_2 |= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0e_func_1462225583(bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_4;

}

void _activation_check_proc_0e_func_205771128(bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_e)
{
	if(  _activatnvar_confusing_bool_a) _activatnvar_confusing_char_e *= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_0e_func_1721723462(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8++;

}

void _activation_check_proc_0e_func_1496365160(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_7 &= 0xff;

	/* inline */ _activation_check_proc_0e_func_226188558(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0e_func_2091246199(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x6] <<= _activatnvar_confusing_chararray_8[0x5];

}

void _activation_check_proc_0e_func_444542746(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[3] = _activatnvar_fscked.mData[3];
	/* inline */ _activation_check_proc_0e_func_1993701853(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_0e_func_272322892(char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_fscked)
{
	_activatnvar_confusing_char_7 &= _activatnvar_fscked.mData[0x6];

}

void _activation_check_proc_0e_func_1219585638(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_0e_func_45263899(LLUUID& _activatnvar_confusing_LLUUID_b, U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_b.mData[0x8] *= _activatnvar_confusing_LLUUID_5.mData[0x8];

	_activation_check_proc_0e_func_1219585638(_activatnvar_confusing_U8_4);
}

void _activation_check_proc_0e_func_1102889994(unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0xc] &= _activatnvar_confusing_chararray_e[0x5];

}

void _activation_check_proc_0e_func_1927749467(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b += 0x2;

}

void _activation_check_proc_0e_func_425696524(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_8, U8& _activatnvar_pos)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_0e_func_2003053647(_activatnvar_pos, _activatnvar_t0, _activatnvar_so);
	_activation_check_proc_0e_func_1425747538(_activatnvar_confusing_bool_0, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_0e_func_911522430(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_a, _activatnvar_confusing_char_8);
}

void _activation_check_proc_0e_func_1425747538(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] != 0x6) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_0e_func_1240352842(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_f, char& _activatnvar_confusing_char_a)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_a *= _activatnvar_confusing_char_f;

}

void _activation_check_proc_0e_func_1674411493(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_7, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_2057611352(_activatnvar_confusing_U8_8, _activatnvar_confusing_char_7);
}

void _activation_check_proc_0e_func_2057611352(U8& _activatnvar_confusing_U8_8, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 |= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0e_func_723959377()
{
	
}

void _activation_check_proc_0e_func_1804503068(LLUUID& _activatnvar_confusing_LLUUID_7, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_secret;

	/* inline */ _activation_check_proc_0e_func_55989133(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_7);
	/* inline */ _activation_check_proc_0e_func_759877534(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_0e_func_1822221041(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0e_func_545636680(LLUUID& _activatnvar_confusing_LLUUID_3, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xe] >>= _activatnvar_confusing_LLUUID_3.mData[0x1];

}

void _activation_check_proc_0e_func_1360343137(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_1, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_1, unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_545636680(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_0e_func_1136533598(_activatnvar_confusing_LLUUID_4, _activatnvar_confusing_char_2, _activatnvar_confusing_bool_1);
}

void _activation_check_proc_0e_func_1568589607(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_0e_func_1209328210(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("61a74c75-8c41-adab-7a77-355c71c5abb9");

}

void _activation_check_proc_0e_func_1656726338(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x9] &= _activatnvar_confusing_chararray_2[0xd];

}

void _activation_check_proc_0e_func_623811382(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0xc] |= _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_0e_func_1433359075(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_9 *= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_0e_func_984630117(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_a)
{
	
	_activation_check_proc_0e_func_1433359075(_activatnvar_confusing_U8_9, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_0e_func_316362309(char& _activatnvar_confusing_char_4, bool& _activatnvar_confusing_bool_3)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_4 >>= 0x9;

}

void _activation_check_proc_0e_func_1850440526(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_c &= _activatnvar_confusing_LLUUID_6.mData[0x0];

}

void _activation_check_proc_0e_func_2075777008(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] ^= _activatnvar_so.mData[0x8];

}

void _activation_check_proc_0e_func_1274694690(char& _activatnvar_confusing_char_a, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_char_a &= _activatnvar_confusing_U8_2;

}

void _activation_check_proc_0e_func_467539650(U8& _activatnvar_confusing_U8_5, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_combined_id, char& _activatnvar_confusing_char_f)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[3];
	/* inline */ _activation_check_proc_0e_func_99700972(_activatnvar_confusing_char_f, _activatnvar_confusing_U8_5, _activatnvar_confusing_bool_f);
}

void _activation_check_proc_0e_func_381685270(char& _activatnvar_confusing_char_2, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_confusing_bool_7) _activatnvar_confusing_char_2 ^= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_0e_func_714535937(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_4)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_0e_func_1944823428(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0x3] ^= _activatnvar_secret.mData[0xe];

}

void _activation_check_proc_0e_func_886613539()
{
	
}

void _activation_check_proc_0e_func_518396443(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d ^= 0x3;

}

void _activation_check_proc_0e_func_175164679(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_368776105(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0e_func_1233125325(int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3++;

	_activation_check_proc_0e_func_1334193505(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_1334193505(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1081111518(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1912756721(bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_b &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0e_func_854858523(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9.mData[0x5] *= _activatnvar_confusing_LLUUID_c.mData[0x1];

}

void _activation_check_proc_0e_func_551336614(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_e, bool& _activatnvar_confusing_bool_8)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x4] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_8 = false;

}

void _activation_check_proc_0e_func_1679339773(char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d++;

}

void _activation_check_proc_0e_func_1793611933(U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 ^= 0xd;

}

void _activation_check_proc_0e_func_1493779941(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_d, U8& _activatnvar_confusing_U8_9, U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x7] <<= _activatnvar_confusing_chararray_9[0x6];

	_activation_check_proc_0e_func_1679339773(_activatnvar_confusing_char_d);
	_activation_check_proc_0e_func_551336614(_activatnvar_confusing_U8_4, _activatnvar_confusing_LLUUID_e, _activatnvar_confusing_bool_8);
	_activation_check_proc_0e_func_1793611933(_activatnvar_confusing_U8_9);
}

void _activation_check_proc_0e_func_1147863048(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_0e_func_1921763982(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c++;

}

void _activation_check_proc_0e_func_2073017019(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_616874391(LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	if (_activatnvar_so.mData[_activatnvar_t0] == 0) _activatnvar_so.mData[_activatnvar_t0]++;
}

void _activation_check_proc_0e_func_467847105(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_f &= _activatnvar_confusing_LLUUID_f.mData[0xd];

}

void _activation_check_proc_0e_func_1779684702(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_1 |= _activatnvar_confusing_U8_3;

}

void _activation_check_proc_0e_func_598290181(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_d[0xc] &= _activatnvar_confusing_chararray_8[0xc];

}

void _activation_check_proc_0e_func_1888676029(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_char_f = _activatnvar_confusing_LLUUID_f.mData[0x8];

}

void _activation_check_proc_0e_func_1111672543(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_b.mData[0xc] *= _activatnvar_confusing_LLUUID_9.mData[0x9];

	_activation_check_proc_0e_func_1888676029(_activatnvar_confusing_char_f, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_0e_func_598290181(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_8);
}

void _activation_check_proc_0e_func_1920968327(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 *= _activatnvar_confusing_int_7;

}

void _activation_check_proc_0e_func_477539880(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 ^= _activatnvar_confusing_int_7;

}

void _activation_check_proc_0e_func_232989864(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_0e_func_1318042222(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_b)
{
	if(! _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_b = true;

}

void _activation_check_proc_0e_func_300029464(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_3[0xb] >>= _activatnvar_mac_digest[0xc];

}

void _activation_check_proc_0e_func_169087818()
{
	
}

void _activation_check_proc_0e_func_2095849159(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_473133652(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_0e_func_1587141510(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_5, U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_bool_8 = false;

	_activation_check_proc_0e_func_1298293237(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_3);
	_activation_check_proc_0e_func_687671039(_activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_0);
	_activation_check_proc_0e_func_474467423(_activatnvar_confusing_U8_f, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_0e_func_1298293237(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_5.mData[0x3] = _activatnvar_confusing_chararray_3[0xd];

}

void _activation_check_proc_0e_func_687671039(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_char_5 |= _activatnvar_confusing_LLUUID_0.mData[0x4];

}

void _activation_check_proc_0e_func_474467423(U8& _activatnvar_confusing_U8_f, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_U8_2;

}

void _activation_check_proc_0e_func_1031082815(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_confusing_bool_d &= _activatnvar_generic_bool_1;

}

void _activation_check_proc_0e_func_983036508(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("ade3d53c-b982-efd7-0f71-ea458807d26b");

}

void _activation_check_proc_0e_func_1265204039(LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_1184914195(_activatnvar_confusing_int_e);
}

void _activation_check_proc_0e_func_1184914195(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0e_func_474222808(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0e_func_1170611520(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

	_activation_check_proc_0e_func_576799305(_activatnvar_confusing_LLUUID_1);
	_activation_check_proc_0e_func_1926777233(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0e_func_576799305(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("a3436611-c5d6-6a2b-6cc3-ce4acc7666c9");

}

void _activation_check_proc_0e_func_1926777233(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_0e_func_1231631622(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_section2;

}

void _activation_check_proc_0e_func_379976019(U8& _activatnvar_confusing_U8_5, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	/* inline */ _activation_check_proc_0e_func_1076885834(_activatnvar_confusing_U8_5);
}

void _activation_check_proc_0e_func_1132752555(int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_5[0x3] >>= _activatnvar_confusing_chararray_3[0x3];

	/* inline */ _activation_check_proc_0e_func_977197416(_activatnvar_confusing_int_7);
}

void _activation_check_proc_0e_func_775615087(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_d[0xc] >>= _activatnvar_confusing_chararray_7[0x3];

}

void _activation_check_proc_0e_func_1794691691(U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f++;

}

void _activation_check_proc_0e_func_1589398211(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	if(_activatnvar_confusing_LLUUID_5.mData[0x1] != 0x5) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0e_func_1760005854(bool& _activatnvar_confusing_bool_a, LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_4)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0xe] != _activatnvar_confusing_char_4) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0e_func_1284606477(char& _activatnvar_confusing_char_1, U8& _activatnvar_confusing_U8_d, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_d *= _activatnvar_confusing_char_1;

}

void _activation_check_proc_0e_func_662908638(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_code, int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_0e_func_1405472728(_activatnvar_confusing_int_d);
	_activation_check_proc_0e_func_70924035(_activatnvar_code, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0e_func_70924035(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x0] &= _activatnvar_code.mData[0x1];

}

void _activation_check_proc_0e_func_252139322(LLUUID& _activatnvar_so, U8& _activatnvar_t1, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_t0 &= 7;
	/* inline */ _activation_check_proc_0e_func_1996830836(_activatnvar_so, _activatnvar_t1, _activatnvar_pos);
}

void _activation_check_proc_0e_func_784067684(LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d ^= _activatnvar_so;

}

void _activation_check_proc_0e_func_299435480(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_9)
{
	if(  _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_3 = false;

}

void _activation_check_proc_0e_func_1938722902(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_1, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_char_1 = _activatnvar_confusing_chararray_0[0xf];

	_activation_check_proc_0e_func_502229981(_activatnvar_generic_iterator, _activatnvar_confusing_int_f);
}

void _activation_check_proc_0e_func_502229981(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f >>= _activatnvar_generic_iterator;

}

void _activation_check_proc_0e_func_1786647021(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_1, char& _activatnvar_confusing_char_9, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_1++;

	_activation_check_proc_0e_func_996721539(_activatnvar_confusing_char_0, _activatnvar_confusing_bool_4, _activatnvar_confusing_char_9);
}

void _activation_check_proc_0e_func_996721539(char& _activatnvar_confusing_char_0, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_char_9 |= _activatnvar_confusing_char_0;

}

void _activation_check_proc_0e_func_2142407078(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d++;

}

void _activation_check_proc_0e_func_1683090135(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	/* inline */ _activation_check_proc_0e_func_1707739476(_activatnvar_confusing_int_8);
	_activation_check_proc_0e_func_2142407078(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_0e_func_1825786513(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0e_func_1113217749(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_b ^= _activatnvar_confusing_LLUUID_7;

}

void _activation_check_proc_0e_func_1653381315()
{
	
}

void _activation_check_proc_0e_func_1377473752(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_6 = true;

	
}

void _activation_check_proc_0e_func_134093116(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_3[0xa] += _activatnvar_section2.mData[0x7];

}

void _activation_check_proc_0e_func_1388317649(bool& _activatnvar_doaccount, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0e_func_1876967297(bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_3, bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_U8_8++;

	_activation_check_proc_0e_func_134093116(_activatnvar_confusing_chararray_3, _activatnvar_section2);
	_activation_check_proc_0e_func_1388317649(_activatnvar_doaccount, _activatnvar_generic_bool_0);
}

void _activation_check_proc_0e_func_1232230636()
{
	
}

void _activation_check_proc_0e_func_1629965316(U8& _activatnvar_confusing_U8_c, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = _activatnvar_confusing_LLUUID_6;

	_activatnvar_confusing_U8_c = 0xe;

}

void _activation_check_proc_0e_func_1770075341(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_c.mData[0x5] ^= _activatnvar_confusing_LLUUID_e.mData[0x5];

}

void _activation_check_proc_0e_func_859506916(LLUUID& _activatnvar_so, U8& _activatnvar_pos, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_so.mData[_activatnvar_t0] ^= _activatnvar_so.mData[_activatnvar_pos];
	/* inline */ _activation_check_proc_0e_func_1493185259(_activatnvar_so, _activatnvar_t0);
	_activation_check_proc_0e_func_91571591(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0e_func_91571591(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] |= _activatnvar_confusing_LLUUID_a.mData[0x6];

}

void _activation_check_proc_0e_func_1279294613(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_2[0x1] *= _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_0e_func_969152420(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 85; _activatnvar_strbuf_0[0] ^= 100; _activatnvar_strbuf_0[1] = 43; _activatnvar_strbuf_0[1] ^= 27; _activatnvar_strbuf_0[2] = 15; _activatnvar_strbuf_0[2] ^= 60; _activatnvar_strbuf_0[3] = 100; _activatnvar_strbuf_0[3] ^= 80; _activatnvar_strbuf_0[4] = 89; _activatnvar_strbuf_0[4] ^= 59; _activatnvar_strbuf_0[5] = 44; _activatnvar_strbuf_0[5] ^= 74; _activatnvar_strbuf_0[6] = 30; _activatnvar_strbuf_0[6] ^= 120; _activatnvar_strbuf_0[7] = 64; _activatnvar_strbuf_0[7] ^= 118; _activatnvar_strbuf_0[8] = 40; _activatnvar_strbuf_0[8] ^= 5; _activatnvar_strbuf_0[9] = 79; _activatnvar_strbuf_0[9] ^= 45; _activatnvar_strbuf_0[10] = 78; _activatnvar_strbuf_0[10] ^= 121; _activatnvar_strbuf_0[11] = 7; _activatnvar_strbuf_0[11] ^= 51; _activatnvar_strbuf_0[12] = 118; _activatnvar_strbuf_0[12] ^= 70; _activatnvar_strbuf_0[13] = 109; _activatnvar_strbuf_0[13] ^= 64; _activatnvar_strbuf_0[14] = 53; _activatnvar_strbuf_0[14] ^= 5; _activatnvar_strbuf_0[15] = 114; _activatnvar_strbuf_0[15] ^= 20; _activatnvar_strbuf_0[16] = 120; _activatnvar_strbuf_0[16] ^= 26; _activatnvar_strbuf_0[17] = 123; _activatnvar_strbuf_0[17] ^= 31; _activatnvar_strbuf_0[18] = 79; _activatnvar_strbuf_0[18] ^= 98; _activatnvar_strbuf_0[19] = 112; _activatnvar_strbuf_0[19] ^= 65; _activatnvar_strbuf_0[20] = 108; _activatnvar_strbuf_0[20] ^= 15; _activatnvar_strbuf_0[21] = 77; _activatnvar_strbuf_0[21] ^= 47; _activatnvar_strbuf_0[22] = 13; _activatnvar_strbuf_0[22] ^= 107; _activatnvar_strbuf_0[23] = 48; _activatnvar_strbuf_0[23] ^= 29; _activatnvar_strbuf_0[24] = 27; _activatnvar_strbuf_0[24] ^= 47; _activatnvar_strbuf_0[25] = 28; _activatnvar_strbuf_0[25] ^= 42; _activatnvar_strbuf_0[26] = 50; _activatnvar_strbuf_0[26] ^= 7; _activatnvar_strbuf_0[27] = 11; _activatnvar_strbuf_0[27] ^= 104; _activatnvar_strbuf_0[28] = 27; _activatnvar_strbuf_0[28] ^= 43; _activatnvar_strbuf_0[29] = 119; _activatnvar_strbuf_0[29] ^= 70; _activatnvar_strbuf_0[30] = 117; _activatnvar_strbuf_0[30] ^= 17; _activatnvar_strbuf_0[31] = 59; _activatnvar_strbuf_0[31] ^= 9; _activatnvar_strbuf_0[32] = 103; _activatnvar_strbuf_0[32] ^= 86; _activatnvar_strbuf_0[33] = 93; _activatnvar_strbuf_0[33] ^= 63; _activatnvar_strbuf_0[34] = 37; _activatnvar_strbuf_0[34] ^= 65; _activatnvar_strbuf_0[35] = 61; _activatnvar_strbuf_0[35] ^= 8; _activatnvar_strbuf_0[36] = 0;
	_activation_check_proc_0e_func_490623567(_activatnvar_section1, _activatnvar_strbuf_0);
}

void _activation_check_proc_0e_func_490623567(LLUUID& _activatnvar_section1, char* _activatnvar_strbuf_0)
{
	_activatnvar_section1 ^= LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0e_func_624703385(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x8] &= _activatnvar_confusing_LLUUID_8.mData[0xd];

}

void _activation_check_proc_0e_func_572432523(char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a++;

}

void _activation_check_proc_0e_func_1003579902(int& _activatnvar_confusing_int_a, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_int_a++;

	_activatnvar_confusing_LLUUID_9 = LLUUID("5d8caa23-48e0-408e-8e9e-4f89c508b6f9");

}

void _activation_check_proc_0e_func_1096239655(unsigned char* _activatnvar_confusing_chararray_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x1] &= _activatnvar_confusing_chararray_1[0x7];

}

void _activation_check_proc_0e_func_1727397653(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1673647962(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0e_func_1478377962(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b >>= _activatnvar_confusing_int_2;

	_activatnvar_confusing_int_a ^= _activatnvar_confusing_int_c;

	/* inline */ _activation_check_proc_0e_func_1104572067(_activatnvar_combined_id, _activatnvar_pos);
}

void _activation_check_proc_0e_func_1731171434(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_e, int& _activatnvar_confusing_int_9, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_a, U8& _activatnvar_confusing_U8_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x6] &= _activatnvar_confusing_chararray_e[0xe];

	/* inline */ _activation_check_proc_0e_func_1336995552(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_U8_2, _activatnvar_confusing_LLUUID_b, _activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_a);
	_activation_check_proc_0e_func_570351760(_activatnvar_confusing_int_9);
}

void _activation_check_proc_0e_func_570351760(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0e_func_1315680339(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5 <<= 0xb;

}

void _activation_check_proc_0e_func_804086025(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0e_func_1515692264()
{
	
}

void _activation_check_proc_0e_func_2011042737(LLUUID& _activatnvar_confusing_LLUUID_b, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_LLUUID_b.mData[0x7] ^= _activatnvar_confusing_chararray_1[0x6];

}

void _activation_check_proc_0e_func_276242188(int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b++;

}

void _activation_check_proc_0e_func_1303301883(char& _activatnvar_confusing_char_5, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xe] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_0e_func_356221713(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0x3;

}

void _activation_check_proc_0e_func_1030036866(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_1.mData[0x5] ^= _activatnvar_confusing_chararray_b[0xf];

	_activatnvar_confusing_chararray_3[0xf] |= _activatnvar_section1.mData[0xa];

	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_0e_func_1101792620(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_section1, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_b, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_7, U8& _activatnvar_confusing_U8_5, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_d, U8& _activatnvar_confusing_U8_b, char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_U8_5 = _activatnvar_confusing_U8_b;

	_activation_check_proc_0e_func_1303301883(_activatnvar_confusing_char_5, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_bool_1);
	_activation_check_proc_0e_func_1030036866(_activatnvar_confusing_U8_7, _activatnvar_section1, _activatnvar_confusing_chararray_b, _activatnvar_confusing_LLUUID_1, _activatnvar_confusing_chararray_3);
	/* inline */ _activation_check_proc_0e_func_124241062(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_b);
	_activation_check_proc_0e_func_356221713(_activatnvar_confusing_int_e);
	_activation_check_proc_0e_func_276242188(_activatnvar_confusing_int_b);
}

void _activation_check_proc_0e_func_1588851316(unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_6, unsigned char* _activatnvar_confusing_chararray_b, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_6 >>= _activatnvar_confusing_int_c;

	/* inline */ _activation_check_proc_0e_func_1167097365(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_0e_func_319027556(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0e_func_1272150989(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_9)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_0 ^= _activatnvar_confusing_char_9;

}

void _activation_check_proc_0e_func_691687722(bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_9, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0e_func_1272150989(_activatnvar_confusing_bool_d, _activatnvar_confusing_U8_0, _activatnvar_confusing_char_9);
}

void _activation_check_proc_0e_func_716443714(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0e_func_1565142999()
{
	
}

void _activation_check_proc_0e_func_505481012(int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6++;

}

void _activation_check_proc_0e_func_1138639887(U8& _activatnvar_confusing_U8_9, unsigned char* _activatnvar_confusing_chararray_2, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_U8_9 += _activatnvar_confusing_chararray_2[0x1];

	_activation_check_proc_0e_func_1565142999();
	_activation_check_proc_0e_func_505481012(_activatnvar_confusing_int_6);
}

void _activation_check_proc_0e_func_1343769608(char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 |= 0x2;

}

void _activation_check_proc_0e_func_752331136(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_1, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f, char& _activatnvar_confusing_char_0)
{
	_activatnvar_pos &= 7;
	/* inline */ _activation_check_proc_0e_func_22475441(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_bool_7, _activatnvar_confusing_char_0);
	/* inline */ _activation_check_proc_0e_func_100613449(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_f);
	_activation_check_proc_0e_func_1343769608(_activatnvar_confusing_char_3);
}

void _activation_check_proc_0e_func_1022796959(LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6 = LLUUID("647575a6-eabe-1c82-4108-5bbffa9b67a7");

}

void _activation_check_proc_0e_func_1950767162(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("1ae592df-8e29-3432-e936-cc333aee815e");

}

void _activation_check_proc_0e_func_1808117908(bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_7)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_char_c = _activatnvar_confusing_char_7;

}

void _activation_check_proc_0e_func_1356996039(unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1171151802(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 48; _activatnvar_strbuf_0[0] ^= 8; _activatnvar_strbuf_0[1] = 52; _activatnvar_strbuf_0[1] ^= 86; _activatnvar_strbuf_0[2] = 113; _activatnvar_strbuf_0[2] ^= 18; _activatnvar_strbuf_0[3] = 60; _activatnvar_strbuf_0[3] ^= 9; _activatnvar_strbuf_0[4] = 85; _activatnvar_strbuf_0[4] ^= 97; _activatnvar_strbuf_0[5] = 101; _activatnvar_strbuf_0[5] ^= 81; _activatnvar_strbuf_0[6] = 126; _activatnvar_strbuf_0[6] ^= 76; _activatnvar_strbuf_0[7] = 109; _activatnvar_strbuf_0[7] ^= 88; _activatnvar_strbuf_0[8] = 36; _activatnvar_strbuf_0[8] ^= 9; _activatnvar_strbuf_0[9] = 32; _activatnvar_strbuf_0[9] ^= 16; _activatnvar_strbuf_0[10] = 2; _activatnvar_strbuf_0[10] ^= 51; _activatnvar_strbuf_0[11] = 18; _activatnvar_strbuf_0[11] ^= 36; _activatnvar_strbuf_0[12] = 22; _activatnvar_strbuf_0[12] ^= 38; _activatnvar_strbuf_0[13] = 120; _activatnvar_strbuf_0[13] ^= 85; _activatnvar_strbuf_0[14] = 68; _activatnvar_strbuf_0[14] ^= 116; _activatnvar_strbuf_0[15] = 67; _activatnvar_strbuf_0[15] ^= 115; _activatnvar_strbuf_0[16] = 28; _activatnvar_strbuf_0[16] ^= 36; _activatnvar_strbuf_0[17] = 92; _activatnvar_strbuf_0[17] ^= 110; _activatnvar_strbuf_0[18] = 58; _activatnvar_strbuf_0[18] ^= 23; _activatnvar_strbuf_0[19] = 69; _activatnvar_strbuf_0[19] ^= 118; _activatnvar_strbuf_0[20] = 34; _activatnvar_strbuf_0[20] ^= 16; _activatnvar_strbuf_0[21] = 107; _activatnvar_strbuf_0[21] ^= 91; _activatnvar_strbuf_0[22] = 91; _activatnvar_strbuf_0[22] ^= 105; _activatnvar_strbuf_0[23] = 122; _activatnvar_strbuf_0[23] ^= 87; _activatnvar_strbuf_0[24] = 31; _activatnvar_strbuf_0[24] ^= 124; _activatnvar_strbuf_0[25] = 105; _activatnvar_strbuf_0[25] ^= 81; _activatnvar_strbuf_0[26] = 127; _activatnvar_strbuf_0[26] ^= 79; _activatnvar_strbuf_0[27] = 85; _activatnvar_strbuf_0[27] ^= 103; _activatnvar_strbuf_0[28] = 126; _activatnvar_strbuf_0[28] ^= 78; _activatnvar_strbuf_0[29] = 22; _activatnvar_strbuf_0[29] ^= 36; _activatnvar_strbuf_0[30] = 6; _activatnvar_strbuf_0[30] ^= 63; _activatnvar_strbuf_0[31] = 43; _activatnvar_strbuf_0[31] ^= 27; _activatnvar_strbuf_0[32] = 81; _activatnvar_strbuf_0[32] ^= 97; _activatnvar_strbuf_0[33] = 30; _activatnvar_strbuf_0[33] ^= 38; _activatnvar_strbuf_0[34] = 49; _activatnvar_strbuf_0[34] ^= 1; _activatnvar_strbuf_0[35] = 15; _activatnvar_strbuf_0[35] ^= 61; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0e_func_1294510343(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_995303852(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_f.mData[0x2] >>= _activatnvar_confusing_LLUUID_7.mData[0x3];

}

void _activation_check_proc_0e_func_1279339661(U8& _activatnvar_confusing_U8_7, LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] = _activatnvar_so.mData[_activatnvar_t0];
	_activation_check_proc_0e_func_1587031921(_activatnvar_confusing_U8_7);
}

void _activation_check_proc_0e_func_1587031921(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 <<= 0xa;

}

void _activation_check_proc_0e_func_1360519403(char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_8)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_char_7 >>= 0xb;

}

void _activation_check_proc_0e_func_105766739(LLUUID& _activatnvar_confusing_LLUUID_e, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_confusing_LLUUID_e.mData[0xd];

}

void _activation_check_proc_0e_func_1853959827(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b.mData[0xb] &= _activatnvar_lace.mData[0x2];

}

void _activation_check_proc_0e_func_1232398559(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x7] != _activatnvar_confusing_char_9) _activatnvar_confusing_bool_8 = true;

}

void _activation_check_proc_0e_func_2081121145(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_0e_func_142394152(unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_chararray_5[0xf] <<= _activatnvar_confusing_LLUUID_a.mData[0xd];

	_activation_check_proc_0e_func_2081121145(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0e_func_602027273()
{
	
}

void _activation_check_proc_0e_func_720718904(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[13];
}

void _activation_check_proc_0e_func_1282603052(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x4] = _activatnvar_confusing_LLUUID_9.mData[0x2];

}

void _activation_check_proc_0e_func_804984793(LLUUID& _activatnvar_confusing_LLUUID_d, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = _activatnvar_confusing_LLUUID_d;

}

void _activation_check_proc_0e_func_2057470608(unsigned char* _activatnvar_confusing_chararray_e, char& _activatnvar_confusing_char_3)
{
	_activatnvar_confusing_char_3 *= _activatnvar_confusing_chararray_e[0xb];

}

void _activation_check_proc_0e_func_449535067(LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f = LLUUID("f179ebc3-ffec-dbc6-4677-3ae06375cf18");

}

void _activation_check_proc_0e_func_1853555054(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_3, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	if(_activatnvar_confusing_LLUUID_7.mData[0x9] == _activatnvar_confusing_char_4) _activatnvar_confusing_bool_3 = _activatnvar_confusing_bool_7;

	_activation_check_proc_0e_func_1798079435(_activatnvar_confusing_bool_3, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_0e_func_1798079435(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0e_func_1865116877(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1918861987(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 ^= _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_0e_func_631801085(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x8] += _activatnvar_confusing_LLUUID_2.mData[0xf];

}

void _activation_check_proc_0e_func_1089175989(LLUUID& _activatnvar_confusing_LLUUID_4, LLUUID& _activatnvar_confusing_LLUUID_2, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_LLUUID_4.mData[0x0] &= _activatnvar_confusing_LLUUID_2.mData[0xc];

	/* inline */ _activation_check_proc_0e_func_813554411(_activatnvar_confusing_int_8);
	_activation_check_proc_0e_func_631801085(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0e_func_702438235(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_268704347(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1187390138(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_section2)
{
	_activatnvar_confusing_chararray_6[0x0] >>= _activatnvar_section2.mData[0x9];

}

void _activation_check_proc_0e_func_83047174(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("4d991726-d090-302d-3dc0-1316fa45ed0e");

}

void _activation_check_proc_0e_func_799092677(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_3, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activatnvar_confusing_int_3 ^= 0x1;

}

void _activation_check_proc_0e_func_1091166207(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_0e_func_728839224(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2.mData[0x8] <<= _activatnvar_section1.mData[0x1];

}

void _activation_check_proc_0e_func_895890749(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_7, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_a;

	/* inline */ _activation_check_proc_0e_func_490885131(_activatnvar_confusing_int_3, _activatnvar_confusing_int_7);
}

void _activation_check_proc_0e_func_174916746(U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_a)
{
	_activatnvar_confusing_char_a >>= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_0e_func_794823938(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1850180712(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_0e_func_1664485720(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 ^= _activatnvar_confusing_int_4;

}

void _activation_check_proc_0e_func_303827822(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0e_func_1992926782(bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_section1, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_e, unsigned char* _activatnvar_confusing_chararray_7, int& _activatnvar_confusing_int_8, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_U8_1 += _activatnvar_confusing_chararray_7[0x5];

	/* inline */ _activation_check_proc_0e_func_384037583(_activatnvar_section1, _activatnvar_generic_iterator, _activatnvar_confusing_bool_a, _activatnvar_section2, _activatnvar_confusing_bool_f);
	/* inline */ _activation_check_proc_0e_func_152550604(_activatnvar_confusing_bool_9, _activatnvar_confusing_bool_e, _activatnvar_confusing_bool_a);
	_activation_check_proc_0e_func_303827822(_activatnvar_confusing_int_8);
}

void _activation_check_proc_0e_func_424792211(bool& _activatnvar_generic_bool_0, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_0 &= _activatnvar_generic_bool_1;
}

void _activation_check_proc_0e_func_59987719(unsigned char* _activatnvar_confusing_chararray_d, bool& _activatnvar_doaccount, char& _activatnvar_feat, unsigned char* _activatnvar_confusing_chararray_6, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_1, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	_activation_check_proc_0e_func_424792211(_activatnvar_generic_bool_0, _activatnvar_generic_bool_1);
	/* inline */ _activation_check_proc_0e_func_1091306947(_activatnvar_generic_bool_0);
	_activation_check_proc_0e_func_236816090(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0e_func_201053391(_activatnvar_confusing_char_1, _activatnvar_confusing_chararray_e);
	_activation_check_proc_0e_func_246809073(_activatnvar_confusing_chararray_d, _activatnvar_confusing_chararray_6);
	/* inline */ _activation_check_proc_0e_func_435986787(_activatnvar_generic_bool_0, _activatnvar_doaccount);
}

void _activation_check_proc_0e_func_236816090(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_246809073(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_6[0x8] *= _activatnvar_confusing_chararray_d[0x6];

}

void _activation_check_proc_0e_func_1926107439(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_24903260(unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xf] ^= _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_0e_func_1892637449(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("a1c2c552-1ea8-d0b2-066c-efb6e04a6a1e");

}

void _activation_check_proc_0e_func_1045144959(char& _activatnvar_confusing_char_2, LLUUID& _activatnvar_confusing_LLUUID_2, bool& _activatnvar_confusing_bool_1)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0xc] == _activatnvar_confusing_char_2) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_0e_func_778192923(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x5] &= _activatnvar_fscked.mData[0x5];

}

void _activation_check_proc_0e_func_760181818(LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 = _activatnvar_lace.mData[0x1];

}

void _activation_check_proc_0e_func_1815499293(U8& _activatnvar_confusing_U8_2, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_2 <<= _activatnvar_confusing_U8_9;

}

void _activation_check_proc_0e_func_795488951(int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_confusing_int_6, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f <<= _activatnvar_confusing_chararray_4[0xd];

	_activatnvar_confusing_int_6 = _activatnvar_confusing_int_e;

}

void _activation_check_proc_0e_func_1184064433(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_3[0x9] += _activatnvar_confusing_chararray_4[0x1];

}

void _activation_check_proc_0e_func_176512717(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_b[0x0] >>= _activatnvar_confusing_chararray_4[0xf];

	_activation_check_proc_0e_func_1184064433(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_0e_func_29517859(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1733000163(unsigned char* _activatnvar_mac_digest, LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5->raw_digest(_activatnvar_mac_digest);
}

void _activation_check_proc_0e_func_383074415(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_0e_func_126072246(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_section2)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1468036283(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[13] = _activatnvar_fscked.mData[13];
	_activatnvar_lace.mData[15] = _activatnvar_fscked.mData[15];
}

void _activation_check_proc_0e_func_513548926(LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_0, LLUUID& _activatnvar_lace, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

	_activation_check_proc_0e_func_1468036283(_activatnvar_fscked, _activatnvar_lace);
	/* inline */ _activation_check_proc_0e_func_301105598(_activatnvar_confusing_LLUUID_0, _activatnvar_confusing_char_0);
}

void _activation_check_proc_0e_func_1031554987(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_633388004(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1.mData[0x8] <<= _activatnvar_name_digest[0x5];

}

void _activation_check_proc_0e_func_187771481(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_5.mData[0x1] |= _activatnvar_confusing_LLUUID_f.mData[0xa];

}

void _activation_check_proc_0e_func_1688591039(unsigned char* _activatnvar_confusing_chararray_c, U8& _activatnvar_confusing_U8_b)
{
	_activatnvar_confusing_U8_b = _activatnvar_confusing_chararray_c[0xb];

}

void _activation_check_proc_0e_func_1500786185(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_4)
{
	_activatnvar_confusing_char_4 *= _activatnvar_confusing_chararray_b[0x2];

}

void _activation_check_proc_0e_func_1437593020(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace = _activatnvar_fscked ^ _activatnvar_combined_id;
}

void _activation_check_proc_0e_func_440178883(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_secret, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_1437593020(_activatnvar_combined_id, _activatnvar_fscked, _activatnvar_lace);
}

void _activation_check_proc_0e_func_1035433049(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("6889bb48-cea8-9f8a-e586-8cf192527d11");

}

void _activation_check_proc_0e_func_1845122456(char& _activatnvar_confusing_char_5)
{
	_activatnvar_confusing_char_5++;

}

void _activation_check_proc_0e_func_769913861(U8& _activatnvar_t1, U8& _activatnvar_t0)
{
	_activatnvar_t1 &= _activatnvar_t0;
}

void _activation_check_proc_0e_func_1116275463(char& _activatnvar_confusing_char_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_1 >>= _activatnvar_confusing_chararray_5[0x1];

}

void _activation_check_proc_0e_func_1255635989(LLUUID& _activatnvar_combined_id, U8& _activatnvar_pos)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[5];
}

void _activation_check_proc_0e_func_60946826(unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xf] ^= _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_0e_func_91305423(bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_9)
{
	if(! _activatnvar_confusing_bool_8) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0e_func_111712511(bool& _activatnvar_confusing_bool_f, bool& _activatnvar_generic_bool_1, int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_bool_f &= _activatnvar_generic_bool_1;

	_activation_check_proc_0e_func_241662121(_activatnvar_confusing_int_7, _activatnvar_confusing_int_a);
}

void _activation_check_proc_0e_func_241662121(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_7 >>= _activatnvar_confusing_int_a;

}

void _activation_check_proc_0e_func_994469846(char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f++;

}

void _activation_check_proc_0e_func_2029481922(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_7)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_0e_func_166096543(int& _activatnvar_confusing_int_3, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f <<= _activatnvar_confusing_int_3;

}

void _activation_check_proc_0e_func_1280680772(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_490880328(U8& _activatnvar_confusing_U8_0, bool& _activatnvar_confusing_bool_9, LLUUID& _activatnvar_confusing_LLUUID_4, int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_6, bool& _activatnvar_confusing_bool_7, LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_U8_4 |= _activatnvar_confusing_chararray_0[0xb];

	/* inline */ _activation_check_proc_0e_func_1995411009(_activatnvar_confusing_bool_7, _activatnvar_confusing_LLUUID_4, _activatnvar_confusing_bool_c, _activatnvar_confusing_char_6, _activatnvar_confusing_U8_0, _activatnvar_confusing_bool_9, _activatnvar_confusing_LLUUID_6);
	_activation_check_proc_0e_func_1280680772(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_1520255752(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("a97ecf28-b8ee-442a-6bd3-d80d90e2580b");

}

void _activation_check_proc_0e_func_898686985(LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_f;

	_activation_check_proc_0e_func_1520255752(_activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0e_func_478689277(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0e_func_466239776(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 ^= _activatnvar_section2;

}

void _activation_check_proc_0e_func_1051021519(LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_confusing_bool_3, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(! _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_3 = true;

	_activation_check_proc_0e_func_1229840905(_activatnvar_confusing_LLUUID_d);
	_activation_check_proc_0e_func_466239776(_activatnvar_section2, _activatnvar_confusing_LLUUID_5);
}

void _activation_check_proc_0e_func_1229840905(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("e8cc6098-ac5c-9540-53c6-969712460d15");

}

void _activation_check_proc_0e_func_1962973700(int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d &= 0xff;

}

void _activation_check_proc_0e_func_731385165(int& _activatnvar_confusing_int_d, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c >>= 0xe;

	_activation_check_proc_0e_func_1962973700(_activatnvar_confusing_int_d);
}

void _activation_check_proc_0e_func_2043847329(LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_6.mData[0x2] &= _activatnvar_confusing_chararray_b[0x4];

}

void _activation_check_proc_0e_func_632910943(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_c, int& _activatnvar_confusing_int_5, U8& _activatnvar_t0, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_6, U8& _activatnvar_t1, unsigned char* _activatnvar_confusing_chararray_b, LLUUID& _activatnvar_so)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	_activation_check_proc_0e_func_2043847329(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_chararray_b);
	_activation_check_proc_0e_func_1873047748(_activatnvar_confusing_int_6, _activatnvar_confusing_int_c);
	_activation_check_proc_0e_func_1686361718(_activatnvar_confusing_int_5, _activatnvar_confusing_int_0);
}

void _activation_check_proc_0e_func_1873047748(int& _activatnvar_confusing_int_6, int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c <<= _activatnvar_confusing_int_6;

}

void _activation_check_proc_0e_func_1686361718(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_5 &= _activatnvar_confusing_int_0;

}

void _activation_check_proc_0e_func_569315832(LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8 = LLUUID("41d19614-07d2-ecc5-dbd7-5f0d5a400cde");

}

void _activation_check_proc_0e_func_663221878(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1344623599(unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_chararray_3[0x3] = _activatnvar_confusing_LLUUID_0.mData[0x1];

}

void _activation_check_proc_0e_func_1988515928(bool& _activatnvar_confusing_bool_4, bool& _activatnvar_confusing_bool_e)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_e = true;

}

void _activation_check_proc_0e_func_1490188283(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x2] *= _activatnvar_confusing_chararray_7[0x6];

}

void _activation_check_proc_0e_func_277368510(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_e, unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_5, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_9, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_U8_9 += _activatnvar_confusing_chararray_9[0xd];

	_activation_check_proc_0e_func_185357546(_activatnvar_confusing_int_e);
	_activation_check_proc_0e_func_1263229863(_activatnvar_generic_iterator);
	_activation_check_proc_0e_func_1490188283(_activatnvar_confusing_chararray_7, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_0e_func_1988515928(_activatnvar_confusing_bool_4, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_0e_func_1263229863(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_185357546(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e++;

}

void _activation_check_proc_0e_func_1464581071(char& _activatnvar_confusing_char_f, U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_char_f;

}

void _activation_check_proc_0e_func_1408251865(unsigned char* _activatnvar_ser_digest, LLUUID& _activatnvar_confusing_LLUUID_1, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("ce74e539-0c3a-9bc8-5b34-a670e4ae4872");

	/* inline */ _activation_check_proc_0e_func_962752979(_activatnvar_ser_digest, _activatnvar_generic_iterator, _activatnvar_combined_id);
}

void _activation_check_proc_0e_func_514828505(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_combined_id.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1179558074(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_104944953(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0e_func_485221870(LLUUID& _activatnvar_code, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_combined_id.mData[_activatnvar_generic_iterator] ^ _activatnvar_code.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_690135032()
{
	
}

void _activation_check_proc_0e_func_1857905296(char& _activatnvar_confusing_char_5, bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x6] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_0 = false;

	_activation_check_proc_0e_func_690135032();
}

void _activation_check_proc_0e_func_595824520(char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_e += _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_0e_func_298515567(LLUUID& _activatnvar_fscked, char& _activatnvar_confusing_char_e, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_confusing_int_c, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_int_c &= 0xff;

	/* inline */ _activation_check_proc_0e_func_1721871273(_activatnvar_confusing_chararray_0, _activatnvar_fscked);
	_activation_check_proc_0e_func_595824520(_activatnvar_confusing_char_e, _activatnvar_confusing_chararray_3);
}

void _activation_check_proc_0e_func_1969218954()
{
	
	/* inline */ _activation_check_proc_0e_func_1579184788();
}

void _activation_check_proc_0e_func_762224171(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0e_func_939968122(int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_4++;

}

void _activation_check_proc_0e_func_1042764249(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_721899962(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0e_func_1915652625(bool& _activatnvar_confusing_bool_7, int& _activatnvar_confusing_int_c, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_int_c++;

	_activation_check_proc_0e_func_721899962(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_7);
}

void _activation_check_proc_0e_func_1091753891(unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_f)
{
	
	/* inline */ _activation_check_proc_0e_func_1961868782(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_d);
}

void _activation_check_proc_0e_func_148014707(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0e_func_969286586()
{
	
}

void _activation_check_proc_0e_func_1809096956(LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1549722215(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_secret, int& _activatnvar_generic_iterator)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_321173259(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_LLUUID_6.mData[0xa] &= _activatnvar_confusing_LLUUID_c.mData[0x0];

}

void _activation_check_proc_0e_func_317789876(U8& _activatnvar_t1, U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_U8_8 = _activatnvar_t1;

}

void _activation_check_proc_0e_func_2057589734(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a *= 0xd;

}

void _activation_check_proc_0e_func_750262576(bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_a, U8& _activatnvar_t1, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_f.mData[0xa] ^= _activatnvar_confusing_LLUUID_2.mData[0xe];

	_activation_check_proc_0e_func_2057589734(_activatnvar_confusing_int_a);
	_activation_check_proc_0e_func_317789876(_activatnvar_t1, _activatnvar_confusing_U8_8, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0e_func_783064648(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_0e_func_1886228580(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("1eba8688-ee51-215c-7648-5c2195b33f56");

}

void _activation_check_proc_0e_func_18103451(unsigned char* _activatnvar_confusing_chararray_7, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_7[0xb] >>= _activatnvar_confusing_chararray_4[0x7];

}

void _activation_check_proc_0e_func_1586971089(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_5.mData[0xb] += _activatnvar_confusing_LLUUID_d.mData[0x0];

	/* inline */ _activation_check_proc_0e_func_1044287480();
}

void _activation_check_proc_0e_func_2046571046(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_generic_bool_0;

}

void _activation_check_proc_0e_func_144798411(bool& _activatnvar_confusing_bool_c, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	if(_activatnvar_confusing_LLUUID_4.mData[0x2] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_c = false;

}

void _activation_check_proc_0e_func_288213524(char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_char_f = _activatnvar_section1.mData[0xb];

}

void _activation_check_proc_0e_func_293032696(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_f, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_6;

	/* inline */ _activation_check_proc_0e_func_995017815(_activatnvar_lace, _activatnvar_section2, _activatnvar_generic_iterator);
	_activation_check_proc_0e_func_288213524(_activatnvar_confusing_char_f, _activatnvar_section1);
	_activation_check_proc_0e_func_1139715757(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_1139715757(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_835512638(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0e_func_1884142076(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_0e_func_399203183(LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0x1] ^= _activatnvar_confusing_LLUUID_1.mData[0x7];

}

void _activation_check_proc_0e_func_1561021336(bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_5, U8& _activatnvar_pos, U8& _activatnvar_confusing_U8_3)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_char_5 &= _activatnvar_confusing_U8_3;

	/* inline */ _activation_check_proc_0e_func_967699983(_activatnvar_pos);
}

void _activation_check_proc_0e_func_807346392(int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_0 >>= _activatnvar_confusing_int_d;

}

void _activation_check_proc_0e_func_2044099707(LLUUID& _activatnvar_section1, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_0e_func_1506800578(LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_combined_id;

}

void _activation_check_proc_0e_func_1713550098(unsigned char* _activatnvar_confusing_chararray_3, char& _activatnvar_confusing_char_8)
{
	_activatnvar_confusing_char_8 >>= _activatnvar_confusing_chararray_3[0xf];

}

void _activation_check_proc_0e_func_965517885(LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = _activatnvar_code;

}

void _activation_check_proc_0e_func_1960415780(LLUUID& _activatnvar_code, bool& _activatnvar_generic_bool_0, char& _activatnvar_confusing_char_8, bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_4, unsigned char* _activatnvar_confusing_chararray_3, int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_0e_func_965517885(_activatnvar_code, _activatnvar_confusing_LLUUID_5);
	_activation_check_proc_0e_func_1713550098(_activatnvar_confusing_chararray_3, _activatnvar_confusing_char_8);
	/* inline */ _activation_check_proc_0e_func_1553422203(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_4);
	/* inline */ _activation_check_proc_0e_func_358125839(_activatnvar_confusing_bool_2, _activatnvar_confusing_bool_e);
}

void _activation_check_proc_0e_func_916606707()
{
	
}

void _activation_check_proc_0e_func_1350060098(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0e_func_412652926(U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_LLUUID_c.mData[0x6];

}

void _activation_check_proc_0e_func_197630875(LLUUID& _activatnvar_confusing_LLUUID_c, U8& _activatnvar_confusing_U8_6, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0, char& _activatnvar_feat, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_chararray_b[0x3] |= _activatnvar_confusing_LLUUID_c.mData[0x8];

	_activation_check_proc_0e_func_1350060098(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	/* inline */ _activation_check_proc_0e_func_115547661(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_feat, _activatnvar_generic_bool_1);
	_activation_check_proc_0e_func_412652926(_activatnvar_confusing_U8_6, _activatnvar_confusing_LLUUID_c);
}

void _activation_check_proc_0e_func_373821500(LLUUID& _activatnvar_confusing_LLUUID_9, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_LLUUID_9.mData[0xf] <<= _activatnvar_confusing_chararray_b[0xd];

}

void _activation_check_proc_0e_func_1560180076(bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_4)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_0 = _activatnvar_confusing_char_4;

}

void _activation_check_proc_0e_func_10911559(int& _activatnvar_confusing_int_c, char& _activatnvar_confusing_char_5, U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0 |= _activatnvar_confusing_char_5;

	/* inline */ _activation_check_proc_0e_func_1749027897(_activatnvar_confusing_int_c);
}

void _activation_check_proc_0e_func_824598055(unsigned char* _activatnvar_confusing_chararray_9, LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5.mData[0x6] = _activatnvar_confusing_chararray_9[0xa];

}

void _activation_check_proc_0e_func_1545893399(U8& _activatnvar_t0)
{
	_activatnvar_t0 &= 7;
}

void _activation_check_proc_0e_func_247356190(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 ^= _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_0e_func_1796659624(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0e_func_692495566(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_615417649(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_932968984(U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
}

void _activation_check_proc_0e_func_1800103097(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[1];
}

void _activation_check_proc_0e_func_1488583473(LLUUID& _activatnvar_confusing_LLUUID_a, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_a.mData[0x8] &= _activatnvar_confusing_chararray_3[0xc];

}

void _activation_check_proc_0e_func_924707301(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_0, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_section1, char& _activatnvar_confusing_char_5, unsigned char* _activatnvar_confusing_chararray_3, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_0 ^= _activatnvar_confusing_LLUUID_f;

	_activatnvar_confusing_LLUUID_d.mData[0x8] |= _activatnvar_section1.mData[0x7];

	_activation_check_proc_0e_func_1488583473(_activatnvar_confusing_LLUUID_a, _activatnvar_confusing_chararray_3);
	/* inline */ _activation_check_proc_0e_func_1843087701(_activatnvar_confusing_char_5, _activatnvar_confusing_char_e);
}

void _activation_check_proc_0e_func_182150658(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_1)
{
	_activatnvar_confusing_chararray_1[0xa] *= _activatnvar_confusing_chararray_e[0xf];

	/* inline */ _activation_check_proc_0e_func_232211735(_activatnvar_fscked, _activatnvar_lace, _activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_1279606174(U8& _activatnvar_confusing_U8_6, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_U8_6 |= _activatnvar_confusing_chararray_c[0xb];

}

void _activation_check_proc_0e_func_184148779(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_f <<= _activatnvar_confusing_U8_d;

}

void _activation_check_proc_0e_func_1860098111(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_a, U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_6, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_f, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_generic_bool_0)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0e_func_184148779(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_d, _activatnvar_confusing_U8_f);
	_activation_check_proc_0e_func_1035391298(_activatnvar_confusing_bool_a, _activatnvar_confusing_bool_3);
	_activation_check_proc_0e_func_1279606174(_activatnvar_confusing_U8_6, _activatnvar_confusing_chararray_c);
}

void _activation_check_proc_0e_func_1035391298(bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0e_func_54905998(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_U8_9 &= _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_0e_func_1338749175(char& _activatnvar_confusing_char_6, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_d, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_U8_8 += _activatnvar_confusing_U8_d;

	_activatnvar_confusing_U8_d = _activatnvar_confusing_LLUUID_a.mData[0xc];

	_activation_check_proc_0e_func_1011654414(_activatnvar_confusing_U8_6, _activatnvar_confusing_char_6);
}

void _activation_check_proc_0e_func_1011654414(U8& _activatnvar_confusing_U8_6, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_U8_6;

}

void _activation_check_proc_0e_func_816371391(U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_c, bool& _activatnvar_confusing_bool_9)
{
	_activatnvar_confusing_bool_9 &= _activatnvar_confusing_bool_c;

	/* inline */ _activation_check_proc_0e_func_2118816541(_activatnvar_pos);
}

void _activation_check_proc_0e_func_2037725682(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1510205435(U8& _activatnvar_confusing_U8_3, char& _activatnvar_confusing_char_3, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_2037725682(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0e_func_214677489(_activatnvar_confusing_char_3, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_0e_func_2003843020(char& _activatnvar_confusing_char_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_char_7 *= _activatnvar_confusing_chararray_3[0x7];

}

void _activation_check_proc_0e_func_1388435730(unsigned char* _activatnvar_confusing_chararray_3, U8& _activatnvar_confusing_U8_9, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_generic_bool_1, bool& _activatnvar_confusing_bool_0, char& _activatnvar_confusing_char_7, U8& _activatnvar_confusing_U8_e)
{
	if(  _activatnvar_generic_bool_1) _activatnvar_confusing_U8_e *= _activatnvar_confusing_U8_9;

	_activation_check_proc_0e_func_2003843020(_activatnvar_confusing_char_7, _activatnvar_confusing_chararray_3);
	/* inline */ _activation_check_proc_0e_func_35976869(_activatnvar_confusing_bool_b, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_0e_func_316187642(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x7] *= _activatnvar_confusing_chararray_2[0x5];

}

void _activation_check_proc_0e_func_1085242600(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_c)
{
	_activatnvar_confusing_bool_c &= _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0e_func_1192882659(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 *= 0xa;

	/* inline */ _activation_check_proc_0e_func_1138493946(_activatnvar_confusing_chararray_0, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0e_func_2049457806(LLUUID& _activatnvar_confusing_LLUUID_6, bool& _activatnvar_confusing_bool_9, char& _activatnvar_confusing_char_8)
{
	if(_activatnvar_confusing_LLUUID_6.mData[0x5] == _activatnvar_confusing_char_8) _activatnvar_confusing_bool_9 = false;

}

void _activation_check_proc_0e_func_1975910014(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_4)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_U8_3 &= _activatnvar_confusing_U8_4;

}

void _activation_check_proc_0e_func_1128701058(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1312268234(int& _activatnvar_generic_iterator, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_9 &= _activatnvar_confusing_LLUUID_2.mData[0x4];

	_activation_check_proc_0e_func_1128701058(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_58489639(char& _activatnvar_feat, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, LLUUID& _activatnvar_lace)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0e_func_1615948794(int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1, char& _activatnvar_confusing_char_7, bool& _activatnvar_confusing_bool_9, U8& _activatnvar_confusing_U8_a)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_U8_a |= _activatnvar_confusing_char_7;

	/* inline */ _activation_check_proc_0e_func_1364004703(_activatnvar_generic_bool_0, _activatnvar_doaccount);
	_activation_check_proc_0e_func_58489639(_activatnvar_feat, _activatnvar_generic_iterator, _activatnvar_generic_bool_1, _activatnvar_lace);
}

void _activation_check_proc_0e_func_135062263(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("1387955d-c3e1-5aab-6954-7b61cb5c6487");

}

void _activation_check_proc_0e_func_1284744790(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_2)
{
	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_e = false;

	_activation_check_proc_0e_func_346366447(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_5);
}

void _activation_check_proc_0e_func_346366447(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_5)
{
	if(! _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_0 = false;

}

void _activation_check_proc_0e_func_1220187402(int& _activatnvar_confusing_int_7, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_7 <<= _activatnvar_confusing_int_0;

}

void _activation_check_proc_0e_func_388363217(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[10] = _activatnvar_name_digest[10];
}

void _activation_check_proc_0e_func_1431660297(int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

}

void _activation_check_proc_0e_func_865512799(U8& _activatnvar_confusing_U8_e, int& _activatnvar_confusing_int_f, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_chararray_7[0x9];

	_activation_check_proc_0e_func_1431660297(_activatnvar_confusing_int_f);
}

void _activation_check_proc_0e_func_1187716545(char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_char_c++;

}

void _activation_check_proc_0e_func_52049120(bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_1)
{
	if(_activatnvar_confusing_LLUUID_e.mData[0x6] == _activatnvar_confusing_U8_1) _activatnvar_confusing_bool_1 = false;

}

void _activation_check_proc_0e_func_1085852595(U8& _activatnvar_confusing_U8_0)
{
	_activatnvar_confusing_U8_0++;

}

void _activation_check_proc_0e_func_1188549045(LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e = LLUUID("2af73bad-9b10-eef4-8614-272f29503937");

}

void _activation_check_proc_0e_func_1701836261(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked, int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e >>= 0x8;

	/* inline */ _activation_check_proc_0e_func_892840293(_activatnvar_generic_iterator, _activatnvar_code, _activatnvar_fscked);
}

void _activation_check_proc_0e_func_950999690(char& _activatnvar_confusing_char_2, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_char_2 ^= _activatnvar_confusing_chararray_b[0xc];

}

void _activation_check_proc_0e_func_1660483023(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_e)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0e_func_1027884094(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1589765287(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	
	_activation_check_proc_0e_func_764564316(_activatnvar_name_digest, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_0e_func_764564316(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0.mData[0xc] ^= _activatnvar_name_digest[0xb];

}

void _activation_check_proc_0e_func_765577403(bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_4)
{
	if(! _activatnvar_confusing_bool_4) _activatnvar_confusing_bool_6 = true;

}

void _activation_check_proc_0e_func_1049746479(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, LLUUID& _activatnvar_section1)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0e_func_685423875(_activatnvar_section1, _activatnvar_section2, _activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_685423875(LLUUID& _activatnvar_section1, LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_493657665(U8& _activatnvar_confusing_U8_d, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_d &= _activatnvar_confusing_LLUUID_9.mData[0xd];

}

void _activation_check_proc_0e_func_1447383852(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0e_func_702337055(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_239931631(unsigned char* _activatnvar_name_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[9] = _activatnvar_name_digest[9];
}

void _activation_check_proc_0e_func_322823056(char& _activatnvar_confusing_char_5, int& _activatnvar_confusing_int_2, unsigned char* _activatnvar_confusing_chararray_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_confusing_int_2 &= 0xff;

	/* inline */ _activation_check_proc_0e_func_1451796510(_activatnvar_generic_iterator);
	/* inline */ _activation_check_proc_0e_func_547960596(_activatnvar_confusing_chararray_0, _activatnvar_confusing_char_5);
}

void _activation_check_proc_0e_func_217880699(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[9] = _activatnvar_fscked.mData[9];
}

void _activation_check_proc_0e_func_1980208030(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_lace, char& _activatnvar_confusing_char_3, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_confusing_char_3 = _activatnvar_combined_id.mData[0xb];

	_activatnvar_confusing_LLUUID_b.mData[0xd] ^= _activatnvar_lace.mData[0x7];

}

void _activation_check_proc_0e_func_715068676(int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_feat = _activatnvar_lace.mData[11];
	_activatnvar_generic_iterator = 8;
}

void _activation_check_proc_0e_func_1966864822(int& _activatnvar_confusing_int_c, int& _activatnvar_generic_iterator, char& _activatnvar_feat, LLUUID& _activatnvar_lace)
{
	_activatnvar_confusing_int_c &= 0xff;

	_activation_check_proc_0e_func_715068676(_activatnvar_generic_iterator, _activatnvar_feat, _activatnvar_lace);
}

void _activation_check_proc_0e_func_949050852(bool& _activatnvar_confusing_bool_6, U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_b)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_9 += _activatnvar_confusing_char_b;

}

void _activation_check_proc_0e_func_1375978174(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_a &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0e_func_384268850(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_3, int& _activatnvar_confusing_int_3, bool& _activatnvar_confusing_bool_5)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x3] == _activatnvar_confusing_U8_4) _activatnvar_confusing_bool_5 = false;

	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0e_func_734880015(unsigned char* _activatnvar_confusing_chararray_6, U8& _activatnvar_confusing_U8_f)
{
	_activatnvar_confusing_U8_f = _activatnvar_confusing_chararray_6[0x3];

}

void _activation_check_proc_0e_func_719043322(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0xf] = _activatnvar_confusing_LLUUID_e.mData[0x8];

}

void _activation_check_proc_0e_func_808686789(bool& _activatnvar_confusing_bool_e, char& _activatnvar_confusing_char_8, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] != _activatnvar_confusing_char_8) _activatnvar_confusing_bool_e = false;

}

void _activation_check_proc_0e_func_1421222431(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0e_func_237116645(LLUUID& _activatnvar_combined_id, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
	_activation_check_proc_0e_func_1388031007(_activatnvar_t0, _activatnvar_combined_id);
}

void _activation_check_proc_0e_func_1388031007(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[2];
}

void _activation_check_proc_0e_func_1599284398(U8& _activatnvar_confusing_U8_b, bool& _activatnvar_confusing_bool_d, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_b *= _activatnvar_confusing_U8_f;

}

void _activation_check_proc_0e_func_1046745736(int& _activatnvar_confusing_int_e, int& _activatnvar_confusing_int_4)
{
	_activatnvar_confusing_int_e &= _activatnvar_confusing_int_4;

}

void _activation_check_proc_0e_func_1254723007(char& _activatnvar_confusing_char_c, bool& _activatnvar_confusing_bool_c, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0x5] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0e_func_1706472185()
{
	
}

void _activation_check_proc_0e_func_1173387357(LLUUID& _activatnvar_secret, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0x4] |= _activatnvar_secret.mData[0x8];

}

void _activation_check_proc_0e_func_1487361918(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0e_func_226537124(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("158a8c24-e986-a284-e351-0c51ae21367c");

}

void _activation_check_proc_0e_func_1015435694(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 21; _activatnvar_strbuf_0[0] ^= 35; _activatnvar_strbuf_0[1] = 98; _activatnvar_strbuf_0[1] ^= 82; _activatnvar_strbuf_0[2] = 41; _activatnvar_strbuf_0[2] ^= 29; _activatnvar_strbuf_0[3] = 122; _activatnvar_strbuf_0[3] ^= 75; _activatnvar_strbuf_0[4] = 72; _activatnvar_strbuf_0[4] ^= 123; _activatnvar_strbuf_0[5] = 90; _activatnvar_strbuf_0[5] ^= 57; _activatnvar_strbuf_0[6] = 59; _activatnvar_strbuf_0[6] ^= 11; _activatnvar_strbuf_0[7] = 119; _activatnvar_strbuf_0[7] ^= 69; _activatnvar_strbuf_0[8] = 115; _activatnvar_strbuf_0[8] ^= 94; _activatnvar_strbuf_0[9] = 111; _activatnvar_strbuf_0[9] ^= 95; _activatnvar_strbuf_0[10] = 87; _activatnvar_strbuf_0[10] ^= 101; _activatnvar_strbuf_0[11] = 40; _activatnvar_strbuf_0[11] ^= 28; _activatnvar_strbuf_0[12] = 87; _activatnvar_strbuf_0[12] ^= 97; _activatnvar_strbuf_0[13] = 67; _activatnvar_strbuf_0[13] ^= 110; _activatnvar_strbuf_0[14] = 10; _activatnvar_strbuf_0[14] ^= 58; _activatnvar_strbuf_0[15] = 41; _activatnvar_strbuf_0[15] ^= 25; _activatnvar_strbuf_0[16] = 14; _activatnvar_strbuf_0[16] ^= 61; _activatnvar_strbuf_0[17] = 125; _activatnvar_strbuf_0[17] ^= 77; _activatnvar_strbuf_0[18] = 1; _activatnvar_strbuf_0[18] ^= 44; _activatnvar_strbuf_0[19] = 7; _activatnvar_strbuf_0[19] ^= 53; _activatnvar_strbuf_0[20] = 30; _activatnvar_strbuf_0[20] ^= 47; _activatnvar_strbuf_0[21] = 16; _activatnvar_strbuf_0[21] ^= 32; _activatnvar_strbuf_0[22] = 24; _activatnvar_strbuf_0[22] ^= 33; _activatnvar_strbuf_0[23] = 60; _activatnvar_strbuf_0[23] ^= 17; _activatnvar_strbuf_0[24] = 123; _activatnvar_strbuf_0[24] ^= 67; _activatnvar_strbuf_0[25] = 40; _activatnvar_strbuf_0[25] ^= 16; _activatnvar_strbuf_0[26] = 121; _activatnvar_strbuf_0[26] ^= 76; _activatnvar_strbuf_0[27] = 14; _activatnvar_strbuf_0[27] ^= 63; _activatnvar_strbuf_0[28] = 40; _activatnvar_strbuf_0[28] ^= 28; _activatnvar_strbuf_0[29] = 72; _activatnvar_strbuf_0[29] ^= 113; _activatnvar_strbuf_0[30] = 109; _activatnvar_strbuf_0[30] ^= 93; _activatnvar_strbuf_0[31] = 105; _activatnvar_strbuf_0[31] ^= 8; _activatnvar_strbuf_0[32] = 28; _activatnvar_strbuf_0[32] ^= 127; _activatnvar_strbuf_0[33] = 68; _activatnvar_strbuf_0[33] ^= 124; _activatnvar_strbuf_0[34] = 20; _activatnvar_strbuf_0[34] ^= 113; _activatnvar_strbuf_0[35] = 123; _activatnvar_strbuf_0[35] ^= 72; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0e_func_1879097322(U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_3 <<= 0x2;

}

void _activation_check_proc_0e_func_1265437937(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0e_func_482591673(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked)
{
	_activatnvar_lace.mData[11] = _activatnvar_fscked.mData[11];
}

void _activation_check_proc_0e_func_1382163001(LLUUID& _activatnvar_lace, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_4[0x5] *= _activatnvar_confusing_chararray_5[0xd];

	_activation_check_proc_0e_func_482591673(_activatnvar_lace, _activatnvar_fscked);
}

void _activation_check_proc_0e_func_1100959550(char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 |= 0xb;

}

void _activation_check_proc_0e_func_1902531945(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_0, U8& _activatnvar_confusing_U8_3, U8& _activatnvar_confusing_U8_2, char& _activatnvar_feat, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_0)
{
	if(  _activatnvar_confusing_bool_0) _activatnvar_confusing_U8_0 &= _activatnvar_confusing_U8_2;

	/* inline */ _activation_check_proc_0e_func_1821765401();
	/* inline */ _activation_check_proc_0e_func_211057362(_activatnvar_confusing_bool_8, _activatnvar_feat, _activatnvar_confusing_U8_3);
	_activation_check_proc_0e_func_1100959550(_activatnvar_confusing_char_0);
}

void _activation_check_proc_0e_func_52701194(LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_LLUUID_2.mData[0x7] ^= _activatnvar_confusing_chararray_9[0xb];

}

void _activation_check_proc_0e_func_758854622(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1964656595(int& _activatnvar_confusing_int_a, bool& _activatnvar_confusing_bool_8, unsigned char* _activatnvar_confusing_chararray_e, bool& _activatnvar_confusing_bool_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d.mData[0x9] *= _activatnvar_confusing_chararray_e[0x1];

	/* inline */ _activation_check_proc_0e_func_455390787(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_8);
	/* inline */ _activation_check_proc_0e_func_360480728(_activatnvar_confusing_int_a);
	/* inline */ _activation_check_proc_0e_func_102558687(_activatnvar_confusing_int_a);
}

void _activation_check_proc_0e_func_1116400855(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_chararray_d[0x3] ^= _activatnvar_confusing_LLUUID_2.mData[0x2];

}

void _activation_check_proc_0e_func_1581157150(unsigned char* _activatnvar_confusing_chararray_d, LLUUID& _activatnvar_confusing_LLUUID_2, unsigned char* _activatnvar_confusing_chararray_9, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_chararray_8[0x1] <<= _activatnvar_confusing_chararray_9[0x7];

	_activation_check_proc_0e_func_1116400855(_activatnvar_confusing_chararray_d, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0e_func_677051326(unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_chararray_7[0xc] += _activatnvar_confusing_chararray_2[0x2];

}

void _activation_check_proc_0e_func_1661121459(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xf] *= _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_0e_func_530053380(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 = 0x2;

	_activatnvar_confusing_int_2 &= 0xff;

}

void _activation_check_proc_0e_func_1817627925(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_confusing_int_0, int& _activatnvar_confusing_int_2, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_530053380(_activatnvar_confusing_int_2, _activatnvar_confusing_int_0);
}

void _activation_check_proc_0e_func_100486583(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_confusing_U8_6, U8& _activatnvar_confusing_U8_7, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_confusing_U8_7 = _activatnvar_confusing_U8_6;

	_activatnvar_confusing_U8_3 += 0xd;

	_activation_check_proc_0e_func_1403598097(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_3);
}

void _activation_check_proc_0e_func_1403598097(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_5 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0e_func_971364567(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 >>= 0x9;

}

void _activation_check_proc_0e_func_905185282(U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_U8_8 = 0xe;

}

void _activation_check_proc_0e_func_845957498(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1651390514(unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_845957498(_activatnvar_generic_iterator);
	_activation_check_proc_0e_func_905185282(_activatnvar_confusing_U8_8);
}

void _activation_check_proc_0e_func_1111716424(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_char_c <<= _activatnvar_confusing_chararray_5[0xe];

}

void _activation_check_proc_0e_func_512345321(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_4)
{
	if(_activatnvar_confusing_LLUUID_9.mData[0x7] == _activatnvar_pos) _activatnvar_confusing_bool_4 = false;

}

void _activation_check_proc_0e_func_1208869349(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7++;

}

void _activation_check_proc_0e_func_278612156(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_LLUUID_7.mData[0xb] *= _activatnvar_confusing_chararray_6[0x0];

}

void _activation_check_proc_0e_func_1329854350(unsigned char* _activatnvar_confusing_chararray_6, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_278612156(_activatnvar_confusing_LLUUID_7, _activatnvar_confusing_chararray_6);
}

void _activation_check_proc_0e_func_1407293846(U8& _activatnvar_confusing_U8_b, U8& _activatnvar_confusing_U8_7, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 |= 0x4;

	/* inline */ _activation_check_proc_0e_func_1849674979(_activatnvar_confusing_U8_b, _activatnvar_confusing_U8_7);
}

void _activation_check_proc_0e_func_1333889553(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_int_d += _activatnvar_confusing_int_f;

}

void _activation_check_proc_0e_func_1423431660(unsigned char* _activatnvar_confusing_chararray_7, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_chararray_7[0x3] += _activatnvar_confusing_LLUUID_8.mData[0x6];

}

void _activation_check_proc_0e_func_1654137899(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_2147097874(LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_e.mData[0x0] |= _activatnvar_confusing_chararray_0[0x3];

}

void _activation_check_proc_0e_func_1125801282(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_LLUUID_7 = _activatnvar_fscked;

}

void _activation_check_proc_0e_func_1354585744(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_0)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_bool_0 = true;

}

void _activation_check_proc_0e_func_589036420(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_149880558(LLUUID& _activatnvar_code, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1276036759(int& _activatnvar_confusing_int_f, int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_f <<= _activatnvar_confusing_int_9;

}

void _activation_check_proc_0e_func_350540832(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[4];
}

void _activation_check_proc_0e_func_1396055181(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_6)
{
	_activatnvar_confusing_bool_6 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0e_func_196298589(U8& _activatnvar_confusing_U8_a, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2 <<= _activatnvar_confusing_U8_a;

}

void _activation_check_proc_0e_func_958989852(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_a, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("20495847-8450-07e4-8684-2aa894ce6bdc");

	_activation_check_proc_0e_func_196298589(_activatnvar_confusing_U8_a, _activatnvar_confusing_char_2);
}

void _activation_check_proc_0e_func_526536879(unsigned char* _activatnvar_ser_digest, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x0] *= _activatnvar_ser_digest[0x9];

}

void _activation_check_proc_0e_func_561836195(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_secret)
{
	_activatnvar_secret = LLUUID((std::string)_activatnvar_strbuf_0);
}

void _activation_check_proc_0e_func_437510145(LLUUID& _activatnvar_confusing_LLUUID_3, LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] |= _activatnvar_confusing_LLUUID_3.mData[0x3];

}

void _activation_check_proc_0e_func_1517950871(U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_0)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_U8_f &= _activatnvar_confusing_U8_0;

}

void _activation_check_proc_0e_func_1322083383(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_875598720(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_doaccount, char& _activatnvar_feat, int& _activatnvar_confusing_int_0)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0e_func_514061141(_activatnvar_confusing_chararray_a, _activatnvar_confusing_chararray_1);
	/* inline */ _activation_check_proc_0e_func_1600675821(_activatnvar_doaccount, _activatnvar_generic_iterator, _activatnvar_confusing_int_0, _activatnvar_feat, _activatnvar_lace);
	/* inline */ _activation_check_proc_0e_func_1205618409(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_265089010(char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_char_c >>= _activatnvar_confusing_chararray_7[0xa];

}

void _activation_check_proc_0e_func_1392913094(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_7)
{
	_activatnvar_confusing_bool_2 &= _activatnvar_confusing_bool_7;

}

void _activation_check_proc_0e_func_2019397590(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_2)
{
	
	_activation_check_proc_0e_func_625059473(_activatnvar_confusing_U8_1, _activatnvar_confusing_U8_2);
}

void _activation_check_proc_0e_func_625059473(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 *= _activatnvar_confusing_U8_1;

}

void _activation_check_proc_0e_func_1043324687(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_f)
{
	if(! _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_1 = true;

}

void _activation_check_proc_0e_func_209143749(char& _activatnvar_feat, int& _activatnvar_confusing_int_d, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_0e_func_1952805270(_activatnvar_confusing_int_d);
}

void _activation_check_proc_0e_func_321860618(unsigned char* _activatnvar_confusing_chararray_9, char& _activatnvar_confusing_char_f)
{
	_activatnvar_confusing_char_f *= _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_0e_func_1495482307(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_0e_func_680752627(LLUUID& _activatnvar_confusing_LLUUID_3, char& _activatnvar_confusing_char_d, int& _activatnvar_confusing_int_6)
{
	_activatnvar_confusing_int_6 &= 0xff;

	_activation_check_proc_0e_func_1495482307(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_char_d);
}

void _activation_check_proc_0e_func_928987409(char& _activatnvar_confusing_char_e, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_f.mData[0x6] &= _activatnvar_confusing_LLUUID_2.mData[0x3];

	/* inline */ _activation_check_proc_0e_func_673391089(_activatnvar_so, _activatnvar_confusing_char_e);
}

void _activation_check_proc_0e_func_1626052832(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_0e_func_1857571019(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_confusing_LLUUID_b, char* _activatnvar_strbuf_0, char& _activatnvar_confusing_char_4, U8& _activatnvar_confusing_U8_6, bool& _activatnvar_confusing_bool_a, bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_c, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_strbuf_0[0] = 12; _activatnvar_strbuf_0[0] ^= 53; _activatnvar_strbuf_0[1] = 14; _activatnvar_strbuf_0[1] ^= 62; _activatnvar_strbuf_0[2] = 13; _activatnvar_strbuf_0[2] ^= 62; _activatnvar_strbuf_0[3] = 105; _activatnvar_strbuf_0[3] ^= 93; _activatnvar_strbuf_0[4] = 22; _activatnvar_strbuf_0[4] ^= 116; _activatnvar_strbuf_0[5] = 37; _activatnvar_strbuf_0[5] ^= 65; _activatnvar_strbuf_0[6] = 96; _activatnvar_strbuf_0[6] ^= 85; _activatnvar_strbuf_0[7] = 84; _activatnvar_strbuf_0[7] ^= 99; _activatnvar_strbuf_0[8] = 99; _activatnvar_strbuf_0[8] ^= 78; _activatnvar_strbuf_0[9] = 79; _activatnvar_strbuf_0[9] ^= 45; _activatnvar_strbuf_0[10] = 45; _activatnvar_strbuf_0[10] ^= 26; _activatnvar_strbuf_0[11] = 45; _activatnvar_strbuf_0[11] ^= 73; _activatnvar_strbuf_0[12] = 31; _activatnvar_strbuf_0[12] ^= 39; _activatnvar_strbuf_0[13] = 73; _activatnvar_strbuf_0[13] ^= 100; _activatnvar_strbuf_0[14] = 78; _activatnvar_strbuf_0[14] ^= 122; _activatnvar_strbuf_0[15] = 70; _activatnvar_strbuf_0[15] ^= 37; _activatnvar_strbuf_0[16] = 65; _activatnvar_strbuf_0[16] ^= 35; _activatnvar_strbuf_0[17] = 61; _activatnvar_strbuf_0[17] ^= 95; _activatnvar_strbuf_0[18] = 15; _activatnvar_strbuf_0[18] ^= 34; _activatnvar_strbuf_0[19] = 96; _activatnvar_strbuf_0[19] ^= 88; _activatnvar_strbuf_0[20] = 115; _activatnvar_strbuf_0[20] ^= 22; _activatnvar_strbuf_0[21] = 17; _activatnvar_strbuf_0[21] ^= 115; _activatnvar_strbuf_0[22] = 86; _activatnvar_strbuf_0[22] ^= 48; _activatnvar_strbuf_0[23] = 61; _activatnvar_strbuf_0[23] ^= 16; _activatnvar_strbuf_0[24] = 70; _activatnvar_strbuf_0[24] ^= 114; _activatnvar_strbuf_0[25] = 110; _activatnvar_strbuf_0[25] ^= 88; _activatnvar_strbuf_0[26] = 38; _activatnvar_strbuf_0[26] ^= 19; _activatnvar_strbuf_0[27] = 79; _activatnvar_strbuf_0[27] ^= 44; _activatnvar_strbuf_0[28] = 108; _activatnvar_strbuf_0[28] ^= 92; _activatnvar_strbuf_0[29] = 86; _activatnvar_strbuf_0[29] ^= 101; _activatnvar_strbuf_0[30] = 96; _activatnvar_strbuf_0[30] ^= 3; _activatnvar_strbuf_0[31] = 102; _activatnvar_strbuf_0[31] ^= 84; _activatnvar_strbuf_0[32] = 9; _activatnvar_strbuf_0[32] ^= 56; _activatnvar_strbuf_0[33] = 126; _activatnvar_strbuf_0[33] ^= 31; _activatnvar_strbuf_0[34] = 107; _activatnvar_strbuf_0[34] ^= 15; _activatnvar_strbuf_0[35] = 14; _activatnvar_strbuf_0[35] ^= 59; _activatnvar_strbuf_0[36] = 0;
	if(_activatnvar_confusing_LLUUID_b.mData[0xb] == _activatnvar_confusing_char_c) _activatnvar_confusing_bool_2 = false;

	_activation_check_proc_0e_func_615177513(_activatnvar_confusing_chararray_4, _activatnvar_mac_digest);
	/* inline */ _activation_check_proc_0e_func_526437084(_activatnvar_confusing_U8_6, _activatnvar_confusing_bool_a, _activatnvar_confusing_char_4);
}

void _activation_check_proc_0e_func_615177513(unsigned char* _activatnvar_confusing_chararray_4, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_chararray_4[0xb] ^= _activatnvar_mac_digest[0x2];

}

void _activation_check_proc_0e_func_193784865(LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_confusing_U8_9)
{
	_activatnvar_confusing_U8_9 |= _activatnvar_confusing_LLUUID_f.mData[0x5];

}

void _activation_check_proc_0e_func_975970004(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_f, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_char_9++;

	_activatnvar_confusing_LLUUID_d = LLUUID("73beb101-371f-5f67-c025-ee1bc64dd4b0");

	_activation_check_proc_0e_func_193784865(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_U8_9);
}

void _activation_check_proc_0e_func_266076583()
{
	
}

void _activation_check_proc_0e_func_240727900(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_so)
{
	_activatnvar_confusing_LLUUID_2.mData[0x8] <<= _activatnvar_so.mData[0x4];

	/* inline */ _activation_check_proc_0e_func_1724046368(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_0e_func_632412082(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_int_1 &= 0xff;

	_activatnvar_confusing_LLUUID_b = LLUUID("01325f32-1df2-c591-547e-fe605fcd00e1");

	_activation_check_proc_0e_func_1485721412(_activatnvar_confusing_chararray_a, _activatnvar_confusing_LLUUID_7);
}

void _activation_check_proc_0e_func_1485721412(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_7)
{
	_activatnvar_confusing_chararray_a[0x7] >>= _activatnvar_confusing_LLUUID_7.mData[0x2];

}

void _activation_check_proc_0e_func_226415293(LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_6 = _activatnvar_fscked;

	_activation_check_proc_0e_func_277442911(_activatnvar_confusing_LLUUID_b);
}

void _activation_check_proc_0e_func_277442911(LLUUID& _activatnvar_confusing_LLUUID_b)
{
	_activatnvar_confusing_LLUUID_b = LLUUID("754b8868-0d70-2262-7001-7731df7f9739");

}

void _activation_check_proc_0e_func_1262500551(unsigned char* _activatnvar_confusing_chararray_a, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3.mData[0xa] *= _activatnvar_confusing_chararray_a[0x6];

}

void _activation_check_proc_0e_func_1649470446(int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_230092690(_activatnvar_confusing_int_0);
}

void _activation_check_proc_0e_func_230092690(int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_0 &= 0xff;

}

void _activation_check_proc_0e_func_1426328801(int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1++;

}

void _activation_check_proc_0e_func_903006329(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 4;
}

void _activation_check_proc_0e_func_1195159065(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_830891285(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_496597183(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_8)
{
	_activatnvar_confusing_char_9 <<= _activatnvar_confusing_U8_8;

}

void _activation_check_proc_0e_func_1360346237(char& _activatnvar_confusing_char_9, U8& _activatnvar_confusing_U8_8, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_b += 0xb;

	_activation_check_proc_0e_func_496597183(_activatnvar_confusing_char_9, _activatnvar_confusing_U8_8);
}

void _activation_check_proc_0e_func_1992600052(unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_confusing_chararray_2)
{
	_activatnvar_confusing_chararray_2[0xd] &= _activatnvar_confusing_chararray_c[0x7];

}

void _activation_check_proc_0e_func_34171689(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5 &= 0xff;

}

void _activation_check_proc_0e_func_459468775(LLUUID& _activatnvar_lace, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_fscked, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] = _activatnvar_fscked.mData[_activatnvar_generic_iterator];
	_activation_check_proc_0e_func_34171689(_activatnvar_confusing_int_5);
}

void _activation_check_proc_0e_func_1212683265(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_f &= 0xff;

	_activation_check_proc_0e_func_677871512(_activatnvar_combined_id, _activatnvar_mac_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_677871512(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1024058418(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_name_digest)
{
	_activatnvar_combined_id.mData[14] = _activatnvar_name_digest[14];
}

void _activation_check_proc_0e_func_1497421506(bool& _activatnvar_confusing_bool_1, U8& _activatnvar_t0, bool& _activatnvar_confusing_bool_5)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_5;

	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0e_func_1404955996(U8& _activatnvar_pos, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[7];
}

void _activation_check_proc_0e_func_917275037(U8& _activatnvar_confusing_U8_4, bool& _activatnvar_confusing_bool_6)
{
	if(! _activatnvar_confusing_bool_6) _activatnvar_confusing_U8_4 = 0xf;

}

void _activation_check_proc_0e_func_1321045321()
{
	
}

void _activation_check_proc_0e_func_1226670666(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_LLUUID_7.mData[0x4] = _activatnvar_confusing_chararray_3[0xb];

}

void _activation_check_proc_0e_func_1076971227(LLUUID& _activatnvar_confusing_LLUUID_c)
{
	_activatnvar_confusing_LLUUID_c = LLUUID("852c5ef9-db24-a90a-97ec-68d52d582445");

}

void _activation_check_proc_0e_func_704127174(bool& _activatnvar_confusing_bool_c, bool& _activatnvar_generic_bool_0)
{
	if(! _activatnvar_generic_bool_0) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0e_func_526124920(int& _activatnvar_confusing_int_2, int& _activatnvar_confusing_int_1)
{
	_activatnvar_confusing_int_1 <<= _activatnvar_confusing_int_2;

}

void _activation_check_proc_0e_func_176311154(bool& _activatnvar_confusing_bool_d, LLUUID& _activatnvar_code, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_1, U8& _activatnvar_confusing_U8_c, int& _activatnvar_confusing_int_2)
{
	if(  _activatnvar_confusing_bool_d) _activatnvar_confusing_U8_c >>= 0x5;

	/* inline */ _activation_check_proc_0e_func_2021394054(_activatnvar_confusing_LLUUID_f, _activatnvar_code);
	_activation_check_proc_0e_func_526124920(_activatnvar_confusing_int_2, _activatnvar_confusing_int_1);
}

void _activation_check_proc_0e_func_944876586(U8& _activatnvar_confusing_U8_2, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_U8_2 &= _activatnvar_confusing_chararray_9[0xf];

}

void _activation_check_proc_0e_func_1459875171(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a++;

}

void _activation_check_proc_0e_func_444931541(char& _activatnvar_confusing_char_3, char& _activatnvar_confusing_char_0)
{
	_activatnvar_confusing_char_0 *= _activatnvar_confusing_char_3;

}

void _activation_check_proc_0e_func_1563816206(char& _activatnvar_confusing_char_0, char& _activatnvar_confusing_char_3, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0e_func_329259314(_activatnvar_confusing_chararray_3, _activatnvar_confusing_chararray_b);
	_activation_check_proc_0e_func_444931541(_activatnvar_confusing_char_3, _activatnvar_confusing_char_0);
}

void _activation_check_proc_0e_func_329259314(unsigned char* _activatnvar_confusing_chararray_3, unsigned char* _activatnvar_confusing_chararray_b)
{
	_activatnvar_confusing_chararray_3[0x2] >>= _activatnvar_confusing_chararray_b[0x1];

}

void _activation_check_proc_0e_func_1880648698(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_251318888(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 += _activatnvar_confusing_int_1;

}

void _activation_check_proc_0e_func_244293325(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_8, LLUUID& _activatnvar_fscked, unsigned char* _activatnvar_confusing_chararray_0, U8& _activatnvar_confusing_U8_0, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 >>= _activatnvar_confusing_chararray_0[0x0];

	/* inline */ _activation_check_proc_0e_func_149561819(_activatnvar_confusing_U8_0, _activatnvar_fscked);
	_activation_check_proc_0e_func_251318888(_activatnvar_confusing_int_1, _activatnvar_confusing_int_8);
}

void _activation_check_proc_0e_func_947183781(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_0e_func_850344073(int& _activatnvar_confusing_int_c, LLUUID& _activatnvar_confusing_LLUUID_5, bool& _activatnvar_generic_bool_0, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
	_activation_check_proc_0e_func_271621634(_activatnvar_confusing_LLUUID_5, _activatnvar_confusing_LLUUID_d);
	_activation_check_proc_0e_func_1536765763(_activatnvar_confusing_int_c);
}

void _activation_check_proc_0e_func_1536765763(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c >>= 0x2;

}

void _activation_check_proc_0e_func_271621634(LLUUID& _activatnvar_confusing_LLUUID_5, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = _activatnvar_confusing_LLUUID_5;

}

void _activation_check_proc_0e_func_1008514547(char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b++;

}

void _activation_check_proc_0e_func_587022687(char& _activatnvar_confusing_char_7, char& _activatnvar_confusing_char_d, bool& _activatnvar_confusing_bool_2)
{
	if(! _activatnvar_confusing_bool_2) _activatnvar_confusing_char_d <<= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0e_func_965335782(U8& _activatnvar_confusing_U8_1, U8& _activatnvar_t0, int& _activatnvar_confusing_int_7, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_1, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_f, U8& _activatnvar_pos)
{
	_activatnvar_so.mData[_activatnvar_t0] = (U8)(_activatnvar_so.mData[_activatnvar_pos] / _activatnvar_so.mData[_activatnvar_t0]);
	_activation_check_proc_0e_func_257911378(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_f);
	_activation_check_proc_0e_func_1998726352(_activatnvar_confusing_int_1, _activatnvar_confusing_int_7);
	_activation_check_proc_0e_func_1675320984(_activatnvar_confusing_U8_1, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_0e_func_257911378(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_f.mData[0xc] |= _activatnvar_confusing_chararray_5[0x2];

}

void _activation_check_proc_0e_func_1998726352(int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_7)
{
	_activatnvar_confusing_int_1 ^= _activatnvar_confusing_int_7;

}

void _activation_check_proc_0e_func_1675320984(U8& _activatnvar_confusing_U8_1, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_U8_1 *= _activatnvar_confusing_chararray_5[0x3];

}

void _activation_check_proc_0e_func_360837087(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0e_func_115094005(U8& _activatnvar_t0, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_char_7 = _activatnvar_t0;

}

void _activation_check_proc_0e_func_1586094405(LLUUID& _activatnvar_lace, unsigned char* _activatnvar_confusing_chararray_0, unsigned char* _activatnvar_confusing_chararray_4, int& _activatnvar_generic_iterator, bool& _activatnvar_generic_bool_1, char& _activatnvar_feat)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
	/* inline */ _activation_check_proc_0e_func_2098940596(_activatnvar_confusing_chararray_4, _activatnvar_confusing_chararray_0);
}

void _activation_check_proc_0e_func_281850078(U8& _activatnvar_confusing_U8_a)
{
	_activatnvar_confusing_U8_a++;

}

void _activation_check_proc_0e_func_682164164(int& _activatnvar_confusing_int_c)
{
	_activatnvar_confusing_int_c &= 0xff;

}

void _activation_check_proc_0e_func_1538650448(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_so, LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_t0, U8& _activatnvar_pos)
{
	_activatnvar_t0 &= 7;
	_activation_check_proc_0e_func_1036481873(_activatnvar_t0);
	_activation_check_proc_0e_func_702251782(_activatnvar_so, _activatnvar_pos, _activatnvar_t0);
	_activation_check_proc_0e_func_188435813(_activatnvar_confusing_U8_3, _activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0e_func_702251782(LLUUID& _activatnvar_so, U8& _activatnvar_pos, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_pos] ^= _activatnvar_so.mData[_activatnvar_t0];
}

void _activation_check_proc_0e_func_1036481873(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0e_func_188435813(U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_U8_3 = _activatnvar_confusing_LLUUID_1.mData[0x2];

}

void _activation_check_proc_0e_func_1113242034(LLUUID& _activatnvar_confusing_LLUUID_9, char& _activatnvar_confusing_char_6)
{
	_activatnvar_confusing_char_6 = _activatnvar_confusing_LLUUID_9.mData[0x3];

}

void _activation_check_proc_0e_func_1891183412(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 += _activatnvar_confusing_int_9;

}

void _activation_check_proc_0e_func_233694819(U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_confusing_LLUUID_2, char& _activatnvar_confusing_char_d, unsigned char* _activatnvar_confusing_chararray_c, bool& _activatnvar_confusing_bool_2, LLUUID& _activatnvar_confusing_LLUUID_6)
{
	_activatnvar_confusing_U8_9 = _activatnvar_confusing_chararray_c[0x8];

	/* inline */ _activation_check_proc_0e_func_1600919432(_activatnvar_confusing_char_d, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_U8_9, _activatnvar_confusing_bool_2);
	_activation_check_proc_0e_func_1664380046(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_LLUUID_2);
}

void _activation_check_proc_0e_func_1664380046(LLUUID& _activatnvar_confusing_LLUUID_6, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_6 ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_0e_func_872383707(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_1, int& _activatnvar_confusing_int_1, int& _activatnvar_confusing_int_8, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_d, int& _activatnvar_confusing_int_7)
{
	_activatnvar_t0 >>= 4;
	_activation_check_proc_0e_func_1418485498(_activatnvar_confusing_int_8);
	_activation_check_proc_0e_func_708384410(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_d);
	/* inline */ _activation_check_proc_0e_func_1864086020(_activatnvar_confusing_int_7, _activatnvar_confusing_int_1);
	/* inline */ _activation_check_proc_0e_func_1332833924(_activatnvar_confusing_U8_1);
	/* inline */ _activation_check_proc_0e_func_546753049(_activatnvar_t0);
}

void _activation_check_proc_0e_func_708384410(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_1.mData[0x7] += _activatnvar_confusing_LLUUID_d.mData[0x2];

}

void _activation_check_proc_0e_func_1418485498(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0e_func_1707390054(unsigned char* _activatnvar_confusing_chararray_1, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_chararray_e[0x1] >>= _activatnvar_confusing_chararray_1[0xb];

}

void _activation_check_proc_0e_func_1742210022(LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_LLUUID_d = LLUUID("d026a076-9e46-3def-b711-f4cdef462764");

}

void _activation_check_proc_0e_func_1270918764(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_f = true;

}

void _activation_check_proc_0e_func_1792873480(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_536427360(LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_9 = LLUUID("4b895cb6-ed88-b0ae-577d-11105b9b2307");

}

void _activation_check_proc_0e_func_202303666(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_4, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_4.mData[0x2] += _activatnvar_confusing_chararray_0[0x6];

	_activation_check_proc_0e_func_536427360(_activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0e_func_1841876740(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_4 >>= _activatnvar_confusing_int_a;

}

void _activation_check_proc_0e_func_1653962925(int& _activatnvar_confusing_int_a, int& _activatnvar_confusing_int_4, bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	
	/* inline */ _activation_check_proc_0e_func_1374795464(_activatnvar_doaccount, _activatnvar_generic_bool_0);
	_activation_check_proc_0e_func_1841876740(_activatnvar_confusing_int_4, _activatnvar_confusing_int_a);
}

void _activation_check_proc_0e_func_1684529605(bool& _activatnvar_confusing_bool_4, U8& _activatnvar_confusing_U8_e, char& _activatnvar_confusing_char_7)
{
	if(  _activatnvar_confusing_bool_4) _activatnvar_confusing_U8_e *= _activatnvar_confusing_char_7;

}

void _activation_check_proc_0e_func_981266232(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 *= 0x3;

}

void _activation_check_proc_0e_func_2034878348(LLUUID& _activatnvar_section2, LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_868053731(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_confusing_LLUUID_8)
{
	_activatnvar_confusing_LLUUID_8.mData[0x5] *= _activatnvar_confusing_chararray_0[0x4];

}

void _activation_check_proc_0e_func_2004446208(LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_fscked)
{
	_activatnvar_fscked.mData[_activatnvar_generic_iterator] = _activatnvar_code.mData[_activatnvar_generic_iterator] ^ _activatnvar_fscked.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_88091743(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_U8_b <<= _activatnvar_confusing_chararray_4[0x9];

}

void _activation_check_proc_0e_func_752558429(int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a &= 0xff;

}

void _activation_check_proc_0e_func_1293322191(LLUUID& _activatnvar_confusing_LLUUID_7, LLUUID& _activatnvar_section1)
{
	_activatnvar_confusing_LLUUID_7.mData[0xa] += _activatnvar_section1.mData[0xc];

}

void _activation_check_proc_0e_func_280803338(int& _activatnvar_generic_iterator, unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1354533431(LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_LLUUID_2 = LLUUID("3c17f32e-104e-8578-2277-4329dca3a581");

}

void _activation_check_proc_0e_func_1453843180(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_mac_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_958432915(int& _activatnvar_confusing_int_4, int& _activatnvar_confusing_int_f)
{
	_activatnvar_confusing_int_4 &= _activatnvar_confusing_int_f;

}

void _activation_check_proc_0e_func_1661291691(LLUUID& _activatnvar_confusing_LLUUID_0, unsigned char* _activatnvar_confusing_chararray_c)
{
	_activatnvar_confusing_chararray_c[0xc] = _activatnvar_confusing_LLUUID_0.mData[0xd];

}

void _activation_check_proc_0e_func_2058331425(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_d)
{
	_activatnvar_confusing_LLUUID_f ^= _activatnvar_confusing_LLUUID_1;

	_activatnvar_confusing_int_d &= 0xff;

	/* inline */ _activation_check_proc_0e_func_482523595(_activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_976679142(LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_3 = _activatnvar_confusing_LLUUID_3;

}

void _activation_check_proc_0e_func_1130818984(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_ser_digest, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator] = _activatnvar_ser_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_1069790165(LLUUID& _activatnvar_combined_id, bool& _activatnvar_confusing_bool_b, int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_ser_digest)
{
	if(! _activatnvar_confusing_bool_9) _activatnvar_confusing_bool_b = true;

	_activation_check_proc_0e_func_1130818984(_activatnvar_combined_id, _activatnvar_ser_digest, _activatnvar_generic_iterator);
}

void _activation_check_proc_0e_func_106755319(LLUUID& _activatnvar_confusing_LLUUID_4, U8& _activatnvar_pos, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b, char& _activatnvar_confusing_char_c, char& _activatnvar_confusing_char_1)
{
	if(  _activatnvar_confusing_bool_b) _activatnvar_confusing_char_c &= _activatnvar_confusing_char_1;

	/* inline */ _activation_check_proc_0e_func_1079950510(_activatnvar_confusing_bool_8, _activatnvar_pos, _activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0e_func_355880810(int& _activatnvar_confusing_int_9, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0e_func_1926422298(_activatnvar_confusing_int_9);
}

void _activation_check_proc_0e_func_393930409(LLUUID& _activatnvar_confusing_LLUUID_a, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_a.mData[0x2] ^= _activatnvar_confusing_LLUUID_0.mData[0xf];

}

void _activation_check_proc_0e_func_1167541009(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_LLUUID_7.mData[0x8] |= _activatnvar_confusing_chararray_d[0x5];

}

void _activation_check_proc_0e_func_1658575277(U8& _activatnvar_pos, U8& _activatnvar_t1, LLUUID& _activatnvar_so, int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

	/* inline */ _activation_check_proc_0e_func_437321277(_activatnvar_so, _activatnvar_pos, _activatnvar_t1);
}

void _activation_check_proc_0e_func_790966913(LLUUID& _activatnvar_confusing_LLUUID_5)
{
	_activatnvar_confusing_LLUUID_5 = LLUUID("d559df6d-e82d-3d08-33bf-5f4fec53e39c");

}

void _activation_check_proc_0e_func_856373504(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1198730136(U8& _activatnvar_confusing_U8_7)
{
	_activatnvar_confusing_U8_7 >>= 0xa;

}

void _activation_check_proc_0e_func_64190397(unsigned char* _activatnvar_mac_digest, LLUUID& _activatnvar_combined_id, int& _activatnvar_generic_iterator)
{
	_activatnvar_combined_id.mData[_activatnvar_generic_iterator]  ^= _activatnvar_mac_digest[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_935796092(U8& _activatnvar_t0, char& _activatnvar_confusing_char_f, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_char_f += _activatnvar_t0;

}

void _activation_check_proc_0e_func_554499186(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0e_func_1527312459()
{
	
}

void _activation_check_proc_0e_func_470265050(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_f)
{
	if(  _activatnvar_confusing_bool_f) _activatnvar_confusing_bool_7 = false;

}

void _activation_check_proc_0e_func_1484378486()
{
	
}

void _activation_check_proc_0e_func_1476344659(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 12;
}

void _activation_check_proc_0e_func_813299208(LLUUID& _activatnvar_confusing_LLUUID_8, char& _activatnvar_confusing_char_b)
{
	_activatnvar_confusing_char_b |= _activatnvar_confusing_LLUUID_8.mData[0x4];

}

void _activation_check_proc_0e_func_1629952313(U8& _activatnvar_confusing_U8_1, char& _activatnvar_confusing_char_c)
{
	_activatnvar_confusing_U8_1 ^= _activatnvar_confusing_char_c;

}

void _activation_check_proc_0e_func_1670095452(LLUUID& _activatnvar_confusing_LLUUID_6, int& _activatnvar_confusing_int_e, LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_2, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_7)
{
	_activatnvar_confusing_U8_4 = _activatnvar_confusing_LLUUID_8.mData[0x2];

	_activation_check_proc_0e_func_1215069271(_activatnvar_confusing_int_e);
	/* inline */ _activation_check_proc_0e_func_1642720611(_activatnvar_confusing_LLUUID_6, _activatnvar_confusing_char_7, _activatnvar_confusing_bool_2);
}

void _activation_check_proc_0e_func_1215069271(int& _activatnvar_confusing_int_e)
{
	_activatnvar_confusing_int_e &= 0xff;

}

void _activation_check_proc_0e_func_949349360(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_1 &= _activatnvar_confusing_bool_a;

}

void _activation_check_proc_0e_func_2072456251(bool& _activatnvar_confusing_bool_2, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_9, unsigned char* _activatnvar_confusing_chararray_5, U8& _activatnvar_confusing_U8_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("66956188-c343-3f62-5d10-430e8e4e904b");

	if(  _activatnvar_confusing_bool_2) _activatnvar_confusing_bool_9 = _activatnvar_confusing_bool_6;

	_activatnvar_confusing_U8_8 |= _activatnvar_confusing_chararray_5[0xa];

}

void _activation_check_proc_0e_func_1122690653(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_6, bool& _activatnvar_confusing_bool_1)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_6 = _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0e_func_1675949739(int& _activatnvar_confusing_int_8, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_8 = _activatnvar_confusing_int_2;

}

void _activation_check_proc_0e_func_1527358346(DWORD& _activatnvar_gvi_flags, DWORD& _activatnvar_serial, BOOL& _activatnvar_success)
{
	_activatnvar_success = GetVolumeInformation(L"C:\\", NULL, 0, &_activatnvar_serial, NULL, &_activatnvar_gvi_flags, NULL, 0);
	/* inline */ _activation_check_proc_0e_func_1614116251(_activatnvar_serial, _activatnvar_success);
}

void _activation_check_proc_0e_func_401549040(bool& _activatnvar_generic_bool_0, U8& _activatnvar_confusing_U8_3)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_U8_3 >>= 0xe;

}

void _activation_check_proc_0e_func_125297199(bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator, U8& _activatnvar_confusing_U8_3)
{
	_activatnvar_generic_iterator++;
	_activation_check_proc_0e_func_401549040(_activatnvar_generic_bool_0, _activatnvar_confusing_U8_3);
}

void _activation_check_proc_0e_func_2024507399(LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_fscked, LLUUID& _activatnvar_code, int& _activatnvar_generic_iterator, unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_secret)
{
	_activatnvar_confusing_chararray_2[0xc] ^= _activatnvar_secret.mData[0x4];

	/* inline */ _activation_check_proc_0e_func_1660155675(_activatnvar_generic_iterator, _activatnvar_fscked, _activatnvar_combined_id, _activatnvar_code);
}

void _activation_check_proc_0e_func_121050330(char* _activatnvar_strbuf_0, LLUUID& _activatnvar_code)
{
	_activatnvar_code = LLUUID(gSavedSettings.getString((std::string)_activatnvar_strbuf_0));
}

void _activation_check_proc_0e_func_367400916(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_3)
{
	_activatnvar_confusing_chararray_f[0x3] = _activatnvar_confusing_chararray_3[0xa];

}

void _activation_check_proc_0e_func_86186264()
{
	
}

void _activation_check_proc_0e_func_632995375()
{
	
}

void _activation_check_proc_0e_func_1672487131(char* _activatnvar_strbuf_0)
{
	_activatnvar_strbuf_0[0] = 79; _activatnvar_strbuf_0[0] ^= 122; _activatnvar_strbuf_0[1] = 101; _activatnvar_strbuf_0[1] ^= 81; _activatnvar_strbuf_0[2] = 17; _activatnvar_strbuf_0[2] ^= 33; _activatnvar_strbuf_0[3] = 82; _activatnvar_strbuf_0[3] ^= 96; _activatnvar_strbuf_0[4] = 115; _activatnvar_strbuf_0[4] ^= 64; _activatnvar_strbuf_0[5] = 31; _activatnvar_strbuf_0[5] ^= 47; _activatnvar_strbuf_0[6] = 90; _activatnvar_strbuf_0[6] ^= 98; _activatnvar_strbuf_0[7] = 109; _activatnvar_strbuf_0[7] ^= 93; _activatnvar_strbuf_0[8] = 55; _activatnvar_strbuf_0[8] ^= 26; _activatnvar_strbuf_0[9] = 54; _activatnvar_strbuf_0[9] ^= 6; _activatnvar_strbuf_0[10] = 119; _activatnvar_strbuf_0[10] ^= 71; _activatnvar_strbuf_0[11] = 20; _activatnvar_strbuf_0[11] ^= 44; _activatnvar_strbuf_0[12] = 91; _activatnvar_strbuf_0[12] ^= 106; _activatnvar_strbuf_0[13] = 7; _activatnvar_strbuf_0[13] ^= 42; _activatnvar_strbuf_0[14] = 113; _activatnvar_strbuf_0[14] ^= 65; _activatnvar_strbuf_0[15] = 61; _activatnvar_strbuf_0[15] ^= 15; _activatnvar_strbuf_0[16] = 107; _activatnvar_strbuf_0[16] ^= 91; _activatnvar_strbuf_0[17] = 24; _activatnvar_strbuf_0[17] ^= 32; _activatnvar_strbuf_0[18] = 58; _activatnvar_strbuf_0[18] ^= 23; _activatnvar_strbuf_0[19] = 29; _activatnvar_strbuf_0[19] ^= 45; _activatnvar_strbuf_0[20] = 9; _activatnvar_strbuf_0[20] ^= 109; _activatnvar_strbuf_0[21] = 10; _activatnvar_strbuf_0[21] ^= 58; _activatnvar_strbuf_0[22] = 111; _activatnvar_strbuf_0[22] ^= 12; _activatnvar_strbuf_0[23] = 60; _activatnvar_strbuf_0[23] ^= 17; _activatnvar_strbuf_0[24] = 51; _activatnvar_strbuf_0[24] ^= 3; _activatnvar_strbuf_0[25] = 87; _activatnvar_strbuf_0[25] ^= 101; _activatnvar_strbuf_0[26] = 63; _activatnvar_strbuf_0[26] ^= 11; _activatnvar_strbuf_0[27] = 7; _activatnvar_strbuf_0[27] ^= 100; _activatnvar_strbuf_0[28] = 105; _activatnvar_strbuf_0[28] ^= 81; _activatnvar_strbuf_0[29] = 33; _activatnvar_strbuf_0[29] ^= 25; _activatnvar_strbuf_0[30] = 113; _activatnvar_strbuf_0[30] ^= 67; _activatnvar_strbuf_0[31] = 52; _activatnvar_strbuf_0[31] ^= 1; _activatnvar_strbuf_0[32] = 108; _activatnvar_strbuf_0[32] ^= 84; _activatnvar_strbuf_0[33] = 6; _activatnvar_strbuf_0[33] ^= 55; _activatnvar_strbuf_0[34] = 76; _activatnvar_strbuf_0[34] ^= 121; _activatnvar_strbuf_0[35] = 98; _activatnvar_strbuf_0[35] ^= 83; _activatnvar_strbuf_0[36] = 0;
}

void _activation_check_proc_0e_func_704509058(char& _activatnvar_confusing_char_d, LLUUID& _activatnvar_confusing_LLUUID_f, int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 <<= 0x1;

	_activation_check_proc_0e_func_1752974054(_activatnvar_confusing_LLUUID_f, _activatnvar_confusing_char_d);
}

void _activation_check_proc_0e_func_1752974054(LLUUID& _activatnvar_confusing_LLUUID_f, char& _activatnvar_confusing_char_d)
{
	_activatnvar_confusing_char_d = _activatnvar_confusing_LLUUID_f.mData[0x1];

}

void _activation_check_proc_0e_func_783742753(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_5)
{
	_activatnvar_confusing_chararray_5[0xe] = _activatnvar_name_digest[0x7];

}

void _activation_check_proc_0e_func_224751034(unsigned char* _activatnvar_name_digest, unsigned char* _activatnvar_confusing_chararray_5, int& _activatnvar_confusing_int_a)
{
	_activatnvar_confusing_int_a += 0x1;

	_activation_check_proc_0e_func_783742753(_activatnvar_name_digest, _activatnvar_confusing_chararray_5);
}

void _activation_check_proc_0e_func_1293166315(int& _activatnvar_confusing_int_8)
{
	_activatnvar_confusing_int_8 &= 0xff;

}

void _activation_check_proc_0e_func_1537385419(LLUUID& _activatnvar_confusing_LLUUID_9, LLUUID& _activatnvar_confusing_LLUUID_f)
{
	_activatnvar_confusing_LLUUID_9 = _activatnvar_confusing_LLUUID_f;

}

void _activation_check_proc_0e_func_237769207(bool& _activatnvar_confusing_bool_d, bool& _activatnvar_confusing_bool_2)
{
	_activatnvar_confusing_bool_d &= _activatnvar_confusing_bool_2;

}

void _activation_check_proc_0e_func_1406960352(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_1367242617(char& _activatnvar_confusing_char_4, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_confusing_char_4 *= _activatnvar_confusing_chararray_9[0x6];

}

void _activation_check_proc_0e_func_2126233956(U8& _activatnvar_pos, char& _activatnvar_confusing_char_4, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_9)
{
	_activatnvar_pos = _activatnvar_combined_id.mData[15];
	_activation_check_proc_0e_func_1367242617(_activatnvar_confusing_char_4, _activatnvar_confusing_chararray_9);
}

void _activation_check_proc_0e_func_1221779097(U8& _activatnvar_confusing_U8_4)
{
	_activatnvar_confusing_U8_4++;

}

void _activation_check_proc_0e_func_504442381(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_section2)
{
	_activatnvar_lace.mData[_activatnvar_generic_iterator] ^= _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_161302648(int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section2, bool& _activatnvar_confusing_bool_b, U8& _activatnvar_confusing_U8_9, LLUUID& _activatnvar_lace, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x0] != _activatnvar_confusing_U8_9) _activatnvar_confusing_bool_b = false;

	_activation_check_proc_0e_func_504442381(_activatnvar_generic_iterator, _activatnvar_lace, _activatnvar_section2);
}

void _activation_check_proc_0e_func_260878855(U8& _activatnvar_confusing_U8_f, LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_U8_f |= _activatnvar_confusing_LLUUID_0.mData[0x0];

}

void _activation_check_proc_0e_func_1964513439(LLUUID& _activatnvar_confusing_LLUUID_0, bool& _activatnvar_confusing_bool_f, U8& _activatnvar_confusing_U8_f, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_bool_f &= _activatnvar_confusing_bool_a;

	_activation_check_proc_0e_func_260878855(_activatnvar_confusing_U8_f, _activatnvar_confusing_LLUUID_0);
}

void _activation_check_proc_0e_func_2030658580(bool& _activatnvar_confusing_bool_0, LLUUID& _activatnvar_confusing_LLUUID_a, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_8)
{
	_activatnvar_confusing_LLUUID_5.mData[0x1] &= _activatnvar_confusing_chararray_8[0x6];

	_activation_check_proc_0e_func_1159246254(_activatnvar_confusing_bool_0, _activatnvar_confusing_bool_4);
	_activation_check_proc_0e_func_226854699(_activatnvar_confusing_LLUUID_a);
}

void _activation_check_proc_0e_func_1159246254(bool& _activatnvar_confusing_bool_0, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_0;

}

void _activation_check_proc_0e_func_226854699(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("f124db6d-0e99-ef82-6a5f-127f8195f363");

}

void _activation_check_proc_0e_func_1765455933(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_5 >>= _activatnvar_confusing_int_b;

}

void _activation_check_proc_0e_func_1047084389(int& _activatnvar_confusing_int_b, LLUUID& _activatnvar_confusing_LLUUID_c, int& _activatnvar_confusing_int_5, U8& _activatnvar_confusing_U8_6)
{
	_activatnvar_confusing_U8_6 = _activatnvar_confusing_LLUUID_c.mData[0xd];

	_activation_check_proc_0e_func_1765455933(_activatnvar_confusing_int_5, _activatnvar_confusing_int_b);
	/* inline */ _activation_check_proc_0e_func_1810546262();
}

void _activation_check_proc_0e_func_2144342401(bool& _activatnvar_generic_bool_1, bool& _activatnvar_generic_bool_0)
{
	
	/* inline */ _activation_check_proc_0e_func_2007467923(_activatnvar_generic_bool_1, _activatnvar_generic_bool_0);
}

void _activation_check_proc_0e_func_155199040(LLMD5*& _activatnvar_mmd5)
{
	_activatnvar_mmd5 = new LLMD5(gMACAddress, MAC_ADDRESS_BYTES);
}

void _activation_check_proc_0e_func_241908266(bool& _activatnvar_confusing_bool_1, bool& _activatnvar_confusing_bool_8, bool& _activatnvar_confusing_bool_b)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_bool_8 = _activatnvar_confusing_bool_b;

}

void _activation_check_proc_0e_func_1343576083(bool& _activatnvar_confusing_bool_8, char& _activatnvar_confusing_char_b, unsigned char* _activatnvar_confusing_chararray_b, bool& _activatnvar_confusing_bool_b, bool& _activatnvar_confusing_bool_1)
{
	
	/* inline */ _activation_check_proc_0e_func_1904352277(_activatnvar_confusing_char_b, _activatnvar_confusing_chararray_b);
	_activation_check_proc_0e_func_241908266(_activatnvar_confusing_bool_1, _activatnvar_confusing_bool_8, _activatnvar_confusing_bool_b);
}

void _activation_check_proc_0e_func_1195685999(unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_mac_digest, U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_U8_b += _activatnvar_confusing_chararray_8[0xe];

	_activatnvar_confusing_chararray_a[0x3] <<= _activatnvar_mac_digest[0xa];

}

void _activation_check_proc_0e_func_1232747247(U8& _activatnvar_confusing_U8_b, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_8, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_6, unsigned char* _activatnvar_mac_digest)
{
	_activatnvar_confusing_LLUUID_6.mData[0x3] *= _activatnvar_confusing_chararray_e[0xc];

	_activation_check_proc_0e_func_1195685999(_activatnvar_confusing_chararray_8, _activatnvar_mac_digest, _activatnvar_confusing_U8_b, _activatnvar_confusing_chararray_a);
}

void _activation_check_proc_0e_func_1290486139(unsigned char* _activatnvar_confusing_chararray_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e.mData[0xe] *= _activatnvar_confusing_chararray_2[0x8];

}

void _activation_check_proc_0e_func_200499914(unsigned char* _activatnvar_confusing_chararray_f, unsigned char* _activatnvar_confusing_chararray_d, char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_chararray_d[0x3] <<= _activatnvar_confusing_LLUUID_1.mData[0xc];

	_activatnvar_confusing_int_5 &= 0xff;

	_activatnvar_confusing_char_f += _activatnvar_confusing_chararray_f[0x6];

}

void _activation_check_proc_0e_func_1993212701(LLUUID& _activatnvar_confusing_LLUUID_1, U8& _activatnvar_confusing_U8_e)
{
	_activatnvar_confusing_U8_e |= _activatnvar_confusing_LLUUID_1.mData[0xb];

}

void _activation_check_proc_0e_func_245925851(char& _activatnvar_confusing_char_f, int& _activatnvar_confusing_int_5, LLUUID& _activatnvar_confusing_LLUUID_1, unsigned char* _activatnvar_confusing_chararray_d, unsigned char* _activatnvar_confusing_chararray_2, unsigned char* _activatnvar_confusing_chararray_f, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_confusing_U8_e, LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_e)
{
	_activatnvar_confusing_LLUUID_7.mData[0x8] = _activatnvar_confusing_chararray_e[0x3];

	_activation_check_proc_0e_func_200499914(_activatnvar_confusing_chararray_f, _activatnvar_confusing_chararray_d, _activatnvar_confusing_char_f, _activatnvar_confusing_int_5, _activatnvar_confusing_LLUUID_1);
	_activation_check_proc_0e_func_1993212701(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_U8_e);
	_activation_check_proc_0e_func_1290486139(_activatnvar_confusing_chararray_2, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0e_func_1147226918(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_combined_id)
{
	
	_activatnvar_confusing_chararray_0[0x5] = _activatnvar_combined_id.mData[0x6];

}

void _activation_check_proc_0e_func_1888861263(unsigned char* _activatnvar_confusing_chararray_0, LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_a, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_chararray_a[0x7] += _activatnvar_confusing_chararray_6[0xf];

	_activation_check_proc_0e_func_1147226918(_activatnvar_confusing_chararray_0, _activatnvar_combined_id);
}

void _activation_check_proc_0e_func_968461954(bool& _activatnvar_confusing_bool_3, bool& _activatnvar_confusing_bool_4)
{
	_activatnvar_confusing_bool_4 &= _activatnvar_confusing_bool_3;

}

void _activation_check_proc_0e_func_1329217315(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_c = _activatnvar_confusing_LLUUID_1;

}

void _activation_check_proc_0e_func_1757731892(char& _activatnvar_confusing_char_0, unsigned char* _activatnvar_confusing_chararray_6)
{
	_activatnvar_confusing_char_0 = _activatnvar_confusing_chararray_6[0xf];

}

void _activation_check_proc_0e_func_1363525212(unsigned char* _activatnvar_confusing_chararray_c, LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4.mData[0x4] += _activatnvar_confusing_chararray_c[0x8];

}

void _activation_check_proc_0e_func_266969940(unsigned char* _activatnvar_name_digest, LLMD5*& _activatnvar_nmd5)
{
	_activatnvar_nmd5->raw_digest(_activatnvar_name_digest);
}

void _activation_check_proc_0e_func_926623075(U8& _activatnvar_pos)
{
	_activatnvar_pos &= 7;
}

void _activation_check_proc_0e_func_1510073541(U8& _activatnvar_pos, char& _activatnvar_confusing_char_9, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	_activatnvar_confusing_char_9 = _activatnvar_confusing_LLUUID_2.mData[0x1];

	_activation_check_proc_0e_func_926623075(_activatnvar_pos);
}

void _activation_check_proc_0e_func_104176721(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_1, bool& _activatnvar_confusing_bool_1, U8& _activatnvar_confusing_U8_9)
{
	if(  _activatnvar_confusing_bool_1) _activatnvar_confusing_U8_9 &= 0x0;

	_activation_check_proc_0e_func_260304461(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_U8_1);
}

void _activation_check_proc_0e_func_260304461(LLUUID& _activatnvar_confusing_LLUUID_3, U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1 &= _activatnvar_confusing_LLUUID_3.mData[0xe];

}

void _activation_check_proc_0e_func_82898563(bool& _activatnvar_generic_bool_0, bool& _activatnvar_doaccount)
{
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
}

void _activation_check_proc_0e_func_1324300352(U8& _activatnvar_t0, U8& _activatnvar_t1)
{
	_activatnvar_t1 = (U8)(0xff << _activatnvar_t0);
}

void _activation_check_proc_0e_func_55394908(U8& _activatnvar_confusing_U8_8, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	if(_activatnvar_confusing_LLUUID_1.mData[0x7] == _activatnvar_confusing_U8_8) _activatnvar_confusing_bool_5 = false;

}

void _activation_check_proc_0e_func_1597781253(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_231508154(LLUUID& _activatnvar_lace, int& _activatnvar_generic_iterator, char& _activatnvar_feat, bool& _activatnvar_generic_bool_1)
{
	_activatnvar_generic_bool_1 = (_activatnvar_lace.mData[_activatnvar_generic_iterator] != _activatnvar_feat);
}

void _activation_check_proc_0e_func_719932594(LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a.mData[0x2] = _activatnvar_confusing_LLUUID_8.mData[0x3];

}

void _activation_check_proc_0e_func_2045122117(U8& _activatnvar_t0, char& _activatnvar_confusing_char_f)
{
	_activatnvar_t0 >>= 4;
	_activatnvar_confusing_char_f += 0x7;

}

void _activation_check_proc_0e_func_543076769(LLUUID& _activatnvar_confusing_LLUUID_5, unsigned char* _activatnvar_confusing_chararray_7)
{
	_activatnvar_confusing_LLUUID_5.mData[0x0] >>= _activatnvar_confusing_chararray_7[0xc];

}

void _activation_check_proc_0e_func_691775910(LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_LLUUID_e ^= _activatnvar_confusing_LLUUID_2;

}

void _activation_check_proc_0e_func_828322367(U8& _activatnvar_confusing_U8_9, char& _activatnvar_confusing_char_2)
{
	_activatnvar_confusing_char_2++;

	_activatnvar_confusing_U8_9++;

}

void _activation_check_proc_0e_func_1629959175(char& _activatnvar_confusing_char_2, U8& _activatnvar_confusing_U8_9, int& _activatnvar_confusing_int_7, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_e, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	_activatnvar_confusing_int_7 = 0x5;

	_activatnvar_confusing_LLUUID_e.mData[0x5] ^= _activatnvar_confusing_LLUUID_d.mData[0x4];

	_activation_check_proc_0e_func_828322367(_activatnvar_confusing_U8_9, _activatnvar_confusing_char_2);
	_activation_check_proc_0e_func_691775910(_activatnvar_confusing_LLUUID_2, _activatnvar_confusing_LLUUID_e);
}

void _activation_check_proc_0e_func_1462445368(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_440712720(U8& _activatnvar_confusing_U8_1)
{
	_activatnvar_confusing_U8_1++;

}

void _activation_check_proc_0e_func_524216802(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_secret)
{
	_activatnvar_section2.mData[_activatnvar_generic_iterator] |= _activatnvar_secret.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_976489262(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_e, U8& _activatnvar_pos)
{
	_activatnvar_pos |= 8;
	_activatnvar_confusing_chararray_5[0xd] += _activatnvar_confusing_LLUUID_e.mData[0xc];

}

void _activation_check_proc_0e_func_1351594973(unsigned char* _activatnvar_confusing_chararray_5, LLUUID& _activatnvar_confusing_LLUUID_e, unsigned char* _activatnvar_confusing_chararray_7, U8& _activatnvar_pos, unsigned char* _activatnvar_confusing_chararray_a)
{
	_activatnvar_confusing_chararray_a[0x2] *= _activatnvar_confusing_chararray_7[0x6];

	_activation_check_proc_0e_func_976489262(_activatnvar_confusing_chararray_5, _activatnvar_confusing_LLUUID_e, _activatnvar_pos);
}

void _activation_check_proc_0e_func_1119479338(bool& _activatnvar_generic_bool_0)
{
	if(_activatnvar_generic_bool_0) gAgent.cleanup();
}

void _activation_check_proc_0e_func_332074376(bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0e_func_388438451(LLUUID& _activatnvar_confusing_LLUUID_7, unsigned char* _activatnvar_confusing_chararray_a, bool& _activatnvar_generic_bool_0, bool& _activatnvar_confusing_bool_a)
{
	_activatnvar_confusing_chararray_a[0xf] |= _activatnvar_confusing_LLUUID_7.mData[0xe];

	_activation_check_proc_0e_func_332074376(_activatnvar_generic_bool_0, _activatnvar_confusing_bool_a);
}

void _activation_check_proc_0e_func_2034549018(int& _activatnvar_generic_iterator, bool& _activatnvar_confusing_bool_6, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_3)
{
	if(_activatnvar_confusing_LLUUID_c.mData[0xe] == _activatnvar_confusing_char_3) _activatnvar_confusing_bool_6 = true;

	_activatnvar_generic_iterator++;
}

void _activation_check_proc_0e_func_65284560(LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_6, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_so, char& _activatnvar_confusing_char_3, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d = _activatnvar_so.mData[0xe];

	_activation_check_proc_0e_func_2034549018(_activatnvar_generic_iterator, _activatnvar_confusing_bool_6, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_char_3);
}

void _activation_check_proc_0e_func_1357809214(LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_6, U8& _activatnvar_confusing_U8_2)
{
	_activatnvar_confusing_U8_2 = _activatnvar_confusing_LLUUID_6.mData[0x0];

	_activation_check_proc_0e_func_196722190(_activatnvar_confusing_LLUUID_1);
}

void _activation_check_proc_0e_func_196722190(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("72bdbe61-3f8b-882d-3f4e-38653d18daf3");

}

void _activation_check_proc_0e_func_1309776081(unsigned char* _activatnvar_confusing_chararray_5, unsigned char* _activatnvar_confusing_chararray_f)
{
	_activatnvar_confusing_chararray_f[0xa] |= _activatnvar_confusing_chararray_5[0xb];

}

void _activation_check_proc_0e_func_1352103969(LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_1 = LLUUID("c12e0b24-2389-0130-2cbc-5541862b8394");

}

void _activation_check_proc_0e_func_1357848758(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0e_func_1474398586(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_0)
{
	_activatnvar_confusing_LLUUID_8.mData[0x6] ^= _activatnvar_confusing_chararray_0[0x7];

}

void _activation_check_proc_0e_func_333408472(LLUUID& _activatnvar_confusing_LLUUID_a)
{
	_activatnvar_confusing_LLUUID_a = LLUUID("d4e541ad-7401-5958-c40a-2a2912f7cfe3");

}

void _activation_check_proc_0e_func_1782616763(bool& _activatnvar_confusing_bool_5, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_1)
{
	if(  _activatnvar_confusing_bool_5) _activatnvar_confusing_bool_1 = true;

	/* inline */ _activation_check_proc_0e_func_528674136(_activatnvar_t1);
}

void _activation_check_proc_0e_func_876462338(U8& _activatnvar_confusing_U8_e, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_confusing_U8_f)
{
	if(  _activatnvar_confusing_bool_3) _activatnvar_confusing_U8_f >>= _activatnvar_confusing_U8_e;

}

void _activation_check_proc_0e_func_29854389(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3 &= 0xff;

}

void _activation_check_proc_0e_func_820790597(bool& _activatnvar_doaccount, int& _activatnvar_confusing_int_3, bool& _activatnvar_generic_bool_0, int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator++;
	_activatnvar_generic_bool_0 = _activatnvar_doaccount;
	_activation_check_proc_0e_func_29854389(_activatnvar_confusing_int_3);
}

void _activation_check_proc_0e_func_350746377(LLUUID& _activatnvar_confusing_LLUUID_0)
{
	_activatnvar_confusing_LLUUID_0 = LLUUID("5900b6b7-1c8f-456a-4775-20dfa7f6d7ad");

}

void _activation_check_proc_0e_func_1003520494(LLUUID& _activatnvar_confusing_LLUUID_3, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0xe] == 0x5) _activatnvar_confusing_bool_a = false;

}

void _activation_check_proc_0e_func_69986170(int& _activatnvar_confusing_int_9, int& _activatnvar_confusing_int_b)
{
	_activatnvar_confusing_int_9 = _activatnvar_confusing_int_b;

}

void _activation_check_proc_0e_func_849440286(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_1)
{
	_activatnvar_confusing_bool_e &= _activatnvar_confusing_bool_1;

}

void _activation_check_proc_0e_func_222887779(unsigned char* _activatnvar_confusing_chararray_a, U8& _activatnvar_confusing_U8_d)
{
	_activatnvar_confusing_U8_d += _activatnvar_confusing_chararray_a[0x0];

}

void _activation_check_proc_0e_func_600507894(bool& _activatnvar_doaccount, char& _activatnvar_confusing_char_8)
{
	if(! _activatnvar_doaccount) _activatnvar_confusing_char_8 ^= 0x8;

}

void _activation_check_proc_0e_func_1820765888(U8& _activatnvar_confusing_U8_4, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_U8_4 &= _activatnvar_confusing_LLUUID_9.mData[0xd];

}

void _activation_check_proc_0e_func_1688392906(bool& _activatnvar_confusing_bool_9, bool& _activatnvar_confusing_bool_1, bool& _activatnvar_generic_bool_0)
{
	if(  _activatnvar_generic_bool_0) _activatnvar_confusing_bool_1 = _activatnvar_confusing_bool_9;

}

void _activation_check_proc_0e_func_1685876872(bool& _activatnvar_confusing_bool_7, bool& _activatnvar_confusing_bool_8)
{
	_activatnvar_confusing_bool_7 &= _activatnvar_confusing_bool_8;

}

void _activation_check_proc_0e_func_392753749(LLUUID& _activatnvar_confusing_LLUUID_9, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_t0, unsigned char* _activatnvar_confusing_chararray_e, unsigned char* _activatnvar_confusing_chararray_8, LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_ser_digest)
{
	_activatnvar_confusing_U8_e++;

	/* inline */ _activation_check_proc_0e_func_474384809(_activatnvar_ser_digest, _activatnvar_confusing_chararray_8);
	_activation_check_proc_0e_func_1884910076(_activatnvar_confusing_LLUUID_8, _activatnvar_confusing_chararray_e, _activatnvar_confusing_LLUUID_9);
	_activation_check_proc_0e_func_1396761912(_activatnvar_t0);
	/* inline */ _activation_check_proc_0e_func_1938566280(_activatnvar_t0);
}

void _activation_check_proc_0e_func_1884910076(LLUUID& _activatnvar_confusing_LLUUID_8, unsigned char* _activatnvar_confusing_chararray_e, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_8 = _activatnvar_confusing_LLUUID_8;

	_activatnvar_confusing_chararray_e[0xd] *= _activatnvar_confusing_LLUUID_9.mData[0x3];

}

void _activation_check_proc_0e_func_1396761912(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0e_func_1030932830(LLUUID& _activatnvar_confusing_LLUUID_b, LLUUID& _activatnvar_confusing_LLUUID_1)
{
	_activatnvar_confusing_LLUUID_b.mData[0xd] |= _activatnvar_confusing_LLUUID_1.mData[0xe];

}

void _activation_check_proc_0e_func_1142621264(LLUUID& _activatnvar_confusing_LLUUID_8, bool& _activatnvar_confusing_bool_a)
{
	if(_activatnvar_confusing_LLUUID_8.mData[0x9] != 0x2) _activatnvar_confusing_bool_a = true;

}

void _activation_check_proc_0e_func_2129017443(LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_combined_id, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_9)
{
	_activatnvar_confusing_LLUUID_2.mData[0xb] *= _activatnvar_combined_id.mData[0xc];

	/* inline */ _activation_check_proc_0e_func_778057902(_activatnvar_confusing_LLUUID_c, _activatnvar_confusing_LLUUID_9);
}

void _activation_check_proc_0e_func_279831129(int& _activatnvar_confusing_int_d, bool& _activatnvar_confusing_bool_0, U8& _activatnvar_confusing_U8_e, U8& _activatnvar_confusing_U8_3, LLUUID& _activatnvar_confusing_LLUUID_c, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_confusing_LLUUID_c.mData[0xb] = _activatnvar_confusing_LLUUID_3.mData[0x0];

	/* inline */ _activation_check_proc_0e_func_1073449659(_activatnvar_confusing_int_d);
	/* inline */ _activation_check_proc_0e_func_1400307716(_activatnvar_confusing_U8_3, _activatnvar_confusing_U8_e, _activatnvar_confusing_bool_0);
}

void _activation_check_proc_0e_func_1132465890(LLUUID& _activatnvar_section2, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_section1)
{
	_activatnvar_section1.mData[_activatnvar_generic_iterator] = _activatnvar_section1.mData[_activatnvar_generic_iterator] | _activatnvar_section2.mData[_activatnvar_generic_iterator];
}

void _activation_check_proc_0e_func_318624775(bool& _activatnvar_confusing_bool_e, U8& _activatnvar_confusing_U8_4, char& _activatnvar_confusing_char_a, bool& _activatnvar_confusing_bool_c, unsigned char* _activatnvar_confusing_chararray_c, unsigned char* _activatnvar_ser_digest, bool& _activatnvar_confusing_bool_0)
{
	_activatnvar_confusing_bool_0 &= _activatnvar_confusing_bool_0;

	/* inline */ _activation_check_proc_0e_func_445782529(_activatnvar_ser_digest, _activatnvar_confusing_chararray_c);
	_activation_check_proc_0e_func_1620655080(_activatnvar_confusing_bool_e, _activatnvar_confusing_bool_c);
	/* inline */ _activation_check_proc_0e_func_524816603(_activatnvar_confusing_char_a, _activatnvar_confusing_U8_4);
}

void _activation_check_proc_0e_func_1620655080(bool& _activatnvar_confusing_bool_e, bool& _activatnvar_confusing_bool_c)
{
	if(! _activatnvar_confusing_bool_e) _activatnvar_confusing_bool_c = true;

}

void _activation_check_proc_0e_func_735337837(bool& _activatnvar_doaccount, bool& _activatnvar_confusing_bool_4, LLUUID& _activatnvar_confusing_LLUUID_d)
{
	if(_activatnvar_confusing_LLUUID_d.mData[0xb] == 0x1) _activatnvar_confusing_bool_4 = _activatnvar_doaccount;

}

void _activation_check_proc_0e_func_1376188582(U8& _activatnvar_t0)
{
	_activatnvar_t0 |= 8;
}

void _activation_check_proc_0e_func_1567583333(LLUUID& _activatnvar_combined_id, unsigned char* _activatnvar_confusing_chararray_d)
{
	_activatnvar_confusing_chararray_d[0x9] <<= _activatnvar_combined_id.mData[0x3];

}

void _activation_check_proc_0e_func_829348171(unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_4)
{
	_activatnvar_confusing_chararray_4[0x5] += _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_0e_func_299008655(bool& _activatnvar_confusing_bool_5, bool& _activatnvar_confusing_bool_3)
{
	_activatnvar_confusing_bool_3 &= _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0e_func_1126007362(unsigned char* _activatnvar_confusing_chararray_6, unsigned char* _activatnvar_confusing_chararray_b, unsigned char* _activatnvar_confusing_chararray_4, bool& _activatnvar_confusing_bool_3, U8& _activatnvar_t1, bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_1, LLUUID& _activatnvar_confusing_LLUUID_2, LLUUID& _activatnvar_confusing_LLUUID_8, LLUUID& _activatnvar_so, U8& _activatnvar_t0)
{
	_activatnvar_so.mData[_activatnvar_t0] = _activatnvar_t1;
	_activation_check_proc_0e_func_299008655(_activatnvar_confusing_bool_5, _activatnvar_confusing_bool_3);
	/* inline */ _activation_check_proc_0e_func_349012829(_activatnvar_confusing_LLUUID_1, _activatnvar_confusing_LLUUID_8, _activatnvar_confusing_LLUUID_2, _activatnvar_confusing_chararray_6);
	_activation_check_proc_0e_func_829348171(_activatnvar_confusing_chararray_b, _activatnvar_confusing_chararray_4);
}

void _activation_check_proc_0e_func_1136016100(char& _activatnvar_confusing_char_3, bool& _activatnvar_confusing_bool_f, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	if(_activatnvar_confusing_LLUUID_3.mData[0x1] == _activatnvar_confusing_char_3) _activatnvar_confusing_bool_f = false;

}

void _activation_check_proc_0e_func_1158557361(int& _activatnvar_confusing_int_2)
{
	_activatnvar_confusing_int_2 >>= 0xf;

}

void _activation_check_proc_0e_func_1615662753(int& _activatnvar_generic_iterator)
{
	_activatnvar_generic_iterator = 0;
}

void _activation_check_proc_0e_func_17114269(int& _activatnvar_confusing_int_5)
{
	_activatnvar_confusing_int_5++;

}

void _activation_check_proc_0e_func_1401352392(int& _activatnvar_confusing_int_9)
{
	_activatnvar_confusing_int_9 &= 0xff;

}

void _activation_check_proc_0e_func_2140602304()
{
	
}

void _activation_check_proc_0e_func_1005608148(int& _activatnvar_confusing_int_5, int& _activatnvar_confusing_int_0)
{
	_activatnvar_confusing_int_5 *= _activatnvar_confusing_int_0;

}

void _activation_check_proc_0e_func_1107003051(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	
	_activation_check_proc_0e_func_177843471(_activatnvar_confusing_LLUUID_4);
}

void _activation_check_proc_0e_func_177843471(LLUUID& _activatnvar_confusing_LLUUID_4)
{
	_activatnvar_confusing_LLUUID_4 = LLUUID("3a4c4238-2980-f5c9-59e2-2a0148469028");

}

void _activation_check_proc_0e_func_871939969(int& _activatnvar_confusing_int_3)
{
	_activatnvar_confusing_int_3++;

}

void _activation_check_proc_0e_func_1864998763(U8& _activatnvar_t0)
{
	_activatnvar_t0 >>= 4;
}

void _activation_check_proc_0e_func_1352611926(unsigned char* _activatnvar_confusing_chararray_b, char& _activatnvar_confusing_char_9)
{
	_activatnvar_confusing_char_9 += _activatnvar_confusing_chararray_b[0xe];

}

void _activation_check_proc_0e_func_591355273()
{
	
}

void _activation_check_proc_0e_func_849488164(bool& _activatnvar_confusing_bool_2, char& _activatnvar_confusing_char_7, int& _activatnvar_generic_iterator, LLUUID& _activatnvar_confusing_LLUUID_3)
{
	_activatnvar_generic_iterator++;
	/* inline */ _activation_check_proc_0e_func_1298661625(_activatnvar_confusing_LLUUID_3, _activatnvar_confusing_bool_2, _activatnvar_confusing_char_7);
}

void _activation_check_proc_0e_func_1491767888(U8& _activatnvar_t0, LLUUID& _activatnvar_combined_id)
{
	_activatnvar_t0 = _activatnvar_combined_id.mData[10];
}

void _activation_check_proc_0e_func_169824213(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_c, bool& _activatnvar_confusing_bool_7, char& _activatnvar_confusing_char_5, U8& _activatnvar_t0, char& _activatnvar_confusing_char_1)
{
	_activatnvar_confusing_char_1 *= _activatnvar_t0;

	if(_activatnvar_confusing_LLUUID_c.mData[0x9] != _activatnvar_confusing_char_5) _activatnvar_confusing_bool_7 = _activatnvar_confusing_bool_5;

}

void _activation_check_proc_0e_func_535870420(bool& _activatnvar_confusing_bool_5, LLUUID& _activatnvar_confusing_LLUUID_c, char& _activatnvar_confusing_char_5, char& _activatnvar_confusing_char_b, bool& _activatnvar_confusing_bool_4, char& _activatnvar_confusing_char_1, bool& _activatnvar_confusing_bool_7, U8& _activatnvar_t0, LLUUID& _activatnvar_confusing_LLUUID_2)
{
	if(_activatnvar_confusing_LLUUID_2.mData[0x9] == _activatnvar_confusing_char_b) _activatnvar_confusing_bool_4 = false;

	_activation_check_proc_0e_func_169824213(_activatnvar_confusing_bool_5, _activatnvar_confusing_LLUUID_c, _activatnvar_confusing_bool_7, _activatnvar_confusing_char_5, _activatnvar_t0, _activatnvar_confusing_char_1);
}

void _activation_check_proc_0e_func_551283381(char& _activatnvar_confusing_char_f, unsigned char* _activatnvar_confusing_chararray_f, int& _activatnvar_confusing_int_0, LLUUID& _activatnvar_confusing_LLUUID_e)
{
	_activatnvar_confusing_int_0 &= 0xff;

	/* inline */ _activation_check_proc_0e_func_1841283318(_activatnvar_confusing_char_f, _activatnvar_confusing_chararray_f);
	/* inline */ _activation_check_proc_0e_func_49858462(_activatnvar_confusing_LLUUID_e);
}



#pragma optimize("", on)
#pragma warning(pop)

// </edit>
