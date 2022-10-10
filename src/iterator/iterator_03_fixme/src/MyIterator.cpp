#include "MyIterator.h"
#include "MyAggregate.h"
#include <cassert>

MyIterator::MyIterator(const Aggregate* aggregate)
	: _currentIndex(0),
	_aggregate(aggregate)
{
	
}

/*virtual*/ int MyIterator::first()
{
	 _currentIndex=0;
	return _aggregate->get(_currentIndex);
}

/*virtual*/ int MyIterator::next()
{
	++_currentIndex;
	if(!isDone())
	    return _aggregate->get(_currentIndex);

assert(false);
	return -1;
}

/*virtual*/ int MyIterator::currentItem()
{
	return _aggregate->get(_currentIndex);
}

/*virtual*/ bool MyIterator::isDone()
{
	if(_currentIndex<_aggregate->size())
	    return false;

	return true;
}

