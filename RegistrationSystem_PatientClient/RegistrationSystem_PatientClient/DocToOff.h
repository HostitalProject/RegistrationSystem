#pragma once


// CDocToOff �Ի���

class CDocToOff : public CDialogEx
{
	DECLARE_DYNAMIC(CDocToOff)

public:
	CDocToOff(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDocToOff();

// �Ի�������
	enum { IDD = IDD_DOCTOOFF };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
