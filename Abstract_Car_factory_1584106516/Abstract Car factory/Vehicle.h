#pragma once
#include <string>
#include<iostream>
using namespace std;


class Vehicle
{
	string num_plate;
	int speed = 0;
	string color;
	string type;
	int num_of_passangers = 5;
public:
	virtual void info() = 0;
	Vehicle();
	virtual ~Vehicle();
	void setSpeed(int s);
	int getSpeed()const;
	void setPas(int s);
	int getPas()const;
	void setNum_plate(const string&n);
	const string&getNum_plate()const;
	void setColor(const string&n);
	const string&getColor()const;
	void setType(const string&n);
	const string&getType()const;
};

