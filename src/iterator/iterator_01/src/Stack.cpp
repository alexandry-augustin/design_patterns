#include "Stack.h"
#include "StackIterator.h"

Stack::Stack()
	: sp(-1) 
{
}

//int Stack::getSP() const
//{
//	return sp;
//}

void Stack::push(int value)
{
	m_items[++sp]=value;
}

int Stack::pop()
{
	return m_items[sp--];
}

bool Stack::isEmpty()
{
	return sp==-1;
}

/*virtual*/ Iterator* Stack::iterator() const
{
	return new StackIterator(this);
}

