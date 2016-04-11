#include "RoleStateCaretaker.h"


RoleStateCaretaker::RoleStateCaretaker(void)
{
}


RoleStateCaretaker::~RoleStateCaretaker(void)
{
}

void RoleStateCaretaker::SetRoleStateMemento(RoleStateMemento* s)
{
	memento = s;
}

RoleStateMemento* RoleStateCaretaker::GetRoleStateMemento()
{
	return memento;
}