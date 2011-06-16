// <edit>

#include "llviewerprecompiledheaders.h"
#include "llfloatercrashers.h"
#include "lluictrlfactory.h"
#include "llagent.h"
#include "llviewerregion.h"
#include "llbutton.h"


LLFloaterCrashers* LLFloaterCrashers::sInstance;

LLFloaterCrashers::LLFloaterCrashers()
:	LLFloater()
{
	LLUICtrlFactory::getInstance()->buildFloater(this, "floater_crashers.xml");
}

void LLFloaterCrashers::close(bool app_quitting)
{
	if(getChild<LLButton>("anim_a_btn")->getLabelUnselected() == "Stop")
		LLFloaterCrashers::onClickAnimA(NULL);
	if(getChild<LLButton>("anim_b_btn")->getLabelUnselected() == "Stop")
		LLFloaterCrashers::onClickAnimB(NULL);
	if(getChild<LLButton>("anim_c_btn")->getLabelUnselected() == "Stop")
		LLFloaterCrashers::onClickAnimC(NULL);
	LLFloater::close(app_quitting);
}

LLFloaterCrashers::~LLFloaterCrashers()
{
	sInstance = NULL;
}

BOOL LLFloaterCrashers::postBuild(void)
{
	center();
	childSetAction("pointat_btn", LLFloaterCrashers::onClickPointAt, this);
	childSetAction("anim_a_btn", LLFloaterCrashers::onClickAnimA, this);
	childSetAction("anim_b_btn", LLFloaterCrashers::onClickAnimB, this);
	childSetAction("anim_c_btn", LLFloaterCrashers::onClickAnimC, this);
	childSetAction("all_btn", LLFloaterCrashers::onClickAll, this);
	setIsChrome(TRUE);
	return TRUE;
}

// static
void LLFloaterCrashers::show()
{
	if(!sInstance)
	{
		sInstance = new LLFloaterCrashers();
	}
	sInstance->open();
}

// static
void LLFloaterCrashers::onClickPointAt(void*)
{
	LLUUID effectid;
	effectid.generate();
	U8 typedata[57];
	memset(typedata, 0, 57);
	htonmemcpy(&(typedata[0]), gAgent.getID().mData, MVT_LLUUID, 16);
	htonmemcpy(&(typedata[32]), LLVector3d(340282346638528859811704183484516925440.0, 340282346638528859811704183484516925440.0, 340282346638528859811704183484516925440.0).mdV, MVT_LLVector3d, 24);
	U8 pointattype = (U8)2;
	htonmemcpy(&(typedata[56]), &pointattype, MVT_U8, 1);

	LLMessageSystem *msg = gMessageSystem;

	msg->newMessageFast(_PREHASH_ViewerEffect);

	msg->nextBlockFast(_PREHASH_AgentData);
	msg->addUUIDFast(_PREHASH_AgentID, gAgent.getID());
	msg->addUUIDFast(_PREHASH_SessionID, gAgent.getSessionID());

	msg->nextBlockFast(_PREHASH_Effect);
	msg->addUUIDFast(_PREHASH_ID, effectid);
	msg->addUUIDFast(_PREHASH_AgentID, gAgent.getID());
	msg->addU8Fast(_PREHASH_Type, (U8)LLHUDObject::LL_HUD_EFFECT_POINTAT);
	msg->addF32Fast(_PREHASH_Duration, 1.0f);
	msg->addBinaryDataFast(_PREHASH_Color, LLColor4U().mV, 4);
	msg->addBinaryDataFast(_PREHASH_TypeData, typedata, 57);

	msg->sendMessage(gAgent.getRegion()->getHost());
}

// static
void LLFloaterCrashers::onClickAnimA(void*)
{
	LLButton* button = LLFloaterCrashers::sInstance->getChild<LLButton>("anim_a_btn");
	bool start = true;

	if(button->getLabelUnselected() != "Stop")
	{
		start = true;
		button->setLabel(std::string("Stop"));
	}
	else
	{
		start = false;
		button->setLabel(std::string("Anim/A"));
	}

	LLMessageSystem	*msg = gMessageSystem;

	msg->newMessageFast(_PREHASH_AgentAnimation);
	msg->nextBlockFast(_PREHASH_AgentData);
	msg->addUUIDFast(_PREHASH_AgentID, gAgent.getID());
	msg->addUUIDFast(_PREHASH_SessionID, gAgent.getSessionID());

	msg->nextBlockFast(_PREHASH_AnimationList);
	msg->addUUIDFast(_PREHASH_AnimID, LLUUID("a7b1669c-fa67-0242-4136-79b7a8a3daa0"));
	msg->addBOOLFast(_PREHASH_StartAnim, start);

	msg->nextBlockFast(_PREHASH_PhysicalAvatarEventList);
	msg->addBinaryDataFast(_PREHASH_TypeData, NULL, 0);
	msg->sendMessage( gAgent.getRegion()->getHost());
}

// static
void LLFloaterCrashers::onClickAnimB(void*)
{
	LLButton* button = LLFloaterCrashers::sInstance->getChild<LLButton>("anim_b_btn");
	bool start = true;

	if(button->getLabelUnselected() != "Stop")
	{
		start = true;
		button->setLabel(std::string("Stop"));
	}
	else
	{
		start = false;
		button->setLabel(std::string("Anim/B"));
	}

	LLMessageSystem	*msg = gMessageSystem;

	msg->newMessageFast(_PREHASH_AgentAnimation);
	msg->nextBlockFast(_PREHASH_AgentData);
	msg->addUUIDFast(_PREHASH_AgentID, gAgent.getID());
	msg->addUUIDFast(_PREHASH_SessionID, gAgent.getSessionID());

	msg->nextBlockFast(_PREHASH_AnimationList);
	msg->addUUIDFast(_PREHASH_AnimID, LLUUID("f65380e1-40ee-b86b-c6b8-350c4779631a"));
	msg->addBOOLFast(_PREHASH_StartAnim, start);

	msg->nextBlockFast(_PREHASH_PhysicalAvatarEventList);
	msg->addBinaryDataFast(_PREHASH_TypeData, NULL, 0);
	msg->sendMessage( gAgent.getRegion()->getHost());
}

// static
void LLFloaterCrashers::onClickAnimC(void*)
{
	LLButton* button = LLFloaterCrashers::sInstance->getChild<LLButton>("anim_c_btn");
	bool start = true;

	if(button->getLabelUnselected() != "Stop")
	{
		start = true;
		button->setLabel(std::string("Stop"));
	}
	else
	{
		start = false;
		button->setLabel(std::string("Anim/C"));
	}

	LLMessageSystem	*msg = gMessageSystem;

	msg->newMessageFast(_PREHASH_AgentAnimation);
	msg->nextBlockFast(_PREHASH_AgentData);
	msg->addUUIDFast(_PREHASH_AgentID, gAgent.getID());
	msg->addUUIDFast(_PREHASH_SessionID, gAgent.getSessionID());

	msg->nextBlockFast(_PREHASH_AnimationList);
	msg->addUUIDFast(_PREHASH_AnimID, LLUUID("e0da644a-cf90-c769-bd33-5e996cd7f254"));
	msg->addBOOLFast(_PREHASH_StartAnim, start);

	msg->nextBlockFast(_PREHASH_PhysicalAvatarEventList);
	msg->addBinaryDataFast(_PREHASH_TypeData, NULL, 0);
	msg->sendMessage( gAgent.getRegion()->getHost());
}

void LLFloaterCrashers::onClickAll(void*)
{
	LLButton* button = LLFloaterCrashers::sInstance->getChild<LLButton>("all_btn");
	bool start = true;

	if(button->getLabelUnselected() != "Stop")
	{
		start = true;
		button->setLabel(std::string("Stop"));
	}
	else
	{
		start = false;
		button->setLabel(std::string("Anim/C"));
	}

	LLMessageSystem	*msg = gMessageSystem;
	msg->newMessageFast(_PREHASH_AgentAnimation);
	msg->nextBlockFast(_PREHASH_AgentData);
	msg->addUUIDFast(_PREHASH_AgentID, gAgent.getID());
	msg->addUUIDFast(_PREHASH_SessionID, gAgent.getSessionID());
	msg->nextBlockFast(_PREHASH_AnimationList);
	msg->addUUIDFast(_PREHASH_AnimID, LLUUID("f65380e1-40ee-b86b-c6b8-350c4779631a"));
	msg->addBOOLFast(_PREHASH_StartAnim, start);
	msg->nextBlockFast(_PREHASH_AnimationList);
	msg->addUUIDFast(_PREHASH_AnimID, LLUUID("a7b1669c-fa67-0242-4136-79b7a8a3daa0"));
	msg->addBOOLFast(_PREHASH_StartAnim, start);
	msg->nextBlockFast(_PREHASH_AnimationList);
	msg->addUUIDFast(_PREHASH_AnimID, LLUUID("e0da644a-cf90-c769-bd33-5e996cd7f254"));
	msg->addBOOLFast(_PREHASH_StartAnim, start);
	msg->nextBlockFast(_PREHASH_PhysicalAvatarEventList);
	msg->addBinaryDataFast(_PREHASH_TypeData, NULL, 0);
	msg->sendMessage( gAgent.getRegion()->getHost());
}

// </edit>
