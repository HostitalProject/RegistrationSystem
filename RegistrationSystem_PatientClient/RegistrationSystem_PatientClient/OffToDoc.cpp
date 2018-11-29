// OffToDoc.cpp : 实现文件
//

#include "stdafx.h"
#include "RegistrationSystem_PatientClient.h"
#include "OffToDoc.h"
#include "afxdialogex.h"


// COffToDoc 对话框

IMPLEMENT_DYNAMIC(COffToDoc, CDialogEx)

COffToDoc::COffToDoc(CWnd* pParent /*=NULL*/)
	: CDialogEx(COffToDoc::IDD, pParent)
{

}

COffToDoc::~COffToDoc()
{
}

void COffToDoc::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COffToDoc, CDialogEx)
END_MESSAGE_MAP()


// COffToDoc 消息处理程序
