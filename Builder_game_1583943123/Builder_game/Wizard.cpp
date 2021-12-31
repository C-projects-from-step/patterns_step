#include "Wizard.h"

//
//
//void Wizard::attack(Unit * mp)
//{
//	int tmp = rand() % 5;
//	cout << "Wizard is attacking :" << mp->getName() << endl;
//	cout << "Wizard made dmg :" << tmp << endl;
//	mp->getDamage(tmp);
//
//}
//
//void Wizard::getDamage(int a)
//{
//	cout << "The damange is " << a << endl;
//	this->setHP(this->getHp() - a);
//}

Wizard::Wizard()
{
	hp = 80;
	name = "Wizard";
	min_dmg = 5;
	max_dmg = 60;
}

Wizard::Wizard(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}


Wizard::~Wizard()
{
}
