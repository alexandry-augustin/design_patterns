#ifndef BASEAGGREGATE_H
#define BASEAGGREGATE_H

class Base;
template <typename T>
class Predicate;
template <typename T>
class Iterator;

#include <vector>
#include "Aggregate.h"
#include "Predicate.h"

class BaseAggregate:
	public Aggregate<Base*>
{
	std::vector<Base*> _values;

public:
	BaseAggregate();

	void add(Base* base);
	/*virtual*/ Iterator<Base*>* iterator(Predicate<Base*>* predicate=0) const;
	/*virtual*/ Base* get(int index) const;
    	/*virtual*/ int size() const;
};

#endif
