#include "Group.h"

Group::Group() = default;

Group::Group(const string &_title, const string &_type)
{
	title = _title;
	type = _type;
}

void Group::addUnit(shared_ptr<Unit>&pt)
{
	group.push_back(pt);
}

shared_ptr<Unit> Group::operator[](int pos)
{
	return group[pos];
}

int Group::getSize() const
{
	return group.size();
}
