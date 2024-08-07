#include <iostream>
#include <vector>
#include <random>
#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Boar.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

template<typename T>
class Data
{
public:
	T value;
};

template<typename K>
K Add(K a, K b)
{
	return a + b;
}


void RandomGenerate(vector<AMonster*> Monsters)
{
	int random = rand() % 5 + 1;

	for (int i = 0; i < random; i++)
	{
		AGoblin* temp = new AGoblin;

		//Monsters.push_back(new AGoblin);
	}
}

void MoveMonsters(vector<AMonster*>& Monsters)
{
	for (AMonster* Monster : Monsters)
	{
		Monster->Move();
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	APlayer* Player = new APlayer;
	vector<AGoblin*> goblins;
	vector<ABoar*> boars;
	vector<ASlime*> slimes;
	vector<AMonster*> monsters;

	int TotalMonsterCount = rand() % 10 + 1;

	int random = rand() % 5 + 1;

	for (int i = 0; i < TotalMonsterCount; i++)
	{
		int type = rand() % 3;

		if (type == 0)
		{
			monsters.push_back(new AGoblin);
		}
		else if (type == 1)
		{
			monsters.push_back(new ABoar);
		}
		else if (type == 2)
		{
			monsters.push_back(new ASlime);
		}
	}

	for (int i = 0; i < random; i++)
	{
		AGoblin* temp = new AGoblin;

		goblins.push_back(temp);
	}

	random = rand() % 5 + 1;

	for (int i = 0; i < random; i++)
	{
		ABoar* temp = new ABoar;

		boars.push_back(temp);
	}

	random = rand() % 5 + 1;

	for (int i = 0; i < random; i++)
	{
		ASlime* temp = new ASlime;

		slimes.push_back(temp);
	}

	Player->Move();

	for (AGoblin* goblin : goblins)
	{
		goblin->Move();
	}

	for (ABoar* boar : boars)
	{
		boar->Move();
	}

	for (ASlime* slime : slimes)
	{
		slime->Move();
	}
	
	delete Player;
	
	for (AGoblin* goblin : goblins)
	{
		delete goblin;
	}

	for (ABoar* boar : boars)
	{
		delete boar;
	}

	for (ASlime* slime : slimes)
	{
		delete slime;
	}

	goblins.clear();
	boars.clear();
	slimes.clear();

	return 0;
}