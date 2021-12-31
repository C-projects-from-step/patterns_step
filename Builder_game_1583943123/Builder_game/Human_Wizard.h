#pragma once
#include "Wizard.h"
class Human_Wizard :
	public Wizard
{
public:
	void attack(Unit*mp)override;
	void getDamage(int a)override;
	Human_Wizard(int h, const string&n, int min, int max);
	Human_Wizard();
	~Human_Wizard();
};

