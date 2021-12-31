#include "MersedesBus.h"

MersedesBus::MersedesBus() {
	static int a = 3;
	setNum_plate("ab2390"+to_string(a+=5));
	setSpeed(190);
	setColor("Red");
	setType("Double-decker bus");
}


void MersedesBus::info()
{
	
	cout << "I am Mersedes bus." << endl;
	cout << "My number plate is: " << getNum_plate() << endl;
	cout << "My speed is: " << getSpeed() << endl;
	cout << "My color is: " << getColor() << endl;
	cout << "My type is: " << getType() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}
