#include "MersedesTruck.h"

MersedesTruck::MersedesTruck() {
	static int a = 3;
	setNum_plate("ab2390" + to_string(a += 7));
	setSpeed(160);
	setColor("Green");
	setType("Long truck");
}


void MersedesTruck::info()
{
	cout << "Car info: " << endl;
	cout << "I am Mersedes truck." << endl;
	cout << "My number plate is: " << getNum_plate() << endl;
	cout << "My speed is: " << getSpeed() << endl;
	cout << "My color is: " << getColor() << endl;
	cout << "My type is: " << getType() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}