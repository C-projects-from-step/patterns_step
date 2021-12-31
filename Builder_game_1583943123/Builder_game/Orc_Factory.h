#pragma once
#include"Orc_Warrior.h"
#include"Orc_Worker.h"
#include"Orc_Wizard.h"
#include "AbstractFactory.h"
class Orc_Factory :
	public AbstractFactory
{public:
	Orc_Worker*getWorker()override;
	 Orc_Wizard*getWizard()override;
	 Orc_Warrior*getWarrior()override;
};

