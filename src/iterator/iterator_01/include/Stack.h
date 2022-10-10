#ifndef STACK_H
#define STACK_H

#include "Aggregate.h"

class StackIterator;

class Stack: public Aggregate
{
	friend class StackIterator;

	int m_items[10];
	int sp;

public:
	Stack();

//	int getSP() const;

	/*virtual*/ Iterator* iterator() const;
	void push(int value);
	int pop();
	bool isEmpty();
};

#endif
