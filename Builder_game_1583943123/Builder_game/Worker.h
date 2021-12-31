#pragma once
#include"Unit.h"

class Worker:public Unit
{
public:
	/*void attack(Unit*mp)override;
	void getDamage(int a)override;*/
	Worker(int h, const string&n, int min, int max);
	Worker();
	~Worker();
};

