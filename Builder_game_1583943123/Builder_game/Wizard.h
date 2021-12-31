#pragma once
#include"Unit.h"
class Wizard:public Unit
{
public:
	/*void attack(Unit*mp)override;
	void getDamage(int a)override;*/
	Wizard();
	Wizard(int h, const string &n, int min, int max);
	~Wizard();
};

