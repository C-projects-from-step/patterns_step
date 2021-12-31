#pragma once
#include "AbstractFactory.h"
#include"Human_Warrior.h"
#include"Human_Wizard.h"
#include"Human_Worker.h"
class HumanFactory :
	public AbstractFactory
{public:
	Human_Warrior*getWarrior()override;
	Human_Wizard*getWizard()override;
	Human_Worker*getWorker()override;	
};

