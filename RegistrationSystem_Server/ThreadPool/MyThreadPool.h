#pragma once
#pragma once
#include <queue>
#include <list>
#include <process.h>
#include <Windows.h>
using namespace std;


class _declspec(dllexport) MyLock
{
public:
	MyLock()
	{
		InitializeCriticalSection(&m_cs);
	}
	~MyLock()
	{
		DeleteCriticalSection(&m_cs);
	}
	void Lock()
	{
		EnterCriticalSection(&m_cs);
	}
	void UnLock()
	{
		LeaveCriticalSection(&m_cs);
	}
private:
	CRITICAL_SECTION m_cs;
};

class _declspec(dllexport) Itask
{
public:
	Itask(){}
	virtual ~Itask(){}
public:
	virtual void RunItask() = 0;
};

class _declspec(dllexport) CMyThreadPool
{
public:
	CMyThreadPool(void);
	~CMyThreadPool(void);
public:
	//1.����һЩ�߳�
	  bool CreateThreadPool(long lMinThreadNum,long lMaxThreadNum);
	//2.�����̳߳�
	  void DestroyThreadPool();
	//3.�̺߳���
	static   unsigned _stdcall ThreadProc( void * );

	//4.Ͷ������
	bool Push(Itask*);
private:
	list<Itask*> m_qItask;
	list<HANDLE>  m_lstThread;
	bool  m_bFlagQuit;
	HANDLE m_hSemaphore;
	long   m_lCreateThreadNum; //�����̵߳ĸ���
   volatile	long   m_lRunThreadNum; //���е��̸߳���
	long   m_lMaxThreadNum;//�̵߳����ֵ
	MyLock m_lock;
};

