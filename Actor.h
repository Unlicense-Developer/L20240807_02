#pragma once
class AActor
{
public:
	AActor();
	~AActor();

	virtual void Move() {};

	void SetHP(int newHP)
	{
		HP = newHP;
	}

	int GetHP() { return HP; }

protected:
	int HP = 0;
};

