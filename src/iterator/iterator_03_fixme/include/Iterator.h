#ifndef ITERATOR_H
#define ITERATOR_H

class Iterator
{
public:
	virtual int first()=0;
	virtual int next()=0;
	virtual int currentItem()=0;
	virtual bool isDone()=0;		
};

#endif
