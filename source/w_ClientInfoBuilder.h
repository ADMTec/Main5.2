// w_ClientInfoBuilder.h: interface for the ClientInfoBuilder class.
//
//////////////////////////////////////////////////////////////////////

#ifdef NEW_USER_INTERFACE_BUILDER

#if !defined(AFX_W_CLIENTINFOBUILDER_H__A61B2F84_D816_459C_BB92_0EB016635151__INCLUDED_)
#define AFX_W_CLIENTINFOBUILDER_H__A61B2F84_D816_459C_BB92_0EB016635151__INCLUDED_

#pragma once

/*
	Ŭ���̾�Ʈ ������ ���ӿ� �ʿ��� ������ �ƴ� �� �� ū �ǹ̷� �Ѱ����̰� �� ū �ǹ��̴�.
	���� ��� ���ӿ� �ɼ� ���...
*/

BoostSmartPointer( ClientInfoBuilder );
class ClientInfoBuilder : public Build
{
public:
	enum eType
	{
		eNone,
		eCount,
	};

public:
	static ClientInfoBuilderPtr Make();
	virtual ~ClientInfoBuilder();

private:
	void Initialize();
	void Destroy();

private:
	ClientInfoBuilder();

};

#endif // !defined(AFX_W_CLIENTINFOBUILDER_H__A61B2F84_D816_459C_BB92_0EB016635151__INCLUDED_)

#endif //NEW_USER_INTERFACE_BUILDER