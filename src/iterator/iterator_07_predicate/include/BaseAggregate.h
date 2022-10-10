#ifndef BASEAGGREGATE_H
#define BASEAGGREGATE_H

class Base;
template <typename T>
class Predicate;

#include <vector>
#include "Aggregate.h"
#include "Predicate.h"
//#include "BaseFilterIterator.h"

class BaseAggregate:
	public Aggregate<Base*>
{
	std::vector<Base*> _values;

public:
	BaseAggregate();

	void add(Base* base);
//	template<typename TPredicate>
//	Iterator<Base*>* iterator(const TPredicate& predicate) const
//	{
//		return new BaseFilterIterator<TPredicate>(this, predicate);
//	}
	/*virtual*/ Iterator<Base*>* iterator(Predicate<Base*>* predicate=0) const;
	/*virtual*/ Base* get(int index) const;
    	/*virtual*/ int size() const;
};

#endif
