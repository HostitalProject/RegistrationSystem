// MyTabCtl.cpp : ʵ���ļ�
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



// CMyTabCtl ��Ϣ�������
void CMyTabCtl::InitTabCtrl()
{
	CString string[2];
	for(int i=0;i<2;i++)
	{
		//====================ѭ����ӱ༭��=========================
		string[i].LoadString(IDS_AAAA+i);
		this->InsertItem(i,string[i]);
		//====================ѭ����ӱ༭��=========================
	}
	m_OfficeToDoc.Create(IDD_OFFTODOC,this);//������ģ̬�Ի���  ����ʾ
	m_OfficeToDoc.ShowWindow(SW_SHOW);


	m_DocToOff.Create(IDD_DOCTOOFF,this);//������ģ̬�Ի���  ����ʾ
	m_DocToOff.ShowWindow(SW_HIDE);
		//=======================�ƶ����� ���⸲�Ǳ༭��============================
	RECT rect;
	this->GetClientRect(&rect);
	rect.bottom+=30;
	rect.top+=30;
	m_OfficeToDoc.MoveWindow(&rect);
	m_DocToOff.MoveWindow(&rect);
	//=======================�ƶ����� ���⸲�Ǳ༭��============================
}


 
void CMyTabCtl::OnNMClick(NMHDR *pNMHDR, LRESULT *pResult)  //���tabctl  �л��Ի��� ���ػ�����ʾ
{
	int index=this->GetCurSel();//  ��ȡ����ı༭��
	if(index!=-1)
	{
		//=======================��ȡ֮���ж�  �ĸ�����  �ĸ���ʾ============================
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
