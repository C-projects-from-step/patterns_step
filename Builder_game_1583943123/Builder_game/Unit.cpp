#include "Unit.h"



Unit::Unit()
{
}


Unit::~Unit()
{
}

void Unit::setHP(int a)
{
	hp = a;
}

int Unit::getHp() const
{
	return hp;
}

void Unit::setName(const string & n)
{
	name = n;
}

const string & Unit::getName() const
{
	return name;
}
