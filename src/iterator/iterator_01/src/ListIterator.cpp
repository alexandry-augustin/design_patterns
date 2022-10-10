#include "ListIterator.h"
#include "List.h"

/*virtual*/ ListIterator::ListIterator(const List* list)
	: m_list(list), m_currentIndex(0)
{
}

/*virtual*/ void ListIterator::first()
{
	m_currentIndex=0;
}

/*virtual*/ void ListIterator::next()
{
	++m_currentIndex;
}

/*virtual*/ bool ListIterator::isDone()
{
	return m_currentIndex==m_list->Size();
}

/*virtual*/ int ListIterator::currentItem()
{
	Node* node=m_list->mHead->mNextNode;
	for(int i=0; i<m_currentIndex; ++i)
		node=node->mNextNode;

	return node->mNextNode->mValue;
}

