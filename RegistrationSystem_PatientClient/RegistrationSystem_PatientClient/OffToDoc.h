#pragma once


// COffToDoc �Ի���

class COffToDoc : public CDialogEx
{
	DECLARE_DYNAMIC(COffToDoc)

public:
	COffToDoc(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~COffToDoc();

// �Ի�������
	enum { IDD = IDD_OFFTODOC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
