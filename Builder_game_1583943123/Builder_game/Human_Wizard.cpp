#include "Human_Wizard.h"

void Human_Wizard::attack(Unit * mp)
{
	int tmp = rand() % 5;
	cout << "Human_Wizard is attacking :" << mp->getName() << endl;
	cout << "Human_Wizard made dmg :" << tmp << endl;
	mp->getDamage(tmp);
}

void Human_Wizard::getDamage(int a)
{
	cout << "The damange is " << a << endl;
	this->setHP(this->getHp() - a);
}

Human_Wizard::Human_Wizard(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}

Human_Wizard::Human_Wizard()
{
	hp = 100;
	name = "Human_Wizard";
	min_dmg = 5;
	max_dmg = 30;
}

Human_Wizard::~Human_Wizard() = default;

	