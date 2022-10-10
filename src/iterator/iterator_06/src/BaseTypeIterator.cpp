#include "BaseTypeIterator.h"
#include "BaseAggregate.h"
#include <cassert>

BaseTypeIterator::BaseTypeIterator(const Aggregate<Base*>* aggregate, Base::Type type): 
	_aggregate(aggregate),
	_type(type)
{
	first();	
}

/*virtual*/ void BaseTypeIterator::first()
{
	 _currentIndex=0;
 	 while(!isDone())
		if(currentItem()->getType()==_type)
			break;
		else
			++_currentIndex;
}

/*virtual*/ void BaseTypeIterator::next()
{
	while(true)
	{
		++_currentIndex;
		if(isDone())
			break;
		if(currentItem()->getType()==_type)
			break;
	}
}

/*virtual*/ Base* BaseTypeIterator::currentItem()
{
	assert(!isDone());
	
	return _aggregate->get(_currentIndex);
}

/*virtual*/ bool BaseTypeIterator::isDone()
{
	if(_currentIndex>=_aggregate->size())
		return true;
	
	return false;
}

