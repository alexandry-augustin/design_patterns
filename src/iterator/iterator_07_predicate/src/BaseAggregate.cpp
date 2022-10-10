#include "BaseAggregate.h"
#include <cassert>
#include "BaseFilterIterator.h"
#include "Base.h"

BaseAggregate::BaseAggregate()
{
}

void BaseAggregate::add(Base* base)
{
	_values.push_back(base);
}

//template<typename TPredicate>
//Iterator<Base*>* BaseAggregate::iterator(const TPredicate& predicate) const
//{
//	return new BaseFilterIterator<TPredicate>(this, predicate);
//}

/*virtual*/ Iterator<Base*>* BaseAggregate::iterator(Predicate<Base*>* predicate) const
{
	if(predicate==0)
		assert(false);
	
	return new BaseFilterIterator(this, predicate);
}

/*virtual*/ Base* BaseAggregate::get(int index) const
{
	return _values[index];
}

/*virtual*/ int BaseAggregate::size() const
{
	return _values.size();
}

