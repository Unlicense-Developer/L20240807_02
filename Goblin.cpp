#include "Actor.h"
#include "Monster.h"
#include "Goblin.h"
#include <iostream>

using namespace std;

AGoblin::AGoblin()
{
	cout << "��� ������" << endl;
}

AGoblin::~AGoblin()
{
	cout << "��� �Ҹ���" << endl;
}

void AGoblin::Move()
{
	cout << "��� �̵�" << endl;
}
