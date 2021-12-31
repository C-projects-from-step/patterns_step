#pragma once
#include "CarFactory.h"
#include"FordBus.h"
#include"FordCar.h"
#include"FordTruck.h"
class FordFactory :
	public CarFactory
{
public:
	 FordCar*getCar()override;
	 FordBus*getBus()override;
	 FordTruck*getTruck()override;
};

