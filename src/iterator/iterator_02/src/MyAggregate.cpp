#include "MyAggregate.h"
#include "MyIterator.h"

MyAggregate::MyAggregate()
{
}

void MyAggregate::add(int value)
{
	_values.push_back(value);
}

/*virtual*/ Iterator* MyAggregate::iterator() const
{
	return new MyIterator(this);
}

/*virtual*/ int MyAggregate::get(int index) const
{
	return _values[index];
}

/*virtual*/ int MyAggregate::size() const
{
	return _values.size();
}

