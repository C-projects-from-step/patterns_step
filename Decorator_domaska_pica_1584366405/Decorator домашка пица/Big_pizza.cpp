#include "Big_pizza.h"

Big_pizza::Big_pizza():Pizza(10)
{
}

void Big_pizza::discription()
{
	cout << " Big pizza " << endl;
}

double Big_pizza::getCost()
{
	return cost;
}
