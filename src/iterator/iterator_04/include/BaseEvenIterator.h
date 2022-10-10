#ifndef BASEEVENITERATOR_H
#define BASEEVENITERATOR_H

#include "Iterator.h"

template<typename T>
class Aggregate;
class Base;

class BaseEvenIterator: public Iterator<Base*>
{
	const Aggregate<Base*>*	_aggregate;
	int			_currentIndex;

public:
	BaseEvenIterator(const Aggregate<Base*>* aggregate);
	
	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ Base* currentItem();
	/*virtual*/ bool isDone();
};

#endif
