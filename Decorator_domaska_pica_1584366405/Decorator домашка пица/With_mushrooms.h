#pragma once
#include "Decorator.h"
class With_mushrooms :
	public Decorator
{public:
	With_mushrooms(Pizza*pt, double c=2);
	void discription()override;
	double getCost()override;
};

