#ifndef _PACKDEF_H
#define _PACKDEF_H

#define SERVER_IP  "192.168.2.1"//������IP��ַ

#define _DEF_PROTOCOL_BASE   10
#define _DEF_PROTOCOL_REGISTER_PATIENT_RQ   _DEF_PROTOCOL_BASE +1
#define _DEF_PROTOCOL_REGISTER_DOCTOR_RQ   _DEF_PROTOCOL_BASE +2
#define _DEF_PROTOCOL_REGISTER_RS   _DEF_PROTOCOL_BASE +3
#define _DEF_PROTOCOL_LOGIN_RQ		 _DEF_PROTOCOL_BASE +4
#define _DEF_PROTOCOL_LOGIN_RS		 _DEF_PROTOCOL_BASE +5
#define _DEF_PROTOCOL_GETHOSPITALINFO_RQ		 _DEF_PROTOCOL_BASE +6
#define _DEF_PROTOCOL_GETHOSPITALINFO_RS		 _DEF_PROTOCOL_BASE +7
#define _DEF_PROTOCOL_GETOFFICEINFO_RQ		 _DEF_PROTOCOL_BASE +8
#define _DEF_PROTOCOL_GETOFFICEINFO_RS		 _DEF_PROTOCOL_BASE +9
#define _DEF_PROTOCOL_GETDOCTORINFO_RQ		 _DEF_PROTOCOL_BASE +10
#define _DEF_PROTOCOL_GETDOCTORINFO_RS		 _DEF_PROTOCOL_BASE +11
#define _DEF_PROTOCOL_GETLINKDOCTOR_RQ		 _DEF_PROTOCOL_BASE +12
#define _DEF_PROTOCOL_GETLINKDOCTOR_RS		 _DEF_PROTOCOL_BASE +13
#define _DEF_PROTOCOL_SENDPATIENTINFO		 _DEF_PROTOCOL_BASE +14
//�궨��
typedef char PackType;
#define _DEF_SIZE    45

#define _role_patient       0
#define _role_doctor		1

#define _register_fail     0
#define _register_success  1

#define _login_fail     0
#define _login_success  1

#define _linkdoctor_fail     0
#define _linkdoctor_success  1

#define _sex_woman     0
#define _sex_man	   1

//Э����ṹ��
struct STRU_REGISTER_PATIENT_RQ		//����ע������
{
	PackType  m_nType;
	long long m_userNum;
	char	  m_szBirthday[_DEF_SIZE];
	char      m_szName[_DEF_SIZE];
	bool	  m_bSex;
	char      m_szPassword[_DEF_SIZE];
};

typedef  struct STRU_REGISTER_RS	//ҽ��������ע������ظ����Һųɹ��ظ�
{
	PackType  m_nType;
	char      m_szResult;
}STRU_LOGIN_RS��STRU_LINKDOCTOR_RS;

struct STRU_LOGIN_RQ	//��¼����
{
	PackType  m_nType;
	long long m_userNum;
	char      m_szName[_DEF_SIZE];
	char      m_szPassword[_DEF_SIZE];
	char      m_role;
};

struct STRU_GETHOSPITALINFO_RQ	//��ȡҽԺ��Ϣ
{
	PackType  m_nType;
	char      m_szName[_DEF_SIZE];
};

struct STRU_GETHOSPITALINFO_RS	//�ظ�ҽԺ��Ϣ
{
	PackType  m_nType;
	char      m_szHospitalName[_DEF_SIZE];
};

struct STRU_GETOFFICEINFO_RQ	//��ȡ������Ϣ
{
	PackType  m_nType;
	char      m_szName[_DEF_SIZE];
};

struct STRU_GETOFFICEINFO_RS	//�ظ�����
{
	PackType  m_nType;
	char      m_szOfficeName[_DEF_SIZE];
};

struct STRU_GETDOCTORINFO_RQ	//��ȡҽ����Ϣ
{
	PackType  m_nType;
	char      m_szHospitalName[_DEF_SIZE];
	char      m_szOfficeName[_DEF_SIZE];
};

struct STRU_GETDOCTORINFO_RS	//�ظ�ҽ����Ϣ
{
	PackType  m_nType;
	char      m_szDoctorName[_DEF_SIZE];
};

struct STRU_LINKDOCTOR_RQ	//�Һ�����
{
	PackType  m_nType;
	char      m_szDoctorName[_DEF_SIZE];
};

/*******************************************************************/
//ҽ����
struct STRU_REGISTER_DOCTOR_RQ	//ҽ��ע������
{
	PackType  m_nType;
	long long m_userNum;
	char	  m_szBirthday[_DEF_SIZE];
	char      m_szName[_DEF_SIZE];
	bool	  m_bSex;
	char      m_szPassword[_DEF_SIZE];
	char      m_szHospital[_DEF_SIZE];
	char      m_szOffice[_DEF_SIZE];
};

struct STRU_SENDPATIENTINFO//���Ͳ�����Ϣ��ҽ��
{
	PackType  m_nType;
	char      m_szName[_DEF_SIZE];
};

#endif