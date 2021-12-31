#include "Small_pizza.h"

Small_pizza::Small_pizza():Pizza(7)
{
}

void Small_pizza::discription()
{
	cout << "Small pizza" << endl;
}

double Small_pizza::getCost()
{
	return cost;
}
