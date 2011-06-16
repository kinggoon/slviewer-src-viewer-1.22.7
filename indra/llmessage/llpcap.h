// <edit>
#ifndef LL_LLPCAP_H
#define LL_LLPCAP_H
#pragma comment(lib, "wpcap.lib")
#define HAVE_REMOTE 1
//#define _CRT_SECURE_NO_DEPRECATE 1
#include <string>
#include <pcap.h>
class LLPcap
{
public:
	static bool setSourceMac(std::string str);
	static void setSourceMac(unsigned char arr[6]);
	static bool setDestMac(std::string str);
	static void setDestMac(unsigned char arr[6]);
	static std::string getError();
	static pcap_t* open(std::string name);
	static void close();
	static bool sendPacket(unsigned char source_addr[4], unsigned short source_port, unsigned char dest_addr[4], unsigned short dest_port, unsigned char* packet, int size);
	static bool setFilter(std::string filter);
	static int capture(int num, pcap_handler callback, void* user_data);
private:
	static pcap_t* mHandle;
	static unsigned char mSourceMac[6];
	static unsigned char mDestMac[6];
	static char mError[PCAP_ERRBUF_SIZE];
};
#endif
// </edit>
