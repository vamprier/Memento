#ifndef ROLESTATEMEMENTO_H
#define ROLESTATEMEMENTO_H

#include <iostream>

using namespace std;

class RoleStateMemento
{
public:
	RoleStateMemento(int v,int a,int d);
	~RoleStateMemento(void);
public:
	void SetVitality(int v);
	int GetVitality();
	void SetAttack(int a);
	int GetAttack();
	void SetDefence(int d);
	int GetDefence();
private:
	int vit; // ������
	int atk; // ������
	int def; // ������
};

#endif