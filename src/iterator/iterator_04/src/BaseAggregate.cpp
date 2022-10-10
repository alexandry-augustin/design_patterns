#include "BaseAggregate.h"
#include "BaseIterator.h"
#include "BaseEvenIterator.h"
#include "BaseOddIterator.h"
#include "Base.h"

BaseAggregate::BaseAggregate()
{
}

void BaseAggregate::add(Base* base)
{
	_values.push_back(base);
}

/*virtual*/ Iterator<Base*>* BaseAggregate::iterator() const
{
	return new BaseIterator(this);
}

Iterator<Base*>* BaseAggregate::even_iterator() const
{
	return new BaseEvenIterator(this);
}

Iterator<Base*>* BaseAggregate::odd_iterator() const
{
	return new BaseOddIterator(this);
}

/*virtual*/ Base* BaseAggregate::get(int index) const
{
	return _values[index];
}

/*virtual*/ int BaseAggregate::size() const
{
	return _values.size();
}

