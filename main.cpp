// Memento.cpp : 定义控制台应用程序的入口点。
//
#include "GameRole.h"
#include "RoleStateCaretaker.h"

int main(int argc, char* argv[])
{
	//大战Boss前
	GameRole* lixiaoyao = new GameRole();
	lixiaoyao->GetInitState();
	lixiaoyao->DisplayState();
	//保存进度
	RoleStateCaretaker* rc = new RoleStateCaretaker();
	rc->SetRoleStateMemento(lixiaoyao->SaveState());
	//大战Boss后，损耗严重
	lixiaoyao->Fight();
	lixiaoyao->DisplayState();
	//恢复之前状态
	lixiaoyao->RecoveryState(rc->GetRoleStateMemento());
	lixiaoyao->DisplayState();

	cin.ignore();
	return 0;
}

