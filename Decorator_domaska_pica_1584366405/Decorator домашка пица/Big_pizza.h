#pragma once
#include "Pizza.h"
class Big_pizza :
	public Pizza
{public:
	Big_pizza();
	void discription()override;
	double getCost()override;
};

