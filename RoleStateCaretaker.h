#ifndef ROLESTATECARETAKER_H
#define ROLESTATECARETAKER_H

#include "RoleStateMemento.h"

class RoleStateCaretaker
{
public:
	RoleStateCaretaker(void);
	~RoleStateCaretaker(void);
public:
	void SetRoleStateMemento(RoleStateMemento* s);
	RoleStateMemento* GetRoleStateMemento();
private:
	RoleStateMemento* memento;
};

#endif