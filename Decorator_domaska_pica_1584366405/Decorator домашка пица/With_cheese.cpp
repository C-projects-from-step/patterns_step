#include "With_cheese.h"

With_cheese::With_cheese(Pizza * pt, double c):Decorator(pt,c)
{
}

void With_cheese::discription()
{
	Decorator::discription();
	cout << "with cheese " << endl;
}

double With_cheese::getCost()
{
	return Decorator::getCost()+cost;
}
