#include "Orc_Warrior.h"

void Orc_Warrior::attack(Unit * mp)
{
	int tmp = rand() % 5;
	cout << "Warrior is attacking :" << mp->getName() << endl;
	cout << "Warrior made dmg :" << tmp << endl;
	mp->getDamage(tmp);
}

void Orc_Warrior::getDamage(int a)
{
	cout << "The damange is " << a << endl;
	this->setHP(this->getHp() - a);
}

Orc_Warrior::Orc_Warrior(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}

Orc_Warrior::Orc_Warrior()
{
	hp = 100;
	name = "Orc_Warrior";
	min_dmg = 5;
	max_dmg = 30;
}

Orc_Warrior::~Orc_Warrior() = default;



