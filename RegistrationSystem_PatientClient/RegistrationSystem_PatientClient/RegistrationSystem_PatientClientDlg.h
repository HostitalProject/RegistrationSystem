
// RegistrationSystem_PatientClientDlg.h : 头文件
//

#pragma once
#include "mytabctl.h"
#include "login.h"


// CRegistrationSystem_PatientClientDlg 对话框
class CRegistrationSystem_PatientClientDlg : public CDialogEx
{
// 构造
public:
	CRegistrationSystem_PatientClientDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_REGISTRATIONSYSTEM_PATIENTCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
public:
	CMyTabCtl m_TabCtl;
	bool m_bChangeWndSize;
	CLogin m_login;
};
