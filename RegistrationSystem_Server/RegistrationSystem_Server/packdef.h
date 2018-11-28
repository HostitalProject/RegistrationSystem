#ifndef _PACKDEF_H
#define _PACKDEF_H

#define SERVER_IP  "192.168.2.1"//服务器IP地址

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
//宏定义
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

//协议包结构体
struct STRU_REGISTER_PATIENT_RQ		//病人注册请求
{
	PackType  m_nType;
	long long m_userNum;
	char	  m_szBirthday[_DEF_SIZE];
	char      m_szName[_DEF_SIZE];
	bool	  m_bSex;
	char      m_szPassword[_DEF_SIZE];
};

typedef  struct STRU_REGISTER_RS	//医生，病人注册请求回复；挂号成功回复
{
	PackType  m_nType;
	char      m_szResult;
}STRU_LOGIN_RS，STRU_LINKDOCTOR_RS;

struct STRU_LOGIN_RQ	//登录请求
{
	PackType  m_nType;
	long long m_userNum;
	char      m_szName[_DEF_SIZE];
	char      m_szPassword[_DEF_SIZE];
	char      m_role;
};

struct STRU_GETHOSPITALINFO_RQ	//获取医院信息
{
	PackType  m_nType;
	char      m_szName[_DEF_SIZE];
};

struct STRU_GETHOSPITALINFO_RS	//回复医院信息
{
	PackType  m_nType;
	char      m_szHospitalName[_DEF_SIZE];
};

struct STRU_GETOFFICEINFO_RQ	//获取科室信息
{
	PackType  m_nType;
	char      m_szName[_DEF_SIZE];
};

struct STRU_GETOFFICEINFO_RS	//回复科室
{
	PackType  m_nType;
	char      m_szOfficeName[_DEF_SIZE];
};

struct STRU_GETDOCTORINFO_RQ	//获取医生信息
{
	PackType  m_nType;
	char      m_szHospitalName[_DEF_SIZE];
	char      m_szOfficeName[_DEF_SIZE];
};

struct STRU_GETDOCTORINFO_RS	//回复医生信息
{
	PackType  m_nType;
	char      m_szDoctorName[_DEF_SIZE];
};

struct STRU_LINKDOCTOR_RQ	//挂号请求
{
	PackType  m_nType;
	char      m_szDoctorName[_DEF_SIZE];
};

/*******************************************************************/
//医生端
struct STRU_REGISTER_DOCTOR_RQ	//医生注册请求
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

struct STRU_SENDPATIENTINFO//发送病人信息给医生
{
	PackType  m_nType;
	char      m_szName[_DEF_SIZE];
};

#endif