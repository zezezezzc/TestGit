#include <iostream>
#include <winsock2.h>
#include <thread>
#pragma comment(lib,"ws2_32.lib")
#pragma warning(disable:4996)

void initialization();
bool Login(SOCKET s);
DWORD WINAPI CreateSendMegThread(LPVOID lpParameter);
DWORD WINAPI CreateRecvMegThread(LPVOID lpParameter);
