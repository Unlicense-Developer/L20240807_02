#include "Actor.h"
#include "Monster.h"
#include "Goblin.h"
#include <iostream>

using namespace std;

AGoblin::AGoblin()
{
	cout << "고블린 생성자" << endl;
}

AGoblin::~AGoblin()
{
	cout << "고블린 소멸자" << endl;
}

void AGoblin::Move()
{
	cout << "고블린 이동" << endl;
}
