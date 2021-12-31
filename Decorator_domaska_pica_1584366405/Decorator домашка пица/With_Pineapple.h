#pragma once
#include "Decorator.h"
class With_Pineapple :
	public Decorator
{public:
	With_Pineapple(Pizza*pt, double c = 4);
	void discription()override;
	double getCost()override;
};

