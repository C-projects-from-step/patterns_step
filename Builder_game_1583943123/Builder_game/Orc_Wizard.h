#pragma once
#include "Wizard.h"
class Orc_Wizard :
	public Wizard
{public:
	void attack(Unit*mp)override;
	void getDamage(int a)override;
	Orc_Wizard(int h, const string&n, int min, int max);
	Orc_Wizard();
	~Orc_Wizard();
};

