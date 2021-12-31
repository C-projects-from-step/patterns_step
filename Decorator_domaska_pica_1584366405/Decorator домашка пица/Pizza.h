#pragma once
#include<iostream>
#include<string>
using namespace std;

class Pizza
{protected:
	double cost=0;
public:
	Pizza(double c);
	virtual void discription() = 0;
	virtual double getCost() = 0;
	virtual ~Pizza();
};

