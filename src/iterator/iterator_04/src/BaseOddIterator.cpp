#include "BaseOddIterator.h"
#include "Base.h"
#include "BaseAggregate.h"
#include <cassert>

BaseOddIterator::BaseOddIterator(const Aggregate<Base*>* aggregate): 
	_aggregate(aggregate)
{
	first();	
}

/*virtual*/ void BaseOddIterator::first()
{
	 _currentIndex=0;
	while(!isDone())
		if(currentItem()->getN()%2!=0)
			break;
		else
			++_currentIndex;
}

/*virtual*/ void BaseOddIterator::next()
{
	while(true)
	{
		++_currentIndex;
		if(isDone())
			break;
		if(currentItem()->getN()%2!=0)
			break;
	}
}

/*virtual*/ Base* BaseOddIterator::currentItem()
{
	return _aggregate->get(_currentIndex);
}

/*virtual*/ bool BaseOddIterator::isDone()
{
	if(_currentIndex>=_aggregate->size())
		return true;
	
	return false;
}

