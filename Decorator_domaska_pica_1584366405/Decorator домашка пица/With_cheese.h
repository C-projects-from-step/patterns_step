#pragma once
#include "Decorator.h"
class With_cheese :
	public Decorator
{public:
	With_cheese(Pizza*pt, double c=3);
	void discription()override;
	double getCost()override;
};

