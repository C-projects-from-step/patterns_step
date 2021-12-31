#include "Decorator.h"

Decorator::Decorator(Pizza * pt, double c):Pizza(c)
{
	ingredient = pt;
}

Pizza * Decorator::getIngredient()
{
	Pizza*tmp = ingredient;
	ingredient = nullptr;
	return tmp;
}

Decorator::~Decorator()
{
	delete ingredient;
}

void Decorator::discription()
{
	if (ingredient)
		ingredient->discription();
}

double Decorator::getCost()
{
	if (ingredient)
		return ingredient->getCost();
	return 0.0;
}
