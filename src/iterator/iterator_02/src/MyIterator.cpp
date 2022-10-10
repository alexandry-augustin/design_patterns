#include "MyIterator.h"
#include "MyAggregate.h"
#include <cassert>

MyIterator::MyIterator(const Aggregate* aggregate)
	: _currentIndex(0),
	_aggregate(aggregate)
{
	
}

/*virtual*/ void MyIterator::first()
{
	 _currentIndex=0;
}

/*virtual*/ void MyIterator::next()
{
	++_currentIndex;
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

