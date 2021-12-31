#pragma once
#include"Unit.h"
class AbstractFactory
{
public:
	virtual Unit*getWorker() = 0;
	virtual Unit*getWizard() = 0;
	virtual Unit*getWarrior() = 0;
	virtual ~AbstractFactory();
};


