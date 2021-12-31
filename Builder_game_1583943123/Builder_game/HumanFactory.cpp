#include "HumanFactory.h"

Human_Warrior * HumanFactory::getWarrior()
{
	return new Human_Warrior;
}

Human_Wizard * HumanFactory::getWizard()
{
	return new Human_Wizard;
}

Human_Worker * HumanFactory::getWorker()
{
	return new Human_Worker;
}
