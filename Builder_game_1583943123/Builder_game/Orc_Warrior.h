#pragma once
#include "Warrior.h"
class Orc_Warrior :
	public Warrior
{
public:
	void attack(Unit*mp)override;
	void getDamage(int a)override;
	Orc_Warrior(int h, const string&n, int min, int max);
	Orc_Warrior();
	~Orc_Warrior();
};

