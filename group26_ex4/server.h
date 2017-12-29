#ifndef SERVER_H
#define SERVER_H

#include <Windows.h>
#include <WinSock2.h>
#include <WS2tcpip.h>

#pragma comment(lib, "Ws2_32.lib")

#define ERROR_CODE (int)(-1) // todo move to shared
#define SUCCESS_CODE (int)(0) // todo move to shared

typedef struct _RoommateProperties {
	DWORD Ti; // number of milliseconds till changing a clothing
	DWORD Si; // number of clothes
	DWORD NumberOfClothesInCloset;
	int RoommateIndex;
	DWORD RunningTime;
	bool ClosetIsEmpty;
}RoommateProperties;

#endif