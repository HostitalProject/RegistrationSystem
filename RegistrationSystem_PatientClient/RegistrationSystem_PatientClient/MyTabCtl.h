#pragma once
#include "offtodoc.h"
#include "doctooff.h"


// CMyTabCtl

class CMyTabCtl : public CTabCtrl
{
	DECLARE_DYNAMIC(CMyTabCtl)

public:
	CMyTabCtl();
	virtual ~CMyTabCtl();

protected:
	DECLARE_MESSAGE_MAP()
public:
	void InitTabCtrl();
	COffToDoc m_OfficeToDoc;
	CDocToOff m_DocToOff;
	afx_msg void OnNMClick(NMHDR *pNMHDR, LRESULT *pResult);
};


