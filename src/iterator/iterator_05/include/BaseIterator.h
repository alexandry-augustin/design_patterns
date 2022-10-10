#ifndef BASEITERATOR_H
#define BASEITERATOR_H

#include "Iterator.h"

template<typename T>
class Aggregate;
class Base;

class BaseIterator: public Iterator<int>
{
	const Aggregate<int>*	_aggregate;
	int			_currentIndex;

public:
	BaseIterator(const Aggregate<int>* aggregate);
	
	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ int currentItem();
	/*virtual*/ bool isDone();
};

#endif
