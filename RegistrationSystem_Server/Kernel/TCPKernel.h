#ifndef  _TCPKERNEL_H
#define _TCPKERNEL_H

#include "IKernel.h"
#include "CMySql.h"
#include "MyThreadPool.h"
#include "Packdef.h"
#include <list>
#include <map>

class TCPKernel :public IKernel
{
public:
	TCPKernel();
	virtual ~TCPKernel();
public:
	bool Open();
	void Close();
	void DealData(SOCKET sock,char* szbuf);
public:
    void RegisterRq(SOCKET sock,char* szbuf);
	void LoginRq(SOCKET sock,char* szbuf);
}


#endif
