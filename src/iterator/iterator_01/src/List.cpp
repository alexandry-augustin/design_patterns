#include "List.h"
#include "ListIterator.h"

List::List()
	: mSize(0),
	mHead(new Node()),
	mTail(new Node())
{
	mHead->mNextNode=mTail;
	mTail->mPrevNode=mHead;

}

List::~List()
{
	while(!isEmpty())
		pop_front();
}

//Node* List::getHead() const
//{
//	return mHead;
//}

int List::Size() const
{
	return mSize;
}

bool List::isEmpty()
{
	return mSize==0;
}

void List::push_back(int value)
{
	Node* newNode=new Node();
	newNode->mValue=value;
	newNode->mPrevNode=mTail;

	mTail->mNextNode=newNode;
	mTail=newNode;
	++mSize;
}

void List::pop_front()
{
	if(isEmpty())
		return;

	Node* tmp=mHead;
	mHead=mHead->mNextNode;
	delete tmp;
	--mSize;
}

/*virtual*/ Iterator* List::iterator() const
{
	return new ListIterator(this);
}

