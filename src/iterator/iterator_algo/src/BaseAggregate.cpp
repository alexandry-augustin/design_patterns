#include "BaseAggregate.h"
#include "BaseIterator.h"

BaseAggregate::BaseAggregate()
{
}

/*virtual*/ Iterator<int>* BaseAggregate::iterator() const
{
	return new BaseIterator(this);
}

/*virtual*/ void BaseAggregate::add(int value)
{
	_values.push_back(value);
}

/*virtual*/ void BaseAggregate::remove(int index)
{
	_values.erase(_values.begin()+index);
}

/*virtual*/ int BaseAggregate::get(int index) const
{
	return _values.at(index);
}

/*virtual*/ int BaseAggregate::size() const
{
	return _values.size();
}

