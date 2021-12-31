#pragma once
#include "Worker.h"
class Orc_Worker :
	public Worker
{public:
	void attack(Unit*mp)override;
	void getDamage(int a)override;
	Orc_Worker(int h, const string&n, int min, int max);
	Orc_Worker();
	~Orc_Worker();
};

