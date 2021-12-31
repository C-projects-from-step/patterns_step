#include "MersedesFactory.h"

MersedesCar * MersedesFactory::getCar()
{
	return new MersedesCar();
}

MersedesBus * MersedesFactory::getBus()
{
	return new MersedesBus();
}

MersedesTruck * MersedesFactory::getTruck()
{
	return new MersedesTruck();
}
