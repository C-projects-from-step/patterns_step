#include "FordCar.h"

FordCar::FordCar(){
	static int f = 3;
	setNum_plate("asdf"+to_string(f+=3));
	setSpeed(220);
	setColor("Black");
	setType("sedan");
}


void FordCar::info()
{
	cout << "Car info: " << endl;
	cout << "I am ford car." << endl;
	cout << "My number plate is: " << getNum_plate() << endl;
	cout << "My speed is: " << getSpeed() << endl;
	cout << "My color is: " << getColor() << endl;
	cout << "My type is: " << getType() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}
