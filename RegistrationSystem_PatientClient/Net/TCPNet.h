#ifndef  _TCPNET_H
#define _TCPNET_H

#include "INet.h"
class IKernel;
class TCPNet :public INet
{
public:
	TCPNet(IKernel *pKernel);
	virtual ~TCPNet();
public:
	bool InitNetWork();
	void UnInitNetWork();
	bool SendData(char* szbuf,int nlen);
public:
	static  unsigned _stdcall ThreadAccept( void * );
	static  unsigned _stdcall ThreadRecv( void * );
private:
	SOCKET m_sockClient;
	HANDLE m_hThreadRecv;
	static bool   m_bFlagQuit;
    static	IKernel *m_pKernel;
	
	
};





#endif
