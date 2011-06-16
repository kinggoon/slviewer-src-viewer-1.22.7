// <edit>
#include "llnetcanary.h"
#include <winsock2.h>
#include "llerror.h"
SOCKADDR_IN trapLclAddr;
static WSADATA trapWSAData;
LLNetCanary::LLNetCanary(int requested_port)
{
	mGood = TRUE;
	int nRet;
	int hSocket;
	int snd_size = 400000;
	int rec_size = 400000;
	int buff_size = 4;
 
	if(WSAStartup(0x0202, &trapWSAData))
	{
		S32 err = WSAGetLastError();
		WSACleanup();
		llwarns << "WSAStartup() failure: " << err << llendl;
		mGood = FALSE;
		return;
	}

	// Get a datagram socket
    hSocket = (int)socket(AF_INET, SOCK_DGRAM, 0);
    if (hSocket == INVALID_SOCKET)
	{
		S32 err = WSAGetLastError();
		WSACleanup();
		mGood = FALSE;
		llwarns << "socket() failure: " << err << llendl;
		return;
	}

	// Name the socket (assign the local port number to receive on)
	trapLclAddr.sin_family      = AF_INET;
	trapLclAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	trapLclAddr.sin_port        = htons(requested_port);
	S32 attempt_port = requested_port;
	//llinfos << "bind() port: " << attempt_port << llendl;
	nRet = bind(hSocket, (struct sockaddr*) &trapLclAddr, sizeof(trapLclAddr));
	if (nRet == SOCKET_ERROR)
	{
		S32 err = WSAGetLastError();
		WSACleanup();
		mGood = FALSE;
		llwarns << "bind() failed: " << err << llendl;
		return;
	}

	// Find out what address we got
	sockaddr_in socket_address;
	S32 socket_address_size = sizeof(socket_address);
	getsockname(hSocket, (SOCKADDR*) &socket_address, &socket_address_size);
	mPort = ntohs(socket_address.sin_port);
	//llinfos << "got port " << mPort << llendl;
	
	// Set socket to be non-blocking
	unsigned long argp = 1;
	nRet = ioctlsocket (hSocket, FIONBIO, &argp);
	if (nRet == SOCKET_ERROR) 
	{
		S32 err = WSAGetLastError();
		WSACleanup();
		mGood = FALSE;
		llwarns << "Failed to set socket non-blocking, Err: " << err << llendl;
		return;
	}

	// set a large receive buffer
	nRet = setsockopt(hSocket, SOL_SOCKET, SO_RCVBUF, (char *)&rec_size, buff_size);
	if (nRet)
	{
		llinfos << "Can't set receive buffer size!" << llendl;
	}
	// set a large send buffer
	nRet = setsockopt(hSocket, SOL_SOCKET, SO_SNDBUF, (char *)&snd_size, buff_size);
	if (nRet)
	{
		llinfos << "Can't set send buffer size!" << llendl;
	}
	//getsockopt(hSocket, SOL_SOCKET, SO_RCVBUF, (char *)&rec_size, &buff_size);
	//getsockopt(hSocket, SOL_SOCKET, SO_SNDBUF, (char *)&snd_size, &buff_size);
	//LL_DEBUGS("AppInit") << "startNet - receive buffer size : " << rec_size << LL_ENDL;
	//LL_DEBUGS("AppInit") << "startNet - send buffer size    : " << snd_size << LL_ENDL;

	mSocket = hSocket;
}
LLNetCanary::~LLNetCanary()
{
	if(mGood)
	{
		if(mSocket)
		{
			shutdown(mSocket, SD_BOTH);
			closesocket(mSocket);
		}
		WSACleanup();
	}
}
// </edit>
