#ifndef BASEITERATOR_H
#define BASEITERATOR_H

#include "Iterator.h"
#include "Base.h"

template<typename T>
class Aggregate;

class BaseTypeIterator: public Iterator<Base*>
{
	const Aggregate<Base*>*	_aggregate;
	int			_currentIndex;
	Base::Type		_type;

public:
	BaseTypeIterator(const Aggregate<Base*>* aggregate, Base::Type type);
	
	/*virtual*/ void first();
	/*virtual*/ void next();
	/*virtual*/ Base* currentItem();
	/*virtual*/ bool isDone();
};

#endif
