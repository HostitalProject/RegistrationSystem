
// RegistrationSystem_DoctorClientDlg.h : ͷ�ļ�
//

#pragma once


// CRegistrationSystem_DoctorClientDlg �Ի���
class CRegistrationSystem_DoctorClientDlg : public CDialogEx
{
// ����
public:
	CRegistrationSystem_DoctorClientDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_REGISTRATIONSYSTEM_DOCTORCLIENT_DIALOG };

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
	
};
