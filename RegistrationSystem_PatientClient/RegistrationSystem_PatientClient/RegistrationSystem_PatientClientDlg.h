
// RegistrationSystem_PatientClientDlg.h : ͷ�ļ�
//

#pragma once
#include "mytabctl.h"
#include "login.h"


// CRegistrationSystem_PatientClientDlg �Ի���
class CRegistrationSystem_PatientClientDlg : public CDialogEx
{
// ����
public:
	CRegistrationSystem_PatientClientDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_REGISTRATIONSYSTEM_PATIENTCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
