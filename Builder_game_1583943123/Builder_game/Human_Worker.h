#pragma once
#include "Worker.h"
class Human_Worker :
	public Worker
{
public:
	void attack(Unit*mp)override;
	void getDamage(int a)override;
	Human_Worker(int h, const string&n, int min, int max);
	Human_Worker();
	~Human_Worker();
};

