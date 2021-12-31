#pragma once
#include"Builder.h"

void registerToBattle(vector<shared_ptr<Unit>>&u);

class Director
{
	shared_ptr<Builder> builder;
	vector<shared_ptr<Unit>>&units;
public:
	Director(vector<shared_ptr<Unit>>&u);
	void setCreator(shared_ptr<Builder>pt);
	shared_ptr<Group> createGroup()const;
};

