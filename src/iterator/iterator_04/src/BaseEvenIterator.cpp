#include "BaseEvenIterator.h"
#include "Base.h"
#include "BaseAggregate.h"
#include <cassert>

BaseEvenIterator::BaseEvenIterator(const Aggregate<Base*>* aggregate): 
	_aggregate(aggregate)
{
	first();	
}

/*virtual*/ void BaseEvenIterator::first()
{
	 _currentIndex=0;
	while(!isDone())
		if(currentItem()->getN()%2==0)
			break;
		else
			++_currentIndex;
}

/*virtual*/ void BaseEvenIterator::next()
{
	while(true)
	{
		++_currentIndex;
		if(isDone())
			break;
		if(currentItem()->getN()%2==0)
			break;
	}
}

/*virtual*/ Base* BaseEvenIterator::currentItem()
{
	assert(!isDone());

	return _aggregate->get(_currentIndex);
}

/*virtual*/ bool BaseEvenIterator::isDone()
{
	if(_currentIndex>=_aggregate->size())
		return true;

	return false;
}

