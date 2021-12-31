#pragma once
#include<string>
#include <iostream>
using namespace std;

class Unit
{
protected:
	int hp=100;
	string name;
	int min_dmg=10;
	int max_dmg=50;
public:
	virtual void attack(Unit *) = 0;
	virtual void getDamage(int) = 0;
	Unit();
	virtual ~Unit();
	void setHP(int a);
	int getHp()const;
	void setName(const string &n);
	const string& getName()const;
	
};

