#include "stdafx.h"
#include "TCPKernel.h"
#include "TCPNet.h"
TCPKernel::TCPKernel()
{
	m_pNet = new TCPNet(this);
	
}

TCPKernel::~TCPKernel()
{
	if(m_pNet)
	{
		delete m_pNet;
		m_pNet;
    }
}

 static const  ProtocolMap m_ProctocolMapEntries[] =
 {
	 {_DEF_PROTOCOL_REGISTER_RS,&TCPKernel::RegisterRs},
	 {_DEF_PROTOCOL_LOGIN_RS,&TCPKernel::LoginRs},
	/* {_DEF_PROTOCOL_SETROOMINFO_RQ,&TCPKernel::SetRoomInfoRq},*/
	 {0,0}
 
 };
bool TCPKernel::Open()
{
	
	if(!m_pNet->InitNetWork())
		return false;


	return true;
}

void TCPKernel::Close()
{
	
	m_pNet->UnInitNetWork();
	
}

bool TCPKernel::SendData(char* szbuf,int nlen)
{
	if(!m_pNet->SendData(szbuf,nlen))
		return false;

	return true;
}
void TCPKernel::DealData(char* szbuf)
{
	PackType *pType = (PackType*)szbuf;
	int i = 0;
	//处理数据
	while(1)
	{
		if(m_ProctocolMapEntries[i].m_ntype == *pType)
		{
			(this->*m_ProctocolMapEntries[i].m_pfun)(szbuf);
			break;
		}
		else if(m_ProctocolMapEntries[i].m_ntype ==0 && m_ProctocolMapEntries[i].m_pfun ==0)
			break;
		i++;
	}


}
void TCPKernel::RegisterRs(char* szbuf)
{

}
void TCPKernel::LoginRs(char* szbuf)
{

}

//void TCPKernel::SendFileData(char*szpath,char *szFileName)
//{
//	FILE *pFile = NULL;
//	fopen_s(&pFile,szpath,"rb");
//	if(pFile == NULL)
//		return;
//	fseek(pFile,0,SEEK_END);
//	int nFileSize = ftell(pFile);
//	fseek(pFile,0,SEEK_SET);
//	//发送文件信息（文件大小）
//
//	STRU_VIDEOSTREAM_RQ su;
//	su.m_nType = _DEF_PROTOCOL_VIDEOSTREAMINFO_RQ;
//	WideCharToMultiByte(CP_ACP,0,((CDlgMain*)theApp.m_pMainWnd)->m_strname,-1,su.m_szName,sizeof(su.m_szName),0,0);
//	strcpy_s(su.m_szContent,sizeof(su.m_szContent),szFileName);
//	su.m_nLen = nFileSize;
//	SendData((char*)&su,sizeof(su));
//	//读文件内容并发送
//	while(1)
//	{
//		su.m_nType = _DEF_PROTOCOL_VIDEOSTREAMBLOCK_RQ;
//		su.m_nLen = fread_s(su.m_szContent,sizeof(su.m_szContent),sizeof(char),sizeof(su.m_szContent),pFile);
//		if(su.m_nLen==0)
//		{
//			break;
//		}
//
//		SendData((char*)&su,sizeof(su));
//
//	}
//
//	fclose(pFile);
//
//}