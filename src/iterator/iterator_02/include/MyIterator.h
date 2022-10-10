#ifndef MYITERATOR_H
#define MYITERATOR_H

#include "Iterator.h"

class Aggregate;

class MyIterator: public Iterator
{
	const Aggregate* 	_aggregate;
	int			_currentIndex;

public:
	MyIterator(const Aggregate* aggregate);
	
	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ int currentItem();
	/*virtual*/ bool isDone();
};

#endif
