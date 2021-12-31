#include "PvPBuilder.h"
void PvPBuilder::createGroup()
{
	group = make_shared<Group>("PvP_group_" + to_string(id++), "PvP");
	war_count = 3;
	wiz_count = 3;
}

bool PvPBuilder::addWizard()
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

bool PvPBuilder::addWorker()
{
	return work_count;
}

bool PvPBuilder::addWarrior()
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

PvPBuilder::PvPBuilder(vector<shared_ptr<Unit>> &u) : Builder(u)
{

}
