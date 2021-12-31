#include "MersedesCar.h"


MersedesCar::MersedesCar() {
	static int a = 3;
	setNum_plate("ab2390" + to_string(a += 6));
	setSpeed(240);
	setColor("White");
	setType("sedan");
}


void MersedesCar::info()
{
	cout << "Car info: " << endl;
	cout << "I am Mersedes car." << endl;
	cout << "My number plate is: " << getNum_plate() << endl;
	cout << "My speed is: " << getSpeed() << endl;
	cout << "My color is: " << getColor() << endl;
	cout << "My type is: " << getType() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}
