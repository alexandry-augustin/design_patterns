#include "StackIterator.h"
#include "Stack.h"

/*virtual*/ StackIterator::StackIterator(const Stack* stack)
	: stack(stack), currentIndex(0)
{
}

/*virtual*/ void StackIterator::first()
{
	currentIndex=0;
}

/*virtual*/ void StackIterator::next()
{
	++currentIndex;
}

/*virtual*/ bool StackIterator::isDone()
{
	return currentIndex==stack->sp+1;
}

/*virtual*/ int StackIterator::currentItem()
{
	return stack->m_items[currentIndex];
}

