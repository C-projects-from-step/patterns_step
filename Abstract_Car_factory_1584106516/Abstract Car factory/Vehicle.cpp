#include "Vehicle.h"

Vehicle::Vehicle()
{
}

Vehicle::~Vehicle()
{
}



void Vehicle::setSpeed(int s)
{
	speed = s;
}

int Vehicle::getSpeed() const
{
	return speed;
}

void Vehicle::setPas(int s)
{
	num_of_passangers = s;
}

int Vehicle::getPas() const
{
	return num_of_passangers;
}

void Vehicle::setNum_plate(const string & n)
{
	num_plate = n;
}

const string & Vehicle::getNum_plate() const
{
	return num_plate;
}

void Vehicle::setColor(const string & n)
{
	color = n;
}

const string & Vehicle::getColor() const
{
	return color;
}

void Vehicle::setType(const string & n)
{
	type = n;
}

const string & Vehicle::getType() const
{
	return type;
}
