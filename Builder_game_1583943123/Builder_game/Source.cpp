#include"Orc_Factory.h"
#include"HumanFactory.h"
#include"Director.h"

#include"PvPBuilder.h"
#include"PvEBuilder.h"
#include <chrono>
#include <thread>
#include<ctime>

void registerToBattle(vector<shared_ptr<Unit>> &units)
{
	this_thread::sleep_for(chrono::seconds(rand() % 3 + 1));
	int tmp = rand() % 5;
	cout << "Fresh blood has come. " << tmp << " units" << endl;
	shared_ptr<AbstractFactory> factory;
	if (rand() % 2)
		factory = make_shared<HumanFactory>();
	else
		factory = make_shared<Orc_Factory>();
	for (int i = 0; i < tmp; ++i)
	{
		switch (rand() % 3)
		{
		case 0:
			units.push_back(shared_ptr<Unit>(factory->getWarrior()));
			break;
		case 1:
			units.push_back(shared_ptr<Unit>(factory->getWizard()));
			break;
		case 2:
			units.push_back(shared_ptr<Unit>(factory->getWorker()));
			break;
		}
	}
}

int main()
{
	srand(time(0));
	vector<shared_ptr<Unit>> units;

	Director director(units);
	director.setCreator(make_shared<PvPBuilder>(units));
	shared_ptr<Group> group1 = director.createGroup();
	cout << "~~~~~~~~~~~~~" << endl;
	director.setCreator(make_shared<PvEBuilder>(units));
	shared_ptr<Group> group2 = director.createGroup();
	for (int i = 0; i < group1->getSize(); ++i)
	{
		cout << (*group1)[i]->getName() << endl;
	}

	for (int i = 0; i < group2->getSize(); ++i)
	{
		cout << "->->->->->->->->->" << (*group2)[i]->getName() << endl;
	}
	system("pause");
}


