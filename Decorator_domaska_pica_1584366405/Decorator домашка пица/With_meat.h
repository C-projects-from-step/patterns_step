#pragma once
#include "Decorator.h"
class With_meat :
	public Decorator
{public:
	With_meat(Pizza*pt, double c=6);
	void discription()override;
	double getCost()override;
};

