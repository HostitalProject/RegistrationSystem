
// RegistrationSystem_DoctorClient.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRegistrationSystem_DoctorClientApp:
// �йش����ʵ�֣������ RegistrationSystem_DoctorClient.cpp
//

class CRegistrationSystem_DoctorClientApp : public CWinApp
{
public:
	CRegistrationSystem_DoctorClientApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRegistrationSystem_DoctorClientApp theApp;