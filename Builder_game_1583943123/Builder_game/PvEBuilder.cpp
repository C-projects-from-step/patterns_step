#include "PvEBuilder.h"

void PvEBuilder::createGroup()
{
	group = make_shared<Group>("PvP_group_" + to_string(id++), "PvP");
	war_count = 1;
	wiz_count = 2;
	work_count = 3;
}

bool PvEBuilder::addWizard()
{
	if (wiz_count == 0)
		return false;
	do {
		auto it = find_if(units.begin(), units.end(), [](const shared_ptr<Unit>&u)->bool {
			Wizard*pt = dynamic_cast<Wizard*>(u.get());
			return pt;
		});
		if (it != units.end())
		{
			group->addUnit(*it);
			units.erase(it);
			wiz_count--;
		}
		else
			break;
	} while (wiz_count != 0);
	return wiz_count;
}

bool PvEBuilder::addWorker()
{

	if (work_count == 0)
		return false;
	do {
		auto it = find_if(units.begin(), units.end(), [](const shared_ptr<Unit>&u)->bool {
			Worker*pt = dynamic_cast<Worker*>(u.get());
			return pt;
		});
		if (it != units.end())
		{
			group->addUnit(*it);
			units.erase(it);
			work_count--;
		}
		else
			break;
	} while (work_count != 0);
	return work_count;

}

bool PvEBuilder::addWarrior()
{
	if (war_count == 0)
		return false;
	do {
		auto it = find_if(units.begin(), units.end(), [](const shared_ptr<Unit>&u)->bool {
			Warrior*pt = dynamic_cast<Warrior*>(u.get());
			return pt;
		});
		if (it != units.end())
		{
			group->addUnit(*it);
			units.erase(it);
			war_count--;
		}
		else
			break;
	} while (war_count != 0);
	return war_count;
}

PvEBuilder::PvEBuilder(vector<shared_ptr<Unit>> &u) : Builder(u)
{

}
