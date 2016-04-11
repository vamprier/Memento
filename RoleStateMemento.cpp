#include "RoleStateMemento.h"


RoleStateMemento::RoleStateMemento(int v,int a,int d):vit(v),atk(a),def(d)
{
}


RoleStateMemento::~RoleStateMemento(void)
{
}

void RoleStateMemento::SetVitality(int v)
{
	vit = v;
}

int RoleStateMemento::GetVitality()
{
	return vit;
}

void RoleStateMemento::SetAttack(int a)
{
	atk = a;
}

int RoleStateMemento::GetAttack()
{
	return atk;
}

void RoleStateMemento::SetDefence(int d)
{
	def = d;
}

int RoleStateMemento::GetDefence()
{
	return def;
}