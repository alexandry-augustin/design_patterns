#ifndef BASEITERATOR_H
#define BASEITERATOR_H

#include "Iterator.h"

template<typename T>
class Aggregate;
class Base;

class BaseIterator: public Iterator<Base*>
{
	const Aggregate<Base*>*	_aggregate;
	int			_currentIndex;

public:
	BaseIterator(const Aggregate<Base*>* aggregate);
	
	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ Base* currentItem();
	/*virtual*/ bool isDone();
};

#endif
