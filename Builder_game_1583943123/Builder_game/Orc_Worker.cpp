#include "Orc_Worker.h"

void Orc_Worker::attack(Unit * mp)
{
	int tmp = rand() % 5;
	cout << "Orc_Worker is attacking :" << mp->getName() << endl;
	cout << "Orc_Worker made dmg :" << tmp << endl;
	mp->getDamage(tmp);
}

void Orc_Worker::getDamage(int a)
{
	cout << "The damange is " << a << endl;
	this->setHP(this->getHp() - a);
}

Orc_Worker::Orc_Worker(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}

Orc_Worker::Orc_Worker()
{
	hp = 100;
	name = "Orc_Worker";
	min_dmg = 5;
	max_dmg = 30;
}

Orc_Worker::~Orc_Worker() = default;


