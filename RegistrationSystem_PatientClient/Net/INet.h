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
	virtual	bool InitNetWork() = 0 ;//  初始化网络
	virtual void UnInitNetWork()= 0;//  卸载网络
	virtual bool SendData(char* szbuf,int nlen)= 0; // 发数据

};





#endif
