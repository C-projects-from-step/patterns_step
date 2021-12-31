#include "Medium_pizza.h"

Medium_pizza::Medium_pizza():Pizza(5)
{
}

void Medium_pizza::discription()
{
	cout << "Medium_pizza" << endl;
}

double Medium_pizza::getCost()
{
	return cost;
}

