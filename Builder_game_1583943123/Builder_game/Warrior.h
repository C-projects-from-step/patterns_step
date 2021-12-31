#pragma once
#include"Unit.h"

class Warrior:public Unit
{public:
	
	Warrior(int h, const string&n, int min, int max);
	Warrior();
	~Warrior();
};

