#pragma once


// COffToDoc 对话框

class COffToDoc : public CDialogEx
{
	DECLARE_DYNAMIC(COffToDoc)

public:
	COffToDoc(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~COffToDoc();

// 对话框数据
	enum { IDD = IDD_OFFTODOC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
