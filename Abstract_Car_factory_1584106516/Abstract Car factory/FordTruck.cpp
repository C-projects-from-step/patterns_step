#include "FordTruck.h"


FordTruck::FordTruck() {
	static int m = 23;
	setNum_plate(to_string(m++)+"absc23");
	setSpeed(150);
	setColor("Brown");
	setType("Extra long truck");
}


void FordTruck::info()
{
	cout << "Car info: " << endl;
	cout << "I am ford truck." << endl;
	cout << "My number plate is: " << getNum_plate() << endl;
	cout << "My speed is: " << getSpeed() << endl;
	cout << "My color is: " << getColor() << endl;
	cout << "My type is: " << getType() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}

