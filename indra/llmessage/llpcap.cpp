// <edit>
#include "llpcap.h"
// Util
unsigned short checksum(unsigned short *buf, int nwords)
{
  unsigned long sum;
  for (sum = 0; nwords > 0; nwords--)
    sum += *buf++;
  sum = (sum >> 16) + (sum & 0xffff);
  sum += (sum >> 16);
  return (unsigned short)~sum;
}

// LLPcap
pcap_t* LLPcap::mHandle = NULL;
unsigned char LLPcap::mSourceMac[6];
unsigned char LLPcap::mDestMac[6];
char LLPcap::mError[PCAP_ERRBUF_SIZE];
bool LLPcap::setSourceMac(std::string str)
{
	unsigned int buff[6];
	if(sscanf_s(str.c_str(), "%02x:%02x:%02x:%02x:%02x:%02x", &buff[0], &buff[1], &buff[2], &buff[3], &buff[4], &buff[5]) != 6)
		return false;
	unsigned char arr[6];
	for(int i = 0; i < 6; i++)
		arr[i] = buff[i];
	setSourceMac(arr);
	return true;
}
void LLPcap::setSourceMac(unsigned char arr[6])
{
	memcpy_s(mSourceMac, 6, arr, 6);
}
bool LLPcap::setDestMac(std::string str)
{
	unsigned int buff[6];
	if(sscanf_s(str.c_str(), "%02x:%02x:%02x:%02x:%02x:%02x", &buff[0], &buff[1], &buff[2], &buff[3], &buff[4], &buff[5]) != 6)
		return false;
	unsigned char arr[6];
	for(int i = 0; i < 6; i++)
		arr[i] = buff[i];
	setDestMac(arr);
	return true;
}
void LLPcap::setDestMac(unsigned char arr[6])
{
	memcpy_s(mDestMac, 6, arr, 6);
}
std::string LLPcap::getError()
{
	return std::string(mError);
}
pcap_t* LLPcap::open(std::string name)
{
	if(mHandle)
	{
		pcap_close(mHandle);
		mHandle = NULL;
	}
	mHandle = pcap_open(name.c_str(), 65536, PCAP_OPENFLAG_PROMISCUOUS, 1, NULL, mError);
	return mHandle;
}
void LLPcap::close()
{
	if(mHandle)
		pcap_close(mHandle);
}
bool LLPcap::sendPacket(unsigned char source_addr[4], unsigned short source_port, unsigned char dest_addr[4], unsigned short dest_port, unsigned char* packet, int size)
{
	if(!mHandle)
		return false;
	int packet_size = 14 + 20 + 8 + size;
	unsigned char* buffer = new unsigned char[packet_size];
	// Ethernet
	memcpy(buffer, mDestMac, 6);
	memcpy(buffer + 6, mSourceMac, 6);
	buffer[12] = 0x08;
	buffer[13] = 0x00;
	// IP
	#define IP_OFFSET 14
	buffer[IP_OFFSET] = 0x45; // version
	buffer[IP_OFFSET + 1] = 0x00; // type of service
	unsigned short ip_length = htons(20 + 8 + size);
	memcpy(buffer + IP_OFFSET + 2, &ip_length, 2);
	buffer[IP_OFFSET + 4] = 0x00;
	buffer[IP_OFFSET + 5] = 0x00;
	buffer[IP_OFFSET + 6] = 0x40; // flags/fragment offset
	buffer[IP_OFFSET + 7] = 0x00; // flags/fragment offset
	buffer[IP_OFFSET + 8] = 0x33; // ttl
	buffer[IP_OFFSET + 9] = 0x11; // protocol
	buffer[IP_OFFSET + 10] = 0x00; // checksum
	buffer[IP_OFFSET + 11] = 0x00; // checksum
	memcpy(buffer + IP_OFFSET + 12, source_addr, 4);
	memcpy(buffer + IP_OFFSET + 16, dest_addr, 4);
	unsigned short chksum = checksum((unsigned short*)(buffer + IP_OFFSET), 10);
	memcpy(buffer + IP_OFFSET + 10, &chksum, 2);
	// UDP
	#define UDP_OFFSET 34
	unsigned short udp_length = htons(8 + size);
	unsigned short n_source_port = htons(source_port);
	unsigned short n_dest_port = htons(dest_port);
	chksum = 0x0000;
	memcpy(buffer + UDP_OFFSET, &n_source_port, 2);
	memcpy(buffer + UDP_OFFSET + 2, &n_dest_port, 2);
	memcpy(buffer + UDP_OFFSET + 4, &udp_length, 2);
	memcpy(buffer + UDP_OFFSET + 6, &chksum, 2);
	// payload
	#define PAYLOAD_OFFSET 42
	memcpy(buffer + PAYLOAD_OFFSET, packet, size);
	return (pcap_sendpacket(mHandle, buffer, packet_size) == 0);
}
bool LLPcap::setFilter(std::string filter)
{
	if(!mHandle)
		return false;
	struct bpf_program fcode;
	if(pcap_compile(mHandle, &fcode, filter.c_str(), 1, 0xffffff) < 0)
	{
		char* error = pcap_geterr(mHandle);
		strcpy_s(mError, PCAP_ERRBUF_SIZE, error);
		return false;
	}
	if(pcap_setfilter(mHandle, &fcode) < 0)
		return false;
	return true;
}
int LLPcap::capture(int num, pcap_handler callback, void* user_data)
{
	if(!mHandle)
		return 0;
	return pcap_dispatch(mHandle, num, callback, (unsigned char*)user_data);
}
// </edit>
