#include "FordFactory.h"

FordCar * FordFactory::getCar()
{
	return new FordCar();
}

FordBus * FordFactory::getBus()
{
	return new FordBus();
}

FordTruck * FordFactory::getTruck()
{
	return new FordTruck();
}
