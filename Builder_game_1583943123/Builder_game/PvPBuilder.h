#pragma once
#include "Builder.h"
class PvPBuilder :
	public Builder
{
	
public:
	PvPBuilder(vector<shared_ptr<Unit>>&u);
	void createGroup() override;

	bool addWizard() override;

	bool addWorker() override;

	bool addWarrior() override;

};

