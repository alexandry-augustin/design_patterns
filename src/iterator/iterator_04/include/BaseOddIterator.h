#ifndef BASEODDITERATOR_H
#define BASEODDITERATOR_H

#include "Iterator.h"

template<typename T>
class Aggregate;
class Base;

class BaseOddIterator: public Iterator<Base*>
{
	const Aggregate<Base*>*	_aggregate;
	int			_currentIndex;

public:
	BaseOddIterator(const Aggregate<Base*>* aggregate);
	
	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ Base* currentItem();
	/*virtual*/ bool isDone();
};

#endif
