#ifndef LISTITER_H
#define LISTITER_H

#include "Iterator.h"

class List;

class ListIterator: public Iterator
{
	const List*	m_list;
	int		m_currentIndex;

public:
	ListIterator(const List* list);

	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ bool isDone();
	/*virtual*/ int currentItem();
};

#endif
