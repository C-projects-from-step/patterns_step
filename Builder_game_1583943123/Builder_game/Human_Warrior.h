#pragma once
#include "Warrior.h"
class Human_Warrior :
	public Warrior
{
public:
	void attack(Unit*mp)override;
	void getDamage(int a)override;
	Human_Warrior(int h, const string&n, int min, int max);
	Human_Warrior();
	~Human_Warrior();
};

