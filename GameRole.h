#ifndef GAMEROLE_H
#define GAMEROLE_H

#include "RoleStateMemento.h"

class GameRole
{
public:
	GameRole(void);
	~GameRole(void);
public:
	void SetVitality(int v);
	int GetVitality();
	void SetAttack(int a);
	int GetAttack();
	void SetDefence(int d);
	int GetDefence();
	void GetInitState();
	void DisplayState();
	void Fight();
public:
	//��������
	RoleStateMemento* SaveState();
	void RecoveryState(RoleStateMemento* rm);

private:
	int vit; // ������
	int atk; // ������
	int def; // ������
};

#endif