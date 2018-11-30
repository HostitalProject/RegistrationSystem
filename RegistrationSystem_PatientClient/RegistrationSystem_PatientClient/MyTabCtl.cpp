// MyTabCtl.cpp : 实现文件
//

#include "stdafx.h"
#include "RegistrationSystem_PatientClient.h"
#include "MyTabCtl.h"


// CMyTabCtl

IMPLEMENT_DYNAMIC(CMyTabCtl, CTabCtrl)

CMyTabCtl::CMyTabCtl()
{

}

CMyTabCtl::~CMyTabCtl()
{
}


BEGIN_MESSAGE_MAP(CMyTabCtl, CTabCtrl)
	ON_NOTIFY_REFLECT(NM_CLICK, &CMyTabCtl::OnNMClick)
END_MESSAGE_MAP()



// CMyTabCtl 消息处理程序
void CMyTabCtl::InitTabCtrl()
{
	CString string[2];
	for(int i=0;i<2;i++)
	{
		//====================循环添加编辑栏=========================
		string[i].LoadString(IDS_AAAA+i);
		this->InsertItem(i,string[i]);
		//====================循环添加编辑栏=========================
	}
	m_OfficeToDoc.Create(IDD_OFFTODOC,this);//创建非模态对话框  并显示
	m_OfficeToDoc.ShowWindow(SW_SHOW);


	m_DocToOff.Create(IDD_DOCTOOFF,this);//创建非模态对话框  并显示
	m_DocToOff.ShowWindow(SW_HIDE);
		//=======================移动窗口 避免覆盖编辑栏============================
	RECT rect;
	this->GetClientRect(&rect);
	rect.bottom+=30;
	rect.top+=30;
	m_OfficeToDoc.MoveWindow(&rect);
	m_DocToOff.MoveWindow(&rect);
	//=======================移动窗口 避免覆盖编辑栏============================
}


 
void CMyTabCtl::OnNMClick(NMHDR *pNMHDR, LRESULT *pResult)  //点击tabctl  切换对话框 隐藏或者显示
{
	int index=this->GetCurSel();//  获取点击的编辑栏
	if(index!=-1)
	{
		//=======================获取之后判断  哪个隐藏  哪个显示============================
		switch(index)
		{
		case 0:
			{
				m_OfficeToDoc.ShowWindow(SW_SHOW);
				m_DocToOff.ShowWindow(SW_HIDE);
			}
			break;
		case 1:
			{
				m_DocToOff.ShowWindow(SW_SHOW);
				m_OfficeToDoc.ShowWindow(SW_HIDE);
			}
			break;
		}
	}
	*pResult = 0;
}
