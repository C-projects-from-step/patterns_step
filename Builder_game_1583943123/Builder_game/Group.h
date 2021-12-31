#pragma once
#include"Unit.h"
#include <string>
#include <algorithm>
#include"Warrior.h"
#include"Wizard.h"
#include"Worker.h"
#include<vector>
using namespace std;

class Group
{
	string title;
	string  type;
	vector<shared_ptr<Unit>> group;
public:
	Group();
	Group(const string&_title, const string &_type);
	void addUnit(shared_ptr<Unit>&pt);
	shared_ptr<Unit> operator[](int pos);
	int getSize()const;

};

