#include "Actor.h"
#include "Monster.h"
#include "Slime.h"
#include <iostream>

using namespace std;

ASlime::ASlime()
{
	cout << "������ ������" << endl;
}

ASlime::~ASlime()
{
	cout << "������ �Ҹ���" << endl;
}

void ASlime::Move()
{
	cout << "������ �̵�" << endl;
}
