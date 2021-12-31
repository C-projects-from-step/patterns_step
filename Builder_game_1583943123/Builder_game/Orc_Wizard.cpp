#include "Orc_Wizard.h"

void Orc_Wizard::attack(Unit * mp)
{
	int tmp = rand() % 5;
	cout << "Orc_Wizard is attacking :" << mp->getName() << endl;
	cout << "Orc_Wizard made dmg :" << tmp << endl;
	mp->getDamage(tmp);
}

void Orc_Wizard::getDamage(int a)
{
	cout << "The damange is " << a << endl;
	this->setHP(this->getHp() - a);
}

Orc_Wizard::Orc_Wizard(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}

Orc_Wizard::Orc_Wizard()
{
	hp = 100;
	name = "Orc_Wizard";
	min_dmg = 5;
	max_dmg = 30;
}

Orc_Wizard::~Orc_Wizard() = default;