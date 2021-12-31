#include "Orc_Factory.h"

Orc_Worker * Orc_Factory::getWorker()
{
	return new Orc_Worker;
}

Orc_Wizard * Orc_Factory::getWizard()
{
	return new Orc_Wizard;
}

Orc_Warrior * Orc_Factory::getWarrior()
{
	return new Orc_Warrior;
}
