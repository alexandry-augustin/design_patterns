#ifndef ITERATOR_H
#define ITERATOR_H

template<typename T>
class Iterator
{
public:
	virtual void first()=0;		//initilizes the current element to the first element
	virtual void last()=0;
	virtual void next()=0;		//advances the current element to the next element
	virtual void prev()=0;
	virtual T currentItem()=0;
	virtual bool isDone()=0;	//test whether we've advanced beyond the last element
};

#endif
