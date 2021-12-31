#include "Human_Worker.h"

void Human_Worker::attack(Unit * mp)
{
	int tmp = rand() % 5;
	cout << "Human_Worker is attacking :" << mp->getName() << endl;
	cout << "Human_Worker made dmg :" << tmp << endl;
	mp->getDamage(tmp);
}

void Human_Worker::getDamage(int a)
{
	cout << "The damange is " << a << endl;
	this->setHP(this->getHp() - a);
}

Human_Worker::Human_Worker(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}

Human_Worker::Human_Worker()
{
	hp = 100;
	name = "Human_Worker";
	min_dmg = 5;
	max_dmg = 30;
}

Human_Worker::~Human_Worker() = default;

