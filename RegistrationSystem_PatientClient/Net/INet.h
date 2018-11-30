#ifndef  _INET_H
#define _INET_H

#include <Winsock2.h>
#include <process.h>
#include <list>
#include "Packdef.h"
#pragma comment(lib,"Ws2_32.lib")

#define _DEFPORT    1234
#define _DEFSIZE     1024

class INet
{
public:
	INet(){}
	virtual ~INet(){}
public:
	virtual	bool InitNetWork() = 0 ;//  ��ʼ������
	virtual void UnInitNetWork()= 0;//  ж������
	virtual bool SendData(char* szbuf,int nlen)= 0; // ������

};





#endif
