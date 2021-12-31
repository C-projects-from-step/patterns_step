#pragma once
#include "Pizza.h"
class Decorator :
	public Pizza
{protected:
	Pizza*ingredient = nullptr;
public:
	Decorator(Pizza*pt, double c);
	Pizza*getIngredient();
	virtual ~Decorator();
	void discription()override;
	double getCost()override;
};

