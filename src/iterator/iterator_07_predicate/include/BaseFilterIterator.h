#ifndef BASEFILTERITERATOR_H
#define BASEFILTERITERATOR_H

#include "Iterator.h"
#include "Predicate.h"

template<typename T>
class Aggregate;
class Base;

class BaseFilterIterator:
	public Iterator<Base*>
{
	const Aggregate<Base*>*	_aggregate;
	int			_currentIndex;
	Predicate<Base*>*	_predicate;

public:
	BaseFilterIterator(const Aggregate<Base*>* aggregate, Predicate<Base*>* predicate);
	
	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ Base* currentItem();
	/*virtual*/ bool isDone();
};

#endif
