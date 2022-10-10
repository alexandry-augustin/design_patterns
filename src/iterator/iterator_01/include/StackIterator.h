#ifndef STACKITER_H
#define STACKITER_H

#include "Iterator.h"

class Stack;

class StackIterator: public Iterator
{
	const Stack*	stack;
	int		currentIndex;

public:
	StackIterator(const Stack* stack);

	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ bool isDone();
	/*virtual*/ int currentItem();
};

#endif
