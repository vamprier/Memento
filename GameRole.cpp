#include "GameRole.h"


GameRole::GameRole(void)
{
}


GameRole::~GameRole(void)
{
}

void GameRole::SetVitality(int v)
{
	vit = v;
}

int GameRole::GetVitality()
{
	return vit;
}

void GameRole::SetAttack(int a)
{
	atk = a;
}

int GameRole::GetAttack()
{
	return atk;
}

void GameRole::SetDefence(int d)
{
	def = d;
}

int GameRole::GetDefence()
{
	return def;
}

void GameRole::GetInitState()
{
	vit = 100;
	atk = 100;
	def = 100;
}

void GameRole::DisplayState()
{
	cout<<"��ɫ��ǰ״̬��"<<endl;
	cout<<"��������"<<vit<<endl;
	cout<<"��������"<<atk<<endl;
	cout<<"��������"<<def<<endl;
}

void GameRole::Fight()
{
	vit = 0;
	atk = 0;
	def = 0;
}

RoleStateMemento* GameRole::SaveState()
{
	return (new RoleStateMemento(vit,atk,def));
}

void GameRole::RecoveryState(RoleStateMemento* rm)
{
	vit = rm->GetVitality();
	atk = rm->GetAttack();
	def = rm->GetDefence();
}