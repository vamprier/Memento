// Memento.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "GameRole.h"
#include "RoleStateCaretaker.h"

int main(int argc, char* argv[])
{
	//��սBossǰ
	GameRole* lixiaoyao = new GameRole();
	lixiaoyao->GetInitState();
	lixiaoyao->DisplayState();
	//�������
	RoleStateCaretaker* rc = new RoleStateCaretaker();
	rc->SetRoleStateMemento(lixiaoyao->SaveState());
	//��սBoss���������
	lixiaoyao->Fight();
	lixiaoyao->DisplayState();
	//�ָ�֮ǰ״̬
	lixiaoyao->RecoveryState(rc->GetRoleStateMemento());
	lixiaoyao->DisplayState();

	cin.ignore();
	return 0;
}

