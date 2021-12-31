#pragma once
#include "Pizza.h"
class Small_pizza :
	public Pizza
{public:
	Small_pizza();
	void discription()override;
	double getCost()override;
};

