#include "Director.h"

Director::Director(vector<shared_ptr<Unit>> &u) : units(u)
{

}

void Director::setCreator(shared_ptr<Builder> pt)
{
	builder = pt;
}

shared_ptr<Group> Director::createGroup() const
{
	builder->createGroup();

	while (builder->addWorker() |
		builder->addWizard() |
		builder->addWarrior())
	{
		registerToBattle(units);
	}
	return builder->getGroup();
}
