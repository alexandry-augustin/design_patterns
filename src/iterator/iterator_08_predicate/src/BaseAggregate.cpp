#include "BaseAggregate.h"
#include <cassert>
#include "FilterIterator.h"
#include "BaseNullPredicate.h"
#include "Base.h"

BaseAggregate::BaseAggregate()
{
}

void BaseAggregate::add(Base* base)
{
	_values.push_back(base);
}

/*virtual*/ Iterator<Base*>* BaseAggregate::iterator(Predicate<Base*>* predicate) const
{
	if(predicate==0)
		return new FilterIterator<Base*>(this, new BaseNullPredicate());
	
	return new FilterIterator<Base*>(this, predicate);
}

/*virtual*/ Base* BaseAggregate::get(int index) const
{
	return _values[index];
}

/*virtual*/ int BaseAggregate::size() const
{
	return _values.size();
}

