#include<iostream>
#include<memory>
#include<vector>
#include"FordFactory.h"
#include"MersedesFactory.h"
#include<ctime>
using namespace std;

int main() {

	srand(time(0));
	vector<shared_ptr<Vehicle>>arr;
	shared_ptr<CarFactory>factory;

	for (size_t i = 0; i < 8; i++) {
		if (rand() % 2 == 0)
			factory = make_shared<FordFactory>();
		else factory = make_shared<MersedesFactory>();

		switch (rand()%3==0)
		{
		case 0: arr.push_back(shared_ptr<Vehicle>(factory->getBus())); break;
		case 1: arr.push_back(shared_ptr<Vehicle>(factory->getCar())); break;
		case 2: arr.push_back(shared_ptr<Vehicle>(factory->getTruck())); break;
		}
	}

	for (auto el : arr)
		el->info();


	system("pause");
}