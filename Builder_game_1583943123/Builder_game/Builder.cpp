#include "Builder.h"

Builder::~Builder() = default;

Builder::Builder(vector<shared_ptr<Unit>> &u) :units(u)
{

}

shared_ptr<Group> Builder::getGroup() const
{
	return group;
}
