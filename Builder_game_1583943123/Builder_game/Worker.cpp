#include "Worker.h"

//
//
//void Worker::attack(Unit *mp)
//{
//	int tmp = rand() % 5;
//	cout << "Worker is attacking :" << mp->getName() << endl;
//	cout << "Worker made dmg :" << tmp << endl;
//	mp->getDamage(tmp);
//	
//}
//
//void Worker::getDamage(int a)
//{
//	cout << "The damange is " << a << endl;
//	this->setHP(this->getHp() - a);
//}

Worker::Worker(int h, const string & n, int min, int max)
{
	hp = h;
	name = n;
	min_dmg = min;
	max_dmg = max;
}

Worker::Worker()
{
	hp = 100;
	name = "Worker";
	min_dmg = 5;
	max_dmg = 30;
}


Worker::~Worker()
{
}
