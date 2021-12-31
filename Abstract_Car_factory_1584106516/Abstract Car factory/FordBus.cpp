#include "FordBus.h"

FordBus::FordBus() {
	static int m = 0;
	
	setNum_plate("ab23c"+to_string(m+=2)+"a");
	setSpeed(180);
	setColor("Purple");
	setType("Mini-Van");
	
}


void FordBus::info()
{
	cout << "Car info: " << endl;
	cout << "I am ford bus." << endl;
	cout << "My number plate is: " << getNum_plate() << endl;
	cout << "My speed is: " << getSpeed() << endl;
	cout << "My color is: " << getColor() << endl;
	cout << "My type is: " << getType() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	
}
