
// RegistrationSystem_PatientClient.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "TCPKernel.h"

// CRegistrationSystem_PatientClientApp:
// �йش����ʵ�֣������ RegistrationSystem_PatientClient.cpp
//

class CRegistrationSystem_PatientClientApp : public CWinApp
{
public:
	CRegistrationSystem_PatientClientApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
public:
	IKernel*m_pTcpKernel;
	virtual int ExitInstance();
};

extern CRegistrationSystem_PatientClientApp theApp;