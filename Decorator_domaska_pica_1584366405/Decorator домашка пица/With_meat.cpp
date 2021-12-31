#include "With_meat.h"

With_meat::With_meat(Pizza * pt, double c):Decorator(pt,c)
{
}

void With_meat::discription()
{
	Decorator::discription();
	cout << " With meat" << endl;
}

double With_meat::getCost()
{
	return Decorator::getCost()+cost;
}
