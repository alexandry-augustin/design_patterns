#include "BaseAggregate.h"
#include "BaseIterator.h"

BaseAggregate::BaseAggregate()
	: _size(0)
{
}

void BaseAggregate::add(int n)
{
	_values.push_back(n);
}

/*virtual*/ Iterator<int>* BaseAggregate::iterator() const
{
	return new BaseIterator(this);
}

/*virtual*/ int BaseAggregate::get(int index) const
{
	return _values.at(index);
}

void BaseAggregate::size(int size)
{
	_size=size;
}

/*virtual*/ int BaseAggregate::size() const
{
	return _size;
}

