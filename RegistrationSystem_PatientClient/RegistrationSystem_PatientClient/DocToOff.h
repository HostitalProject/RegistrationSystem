#pragma once


// CDocToOff 对话框

class CDocToOff : public CDialogEx
{
	DECLARE_DYNAMIC(CDocToOff)

public:
	CDocToOff(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDocToOff();

// 对话框数据
	enum { IDD = IDD_DOCTOOFF };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
