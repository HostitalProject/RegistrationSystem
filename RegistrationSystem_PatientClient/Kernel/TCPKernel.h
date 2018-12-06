#ifndef  _TCPKERNEL_H
#define _TCPKERNEL_H

#include "IKernel.h"
#include "Packdef.h"

class TCPKernel;
typedef void ( TCPKernel::*PFUN)(char*);
struct ProtocolMap
{
	PackType m_ntype;
	PFUN     m_pfun;
};

class  TCPKernel :public IKernel
{
public:
	TCPKernel();
	virtual ~TCPKernel();
public:
	bool Open();
	void Close();
	void DealData(char* szbuf);
	bool SendData(char* szbuf,int nlen);
public:
   void RegisterRs(char* szbuf);
	void LoginRs(char* szbuf);
	//void GetRoomInfoRs(char* szbuf); 
	//void SetRoomInfoRq(SOCKET sock,char* szbuf);
	// void TCPKernel::SendFileData(char*szpath,char *szFileName);
private:
	INet *m_pNet;
	

};

#endif
