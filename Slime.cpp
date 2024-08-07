#include "Actor.h"
#include "Monster.h"
#include "Slime.h"
#include <iostream>

using namespace std;

ASlime::ASlime()
{
	cout << "슬라임 생성자" << endl;
}

ASlime::~ASlime()
{
	cout << "슬라임 소멸자" << endl;
}

void ASlime::Move()
{
	cout << "슬라임 이동" << endl;
}
