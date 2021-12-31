#pragma once
#include "CarFactory.h"
#include"MersedesBus.h"
#include"MersedesCar.h"
#include"MersedesTruck.h"
class MersedesFactory :
	public CarFactory
{public:
	MersedesCar*getCar()override;
	MersedesBus*getBus()override;
	MersedesTruck*getTruck()override;
};

