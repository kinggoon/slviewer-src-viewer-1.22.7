// <edit>
#ifndef LL_LLIPRESOLVER_H
#define LL_LLIPRESOLVER_H
#include "llpcap.h"
class LLIPResolver : public LLEventTimer
{
public:
	LLIPResolver(LLUUID subject, void (*callback)(LLIPResolver*, unsigned char*));
	void stop();
	BOOL mFinish;
	void (*mCallback)(LLIPResolver*, unsigned char*);
	LLUUID mSubjectID;
	std::string mSubjectVivoxName;
	BOOL tick();
	static void packetCallback(void* user_data, const struct pcap_pkthdr* header, const unsigned char* pkt_data);
};
#endif
// </edit>
