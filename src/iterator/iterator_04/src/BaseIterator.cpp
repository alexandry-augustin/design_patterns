#include "BaseIterator.h"
#include "BaseAggregate.h"
#include <cassert>

BaseIterator::BaseIterator(const Aggregate<Base*>* aggregate): 
	_aggregate(aggregate)
{
	first();	
}

/*virtual*/ void BaseIterator::first()
{
	 _currentIndex=0;
}

/*virtual*/ void BaseIterator::next()
{
	++_currentIndex;
}

/*virtual*/ Base* BaseIterator::currentItem()
{
	assert(!isDone());

	return _aggregate->get(_currentIndex);
}

/*virtual*/ bool BaseIterator::isDone()
{
	if(_currentIndex>=_aggregate->size())
		return true;
	
	return false;
}

