#pragma once
#include "Pizza.h"
class Medium_pizza :
	public Pizza
{public:
	Medium_pizza();
	void discription()override;
	double getCost()override;
};

