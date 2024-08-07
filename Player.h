#pragma once

class APlayer : public AActor
{
public:
	APlayer();
	~APlayer();

	virtual void Move() override;
};

