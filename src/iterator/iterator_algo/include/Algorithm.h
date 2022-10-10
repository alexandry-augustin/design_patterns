#ifndef ALGORITHM_H
#define ALGORITHM_H

#include "Iterator.h"

//template <typename T>
//int size(Aggregate<T>* aggregate, Predicate<T>* predicate)
//{
//	assert(aggregate!=NULL);
//	assert(predicate!=NULL);
//	
//	int i=0;
//	for(Iterator<T>* it=aggregate->filterIterator(predicate); !it->isDone(); it->next())
//		++i;
//	
//	return i;
//}

//template <typename T>
//void for_each(Aggregate<T>* aggregate, Predicate<T>* it_predicate, Predicate<T>* do_)
//{
//	assert(aggregate!=NULL);
//	assert(it_predicate!=NULL);
//	assert(do_!=NULL);
//	
//	for(Iterator<T>* it=aggregate->filterIterator(it_predicate); !it->isDone(); it->next())
//	{
//		assert(it->currentItem()!=NULL);
//		
//		do_->operator()(it->currentItem());
//	}
//	
//}

template <typename T>
void advance(Iterator<T>* it, int distance)
{
	assert(it!=NULL);
	
	if(it->isDone())
		return;
	
	for(int i=0; i<distance; ++i)
		it->next();
}

template <typename T>
void set(Iterator<T>* it, int pos)
{
	assert(it!=NULL);
	
	it->first();
	for(int i=0; i<pos; ++i)
		it->next();
	
	assert(!it->isDone());
}

template <typename T>
Iterator<T>* find(Aggregate<T>* aggregate, T t)
{
	assert(aggregate!=NULL);
	
	Iterator<T>* it=aggregate->iterator();
	it->first();
	while(!it->isDone())
	{
		if(it->currentItem()==t)
			return it;
		else
			it->next();
	}
	
	return NULL;
}

template <typename T>
void insert(Aggregate<T>* aggregate, Iterator<T>* it, T t)
{
	assert(aggregate!=NULL);
	assert(it!=NULL);
	assert(!it->isDone());

	//TODO
}

template <typename T>
void remove(Aggregate<T>* aggregate, Iterator<T>* it)
{
	assert(aggregate!=NULL);
	assert(it!=NULL);
	assert(!it->isDone());
	
	//TODO
}

#endif
