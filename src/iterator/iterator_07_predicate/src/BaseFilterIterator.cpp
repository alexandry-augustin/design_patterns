#include "BaseFilterIterator.h"
#include "BaseAggregate.h"
#include <cassert>
#include "BaseIsOddPredicate.h"

BaseFilterIterator::BaseFilterIterator(const Aggregate<Base*>* aggregate, Predicate<Base*>* predicate): 
	_aggregate(aggregate),
	_predicate(predicate)
{
	first();	
}

/*virtual*/ void BaseFilterIterator::first()
{
	 _currentIndex=0;
	while(!isDone())
	if(_predicate->operator()(currentItem()))
		break;
	else
		++_currentIndex;
}

/*virtual*/ void BaseFilterIterator::next()
{
	while(true)
	{
		++_currentIndex;
		if(isDone())
			break;
		if(_predicate->operator()(currentItem()))
			break;
	}
}

/*virtual*/ Base* BaseFilterIterator::currentItem()
{
	assert(!isDone());
	
	return _aggregate->get(_currentIndex);
}

/*virtual*/ bool BaseFilterIterator::isDone()
{
	if(_currentIndex>=_aggregate->size())
		return true;

	return false;
}

