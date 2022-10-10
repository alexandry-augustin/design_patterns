#ifndef FILTERITERATOR_H
#define FILTERITERATOR_H

#include "Iterator.h"
#include "Predicate.h"

template<typename T>
class Aggregate;

//template<typename T>
//class FilterIterator:
//	public Iterator<T>
//{
//	const Aggregate<T>*	_aggregate;
//	int			_currentIndex;
//	Predicate<T>*		_predicate;
//
//public:
//	FilterIterator(const Aggregate<T>* aggregate, Predicate<T>* predicate);
//	
//	/*virtual*/ void first();
//	/*virtual*/ void next();
//	/*virtual*/ T currentItem();
//	/*virtual*/ bool isDone();
//};

#include <cassert>

template<typename T>
class FilterIterator:
	
	public Iterator<T>
	
{
	const Aggregate<T>*	_aggregate;
	int			_currentIndex;
	Predicate<T>*		_predicate;

public:
	FilterIterator(const Aggregate<T>* aggregate, Predicate<T>* predicate):
		_aggregate(aggregate),
		_predicate(predicate)
	{
		assert(_aggregate!=0);
		assert(_predicate!=0);
		
		first();
	}
	
	/*virtual*/ void first()
	{
		 _currentIndex=0;
		while(!isDone())
			if(_predicate->operator()(currentItem()))
				break;
			else
				++_currentIndex;
	}
	
	/*virtual*/ void next()
	{
		while(true)
		{
			++_currentIndex;
			if(isDone())
				break;
			if(_predicate->operator()(currentItem()))
				break;
		}
	}
	
	/*virtual*/ T currentItem()
	{
		assert(!isDone());
		
		return _aggregate->get(_currentIndex);
	}
	
	/*virtual*/ bool isDone()
	{
		if(_currentIndex>=_aggregate->size())
			return true;
		
		return false;
	}
};

#endif
