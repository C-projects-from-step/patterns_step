#pragma once
#include"Group.h"

class Builder
{
protected:
	vector<shared_ptr<Unit>>&units;
	shared_ptr<Group> group;
	int id = 1;
	int war_count = 0;
	int wiz_count = 0;
	int work_count = 0;
public:
	Builder(vector<shared_ptr<Unit>>&u);
	virtual ~Builder();
	virtual void createGroup() = 0;
	virtual bool addWizard() = 0;
	virtual bool addWorker() = 0;
	virtual bool addWarrior() = 0;
	shared_ptr<Group> getGroup()const;
	
};

