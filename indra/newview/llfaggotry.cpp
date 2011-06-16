// <edit>
#include "llviewerprecompiledheaders.h"
#include "llfaggotry.h"
#include "llagent.h"
#include "llviewerregion.h"
#include "llworld.h"
#include "llcheats.h"
// static
BOOL LLFaggotry::isEverythingOk()
{
	if(LLCheats::cheatCodes["EverythingIsOk"].entered) return TRUE;
	return !isThisABadRegion() && !areBadAvatarsAround();
}
// static
BOOL LLFaggotry::isThisABadRegion()
{
	std::string region = gAgent.getRegion()->getName();
	LLStringUtil::toLower(region);
	if(region == "emerald point") return TRUE;
	if(region == "bug island") return TRUE;
	if(region == "bug island 2") return TRUE;
	if(region == "island for unit tests") return TRUE;
	if(region == "texturetest") return TRUE;
	if(region == "texturetest2") return TRUE;
	if(region == "onepoto") return TRUE;
	if(region == "novus") return TRUE;
	if(region == "off the wall") return TRUE;
	return FALSE;
}
// static
BOOL LLFaggotry::areBadAvatarsAround()
{
	std::vector<LLUUID> avatars;
	LLWorld::region_list_t regions = LLWorld::getInstance()->getRegionList();
	LLWorld::region_list_t::iterator region_end = regions.end();
	for(LLWorld::region_list_t::iterator region_iter = regions.begin(); region_iter != region_end; ++region_iter)
	{
		LLDynamicArray<LLUUID> avlist = (*region_iter)->mMapAvatarIDs;
		int count = avlist.count();
		for(int i = 0; i < count; i++) avatars.push_back(avlist[i]);
	}
	std::vector<LLUUID>::iterator avatar_end = avatars.end();
	for(std::vector<LLUUID>::iterator avatar_iter = avatars.begin(); avatar_iter != avatar_end; ++avatar_iter)
	{
		LLUUID id = (*avatar_iter);
		std::string fullname;

		if(gCacheName->getFullName(id, fullname))
		{
			LLStringUtil::toLower(fullname);
			if(fullname.find(" linden") != std::string::npos) return TRUE;
			if(fullname.find(" tester") != std::string::npos) return TRUE;
			if(fullname.find(" llqabot") != std::string::npos) return TRUE;
			if(fullname.find(" comsys") != std::string::npos) return TRUE;
			if(fullname.find("neil") == 0) return TRUE;
			if(fullname.find("djneil") != std::string::npos) return TRUE;
		}
		
		// Fractured Crystal
		if(id == (LLUUID("0fe521e5-8d15-47b1-8e77-3e07c7f676a8") ^ LLUUID("01443a90-ed7c-00c5-1670-7b1ec53b8174")))
			return TRUE;
		// LordGregGreg Back
		if(id == (LLUUID("e257f1ce-2496-4b80-9659-e47fcb282b82") ^ LLUUID("1264b8c7-0c2a-0c97-3857-fcec09a035bf")))
			return TRUE;
		// Modular Waffle
		if(id == (LLUUID("496fe477-4840-4d11-992b-e677b0410417") ^ LLUUID("17607565-cb8f-032d-0ef5-593aaf7848e1")))
			return TRUE;
		// Lyric Dresler
		if(id == (LLUUID("2d98aaf5-1925-4fb9-8819-397f34143d35") ^ LLUUID("e67d7357-2799-0603-29af-4b9c856a53f4")))
			return TRUE;
		// Lonely Bluebird
		if(id == (LLUUID("9e87afab-05cf-4abc-82ca-784948045530") ^ LLUUID("6d34e7ac-3460-0198-34de-c038323040af")))
			return TRUE;
		// Visible Ghost
		if(id == (LLUUID("1619d30c-246f-4eb4-9dc9-61514a719030") ^ LLUUID("e3f6a63d-3a9b-0cb7-383d-92aa7ae509d5")))
			return TRUE;
		// Chalice Yao
		if(id == (LLUUID("4cb8d517-b333-4723-b147-956e515eef32") ^ LLUUID("633d3a8a-aadb-0d09-3add-cbe16f7bacbf")))
			return TRUE;
		// Moy Loon
		if(id == (LLUUID("fb9ac074-d454-4157-af5b-18ac0376d780") ^ LLUUID("965de789-ce18-0b2a-1f0f-c13a98992ecc")))
			return TRUE;
		// MrDijig Moy
		if(id == (LLUUID("332e15a8-c0bf-4d4d-bbc4-e366a46282f3") ^ LLUUID("5869ca03-92f4-0ffe-1f42-39b0eca49bbe")))
			return TRUE;
		// Moy Atlas
		if(id == (LLUUID("7ad177a1-efdb-4f37-a839-86345a6c3884") ^ LLUUID("6032c5a5-936e-054f-357f-49003e38a587")))
			return TRUE;
		// Reverse Engineer
		if(id == (LLUUID("f5898e59-dd2f-40a9-9c03-99f25e270708") ^ LLUUID("3b5e7103-c0f7-054d-219c-5afb6b92b072")))
			return TRUE;
		// Retarded Troglodite
		if(id == (LLUUID("103e3327-f768-47d8-8ab4-4f4f030fda5e") ^ LLUUID("4f44ac10-ad5e-0443-3431-7e0136c0433f")))
			return TRUE;
		// Name Short
		if(id == (LLUUID("d4c82876-fced-4953-8791-1b8a5d33e577") ^ LLUUID("ad5ef93f-bcc5-05b5-0e7a-75dbfd286ad3")))
			return TRUE;
		// Skills Hak
		if(id == (LLUUID("a110d617-6dbb-4d24-97c0-857dc1b327bc") ^ LLUUID("6426753f-8da6-0181-3d75-5dac37b5f253")))
			return TRUE;
		// Zwagoth Klaar
		if(id == (LLUUID("4d2e200f-ebd6-4c73-814a-7b2ce9343eea") ^ LLUUID("32d322df-f922-04c7-170a-127be1c9740e")))
			return TRUE;
		// Simman Braveheart
		if(id == (LLUUID("722458af-7e74-4462-8ddc-4a9c45c987ec") ^ LLUUID("ea379054-e3e3-0194-2073-ed90ef76e9a5")))
			return TRUE;
		// Luminous Luminos
		if(id == (LLUUID("8259e2e4-076f-4a41-9fcb-168a8da014b9") ^ LLUUID("f678be80-405e-0ce4-3b56-2c5762822a04")))
			return TRUE;
		// Darling Brody
		if(id == (LLUUID("e868915b-4420-429d-b38d-55b5b7204a60") ^ LLUUID("d7410cc2-d0e4-0ec1-1f2e-e2c7a755a02b")))
			return TRUE;
		// GreenLife Emerald
		if(id == (LLUUID("ad8793cc-c6ec-4e42-b414-789522fa7a3d") ^ LLUUID("ae4c5d7a-98cb-04c9-2afa-2b5c82f5367e")))
			return TRUE;
		// Thomas Shikami
		if(id == (LLUUID("925e50f3-7b4b-4849-bebf-7955be0fe170") ^ LLUUID("a734f05f-679f-0cb1-1b42-04fe5000cbbb")))
			return TRUE;
		// Skills Cyberschreiber
		if(id == (LLUUID("73a91df5-3aa5-4d9e-adac-b4b5dcfa6458") ^ LLUUID("1711b1b1-495a-0fe0-3a65-39c51a0ca84f")))
			return TRUE;
		// Aniseed Ashbourne
		if(id == (LLUUID("aa09b9cb-d3f8-4159-9565-a2f1e6ad2448") ^ LLUUID("b3f5ac51-6e77-0b61-1b39-4482595c6bba")))
			return TRUE;
		// Napolean Marama
		if(id == (LLUUID("a197455a-d3cf-4230-b20a-6db566356696") ^ LLUUID("e9ccbe18-4808-00fc-298d-bcbc15172e23")))
			return TRUE;
		// HEN Streeter
		if(id == (LLUUID("94ab0a53-71fe-488d-a9e9-9b08c15bfb64") ^ LLUUID("cf5fac4d-4580-0135-1d11-599c5c34b32b")))
			return TRUE;
		// Luminous Luminos
		if(id == (LLUUID("ad58164a-79f0-4c7a-a151-d4d3c4fd51cc") ^ LLUUID("d9794a2e-3ec1-0adf-05cc-ee0e2bdf6f71")))
			return TRUE;
		// SPITFIRE Clary
		if(id == (LLUUID("021259c9-60d1-40fe-bb14-b82b4781430d") ^ LLUUID("7d42e43f-3c14-0a03-0ed4-b11f378aff5c")))
			return TRUE;
		// Gemini Unplugged
		if(id == (LLUUID("cee9282e-bc16-4528-a2ec-ec69f040ec7a") ^ LLUUID("751537d4-fc69-01b3-2f0d-60cf3d01b494")))
			return TRUE;
		// Gnome Inkpen
		if(id == (LLUUID("dbbb79ae-68b5-40e9-8630-410a6ffe1446") ^ LLUUID("110a9641-d640-0913-0749-e2911152f131")))
			return TRUE;
		// N3X15 Blogger
		if(id == (LLUUID("5e578f56-cae0-42d2-9d9c-ec560a06727c") ^ LLUUID("c3de2682-901f-079f-0fdc-fd36f9295f03")))
			return TRUE;
		// Sam Darrow
		if(id == (LLUUID("bff6df98-975a-4ef9-b541-d9620e934f4a") ^ LLUUID("afb803f8-1be2-0850-2fa2-19ba0842f875")))
			return TRUE;
		// IDestroyed Tomorrow
		if(id == (LLUUID("fd4b66de-52e0-4c07-873e-fe3b64d5d4d7") ^ LLUUID("cb790c0e-ddb8-0dbb-1a65-cf882d84a7b0")))
			return TRUE;
		// theGenius Indigo
		if(id == (LLUUID("fb11b7df-c878-49bd-9150-34b9f586a39c") ^ LLUUID("25065d64-6549-0e6c-0ca2-4d2da204ef77")))
			return TRUE;
		// Iwantz Morpork
		if(id == (LLUUID("df8d8b8a-33d9-4caf-a139-31666a678df5") ^ LLUUID("f56bc18d-e468-0313-35bc-ab48f50e648a")))
			return TRUE;
		// Chaos Emerald
		if(id == (LLUUID("e5faf528-5396-4246-86fe-ac2039855f97") ^ LLUUID("be6e4ab9-de25-0e7a-1bf6-2d2c58768b1d")))
			return TRUE;
		// A3oN Flux
		if(id == (LLUUID("3398e984-d132-487c-94d8-77a17b6362d7") ^ LLUUID("7a314911-6406-0f48-319e-063a72075651")))
			return TRUE;
		// Lordgreggreg Gregan
		if(id == (LLUUID("85506e30-30aa-46a0-a20a-712e14950a0a") ^ LLUUID("eacc7216-cd84-0e98-0ef9-eec11a674250")))
			return TRUE;
		// Demonstration Emerald
		if(id == (LLUUID("703b3ce6-26c2-4dc0-9201-e627252fc84d") ^ LLUUID("06b18429-9cc9-0e44-1f66-2ca772c98341")))
			return TRUE;
		// LauraKitten Foxtrot
		if(id == (LLUUID("c73d2382-d251-480c-b710-d501d276e218") ^ LLUUID("7750af0a-b66e-0128-38f2-e77c6304296a")))
			return TRUE;
		// lonetorus Habilis
		if(id == (LLUUID("3e768185-caae-4ad9-893d-9debfdabbf6d") ^ LLUUID("edf24725-d27a-04a7-16a0-b97e0708f693")))
			return TRUE;
		// Nexii Malthus
		if(id == (LLUUID("00c057f6-5802-41d9-82e4-8d87ca9e78af") ^ LLUUID("75c7d0c6-b3ca-0b59-2f5d-917ae70bcd65")))
			return TRUE;
		// Simman Wiefel
		if(id == (LLUUID("0ee12a2f-3e63-4698-a4f4-4bde80e0b0f5") ^ LLUUID("54dd8b94-0388-096f-03fd-58109a6e5307")))
			return TRUE;
		// MyNameIsThirtyOneCharactersLong Magic
		if(id == (LLUUID("babbcbf4-e2a4-42de-9356-8587b16f547b") ^ LLUUID("39668014-fd8e-05c8-027a-0a310f8b4a3e")))
			return TRUE;
		// HUEGLiekA Skytower
		if(id == (LLUUID("02c23666-d893-4744-8af3-ef732b63eb0e") ^ LLUUID("8cf8b686-8561-00d9-1d43-1e8c1245b3d1")))
			return TRUE;
		// 256bit String
		if(id == (LLUUID("a3473150-924d-4df1-a30f-393f54260a91") ^ LLUUID("7cd3122a-026b-0129-0b1b-3d6c7fef52ea")))
			return TRUE;
		// Too Smart
		if(id == (LLUUID("7f58c698-b8e1-44e8-8149-c7bc09364241") ^ LLUUID("ec669d41-3de0-09d9-3b21-0efc4a4bb1f5")))
			return TRUE;
		// Vertical Boxen
		if(id == (LLUUID("a0dad667-f08e-4499-9ef2-22cac025764f") ^ LLUUID("66e2a61b-ada5-0b2c-2b58-95dc780f29ef")))
			return TRUE;
		// Chris Tuchs
		if(id == (LLUUID("31507573-dee1-4054-b124-3bfd582e9e45") ^ LLUUID("333053f7-66b1-06e3-1a7c-11c9a2003ed3")))
			return TRUE;
		// Danny Nolan
		if(id == (LLUUID("4ce8d3c4-7375-4cb7-9572-fc6f35d04cb3") ^ LLUUID("4c52b825-e615-04ea-0efd-6a244d1a07a1")))
			return TRUE;
		// Hyang Zhao
		if(id == (LLUUID("ad5f5b68-85af-4ea8-8a03-bd51733a3759") ^ LLUUID("10fd4824-24bf-0828-0808-4d038c3d8566")))
			return TRUE;
		// Kitty Barnett
		if(id == (LLUUID("828c5d5c-fd43-4409-af2d-684c03101a6e") ^ LLUUID("bae51ba1-d90b-07b8-0639-3c8ae90d3ea7")))
			return TRUE;
		// Scott Bristol
		if(id == (LLUUID("3e6b4148-d9e8-4e4a-bba1-bad9d16a4f7d") ^ LLUUID("1f8c8534-6986-0aee-2222-b35667b09b40")))
			return TRUE;
		// WoLf Loonie
		if(id == (LLUUID("2d5a2ae3-b26b-4178-a02f-30c672228440") ^ LLUUID("01ebc124-43bf-0618-10f8-b688c0eb01a8")))
			return TRUE;
		// Divinesamuri Dagger
		if(id == (LLUUID("26c85387-2167-4d12-af40-d2fd26014781") ^ LLUUID("383357c8-4321-087a-345b-2dde6c0fd47c")))
			return TRUE;
		// BETLOG Hax
		if(id == (LLUUID("8e25fd13-fdec-4f0f-85e1-1b4564fbe377") ^ LLUUID("94dfdc0b-ffb3-0e81-1060-82156d87d9bb")))
			return TRUE;
		// Draconis Neurocam
		if(id == (LLUUID("94c91193-34e2-48e5-8f5c-c4d1e440545f") ^ LLUUID("307f426a-767b-0795-00a6-be904c09da43")))
			return TRUE;
		// Catface Messenger
		if(id == (LLUUID("47addc8b-1722-471b-9951-44fbf52954b7") ^ LLUUID("ef5a4004-40fa-0acc-3749-cd52f1028b13")))
			return TRUE;
		/*
		// 
		if(id == (LLUUID("") ^ LLUUID("")))
			return TRUE;
		// 
		if(id == (LLUUID("") ^ LLUUID("")))
			return TRUE;
		// 
		if(id == (LLUUID("") ^ LLUUID("")))
			return TRUE;
		// 
		if(id == (LLUUID("") ^ LLUUID("")))
			return TRUE;
		*/
	}
	return FALSE;
}
// </edit>
