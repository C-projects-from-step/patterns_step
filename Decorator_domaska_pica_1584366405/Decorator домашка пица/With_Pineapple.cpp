#include "With_Pineapple.h"

With_Pineapple::With_Pineapple(Pizza * pt, double c):Decorator(pt,c)
{
}

void With_Pineapple::discription()
{
	Decorator::discription();
	cout << "with pineapple" << endl;
}

double With_Pineapple::getCost()
{
	return Decorator::getCost() + cost;
}
