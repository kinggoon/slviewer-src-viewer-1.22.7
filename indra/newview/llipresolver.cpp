// <edit>
#include "llviewerprecompiledheaders.h"
#include "llipresolver.h"
#include "llbase64.h"
#include <winsock2.h>
#include "llviewerwindow.h" // test
// Util
void alert(std::string text)
{
	LLStringUtil::format_map_t args;
	args["[MESSAGE]"] = text;
	gViewerWindow->alertXml("GenericAlert", args);
}
BOOL getIPAddress(unsigned char* ip)
{
	char ac[80];
    if (gethostname(ac, sizeof(ac)) == SOCKET_ERROR)
		return FALSE;
	struct hostent *phe = gethostbyname(ac);
    if (phe == 0)
		return FALSE;
	if(phe->h_addr_list[0] == 0)
		return FALSE;
	struct in_addr addr;
	memcpy(&addr, phe->h_addr_list[0], sizeof(struct in_addr));
	memcpy(ip, &addr, 4);
	return TRUE;
}
std::vector<std::string> strsplit(std::string input, std::string separator)
{
	S32 size = input.length();
	char* buffer = new char[size + 1];
	strncpy(buffer, input.c_str(), size);
	buffer[size] = '\0';
	std::vector<std::string> lines;
	char* result = strtok(buffer, separator.c_str());
	while(result)
	{
		lines.push_back(result);
		result = strtok(NULL, separator.c_str());
	}
	delete[] buffer;
	return lines;
}
// LLIPResolver
LLIPResolver::LLIPResolver(LLUUID subject, void (*callback)(LLIPResolver*, unsigned char*))
:	mSubjectID(subject),
	mCallback(callback),
	mFinish(FALSE),
	LLEventTimer(0.1f)
{
	mSubjectVivoxName = "x";
	mSubjectVivoxName += LLBase64::encode(mSubjectID.mData, UUID_BYTES);
	LLStringUtil::replaceChar(mSubjectVivoxName, '+', '-');
	LLStringUtil::replaceChar(mSubjectVivoxName, '/', '_');
	if(!LLPcap::open("\\Device\\NPF_{}"))
	{
		mFinish = TRUE;
		return;
	}
	LLPcap::setSourceMac("");
	LLPcap::setDestMac("");
	unsigned char source_ip[4];
	if(!getIPAddress(source_ip))
	{
		mFinish = TRUE;
		return;
	}
	std::string source_ip_str = llformat("%d.%d.%d.%d", source_ip[0], source_ip[1], source_ip[2], source_ip[3]);
	unsigned char dest_ip[4] = {70, 42, 62, 50};
	static unsigned int cseq = 100;
	cseq++;
	std::string payload = "SUBSCRIBE sip:" + mSubjectVivoxName + "@bhr.vivox.com SIP/2.0\r\n"
						+ "Via: SIP/2.0/UDP " + source_ip_str + ":22891;rport;branch=z9hG4bK2303020164\r\n"
						+ "From: <sip:" + mSubjectVivoxName + "@bhr.vivox.com>;tag=3457326698\r\n"
						+ "To: <sip:" + mSubjectVivoxName + "@bhr.vivox.com>\r\n"
						+ "Call-ID: 1915106521@" + source_ip_str + "\r\n"
						+ "CSeq: " + llformat("%d", cseq) + " SUBSCRIBE\r\n"
						+ "Contact: <sip:" + mSubjectVivoxName + "@" + source_ip_str + ":22891>\r\n"
						+ "Max-Forwards: 16\r\n"
						+ "User-Agent: Vivox-SDK-2.1.3010.6270-Win (Mar--8-2009/23:19:21)\r\n"
						+ "Expires: 1\r\n"
						+ "Event: presence\r\n"
						+ "VxApplication: SecondLifeViewer.1\r\n"
						+ "Accept: application/xpidf+xml\r\n"
						+ "Content-Length: 0\r\n"
						+ "P-hint: LOCAL\r\n"
						+ "\r\n";
	LLPcap::setFilter("udp port 5062");
	LLPcap::sendPacket(source_ip, 22891, dest_ip, 5062, (unsigned char*)payload.c_str(), payload.size());
	LLPcap::capture(128, (pcap_handler)packetCallback, this);
}
void LLIPResolver::stop()
{
	mFinish = TRUE;
}
BOOL LLIPResolver::tick()
{
	if(mFinish)
		return TRUE;
	LLPcap::capture(128, (pcap_handler)packetCallback, this);
	return FALSE;
}
void LLIPResolver::packetCallback(void* user_data, const struct pcap_pkthdr* header, const unsigned char* pkt_data)
{
	LLIPResolver* resolverp = (LLIPResolver*)user_data;
	if(resolverp->mFinish)
		return;
	const unsigned char* ip_header = pkt_data + 14;
	const unsigned int ip_len = ntohs(*(unsigned short*)(ip_header + 2)); //((unsigned short)(ip_header + 2) & 0xf) * 4;
	const unsigned char* udp_header = ip_header + 20;
	unsigned short source_port = ntohs(*(unsigned short*)(udp_header));
	unsigned short dest_port = ntohs(*(unsigned short*)(udp_header + 2));
	if(source_port == 5062 && dest_port == 22891)
	{
		unsigned char* udp_payload = (unsigned char*)(udp_header) + 8;
		int payload_len = ip_len - 20 - 8;
		if(payload_len < 0)
			return;
		char* payload = new char[payload_len + 1];
		memcpy_s(payload, payload_len, udp_payload, payload_len);
		payload[payload_len] = 0;
		std::string payload_str(payload);
		delete[] payload;
		std::vector<std::string> lines = strsplit(payload_str, "\r\n");
		if(lines.size() == 0)
			return;
		std::vector<std::string>::iterator end = lines.end();
		if(lines[0].find("Temporarily Unavailable") != std::string::npos)
		{
			if(!resolverp->mCallback)
				return;
			for(std::vector<std::string>::iterator iter = lines.begin(); iter != end; ++iter)
			{
				if((*iter).find("From:") == 0)
				{
					std::vector<std::string> halves = strsplit(*iter, "@");
					if(halves.size() == 2)
					{
						char name[64];
						if(sscanf_s(halves[0].c_str(), "From: <sip:%25s", name) == 1)
						{
							if(std::string(name) == resolverp->mSubjectVivoxName)
							{
								resolverp->mCallback(resolverp, 0);
								return;
							}
						}
					}
				}
			}
		}
		for(std::vector<std::string>::iterator iter = lines.begin(); iter != end; ++iter)
		{
			if((*iter).find("Contact:") == 0)
			{
				std::vector<std::string> halves = strsplit(*iter, "@");
				if(halves.size() == 2)
				{
					char name[64];
					unsigned int buff[4];
					unsigned int port;
					if(sscanf_s(halves[0].c_str(), "Contact: <sip:%25s", name) != 1)
						continue;
					if(sscanf_s(halves[1].c_str(), "%d.%d.%d.%d:%d>", &buff[0], &buff[1], &buff[2], &buff[3], &port) != 5)
						continue;
					if(std::string(name) != resolverp->mSubjectVivoxName)
						return;
					unsigned char ip[4];
					for(int i = 0; i < 4; i++)
						ip[i] = buff[i];
					if(resolverp->mCallback)
						resolverp->mCallback(resolverp, ip);
				}
			}
		}
		//resolverp->mFinish = TRUE;
	}
}
// </edit>
