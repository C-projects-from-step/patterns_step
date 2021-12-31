#pragma once
#include "Builder.h"
class PvEBuilder :
	public Builder
{public:
	PvEBuilder(vector<shared_ptr<Unit>>&u);
	void createGroup() override;

	bool addWizard() override;

	bool addWorker() override;

	bool addWarrior() override;
};

