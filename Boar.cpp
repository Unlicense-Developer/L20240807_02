#include "Actor.h"
#include "Monster.h"
#include "Boar.h"
#include <iostream>

using namespace std;

ABoar::ABoar()
{
	cout << "¸äµÅÁö »ý¼ºÀÚ" << endl;
}

ABoar::~ABoar()
{
	cout << "¸äµÅÁö ¼Ò¸êÀÚ" << endl;
}

void ABoar::Move()
{
	cout << "¸äµÅÁö ÀÌµ¿" << endl;
}
