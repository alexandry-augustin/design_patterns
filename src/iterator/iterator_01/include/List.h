#ifndef LIST_H
#define LIST_H

#include "Aggregate.h"

class Node
{
public:
	Node* mNextNode;
	Node* mPrevNode;
	int mValue;

	Node()
		:mNextNode(0),
		mPrevNode(0),
		mValue(0)
	{
	}
};

class ListIterator;

class List: public Aggregate
{
	friend class ListIterator;

	Node*	mHead;
	Node*	mTail;
	int	mSize;

public:
	List();
	~List();

//	Node* getHead() const;

	/*virtual*/ Iterator* iterator() const;
	void push_back(int value);
	void pop_front();
	int Size() const;
	bool isEmpty();
};

#endif
