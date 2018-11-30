// DocToOff.cpp : 实现文件
//

#include "stdafx.h"
#include "RegistrationSystem_PatientClient.h"
#include "DocToOff.h"
#include "afxdialogex.h"


// CDocToOff 对话框

IMPLEMENT_DYNAMIC(CDocToOff, CDialogEx)

CDocToOff::CDocToOff(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDocToOff::IDD, pParent)
{

}

CDocToOff::~CDocToOff()
{
}

void CDocToOff::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDocToOff, CDialogEx)
END_MESSAGE_MAP()


// CDocToOff 消息处理程序
