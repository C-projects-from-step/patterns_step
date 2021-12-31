#include "Human_Warrior.h"

void Human_Warrior::attack(Unit * mp)
{
	int tmp = rand() % 5;
	cout << "Human_Warrior is attacking :" << mp->getName() << endl;
	cout << "Human_Warrior made dmg :" << tmp << endl;
	mp->getDamage(tmp);
}

void Human_Warrior::getDamage(int a)
{
	cout << "The damange is " << a << endl;
	this->setHP(this->getHp() - a);
}

Human_Warrior::Human_Warrior(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}

Human_Warrior::Human_Warrior()
{
	hp = 100;
	name = "Human_Warrior";
	min_dmg = 5;
	max_dmg = 30;
}

Human_Warrior::~Human_Warrior() = default;


