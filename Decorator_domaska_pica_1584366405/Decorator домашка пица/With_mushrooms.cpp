#include "With_mushrooms.h"

With_mushrooms::With_mushrooms(Pizza * pt, double c) :Decorator(pt, c)
{
}

void With_mushrooms::discription()
{
	Decorator::discription();
	cout << " With mushrooms" << endl;
}

double With_mushrooms::getCost()
{
	return Decorator::getCost() + cost;
}


