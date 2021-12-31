#pragma once
#include"Vehicle.h"

class CarFactory
{public:
	virtual Vehicle*getCar() = 0;
	virtual Vehicle*getBus() = 0;
	virtual Vehicle*getTruck() = 0;
	virtual ~CarFactory();
};

