#include "Warrior.h"

//void Warrior::attack(Unit * mp)
//{
//	int tmp = rand() % 5;
//	cout << "Warrior is attacking :" << mp->getName() << endl;
//	cout << "Warrior made dmg :" << tmp << endl;
//	mp->getDamage(tmp);
//}
//
//void Warrior::getDamage(int a)
//{
//	cout << "The damange is " << a << endl;
//	this->setHP(this->getHp() - a);
//}

Warrior::Warrior(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}

Warrior::Warrior()
{
	hp = 100;
	name = "Warrior";
	min_dmg = 5;
	max_dmg = 40;
}

Warrior::~Warrior()
{
}
