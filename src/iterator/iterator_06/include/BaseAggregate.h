#ifndef BASEAGGREGATE_H
#define BASEAGGREGATE_H

class Base;

#include <vector>
#include "Aggregate.h"
#include "Base.h"

class BaseAggregate: public Aggregate<Base*>
{
	std::vector<Base*> _values;

public:
	BaseAggregate();

	void add(Base* base);
	Iterator<Base*>* iterator(Base::Type type) const;
	/*virtual*/ Iterator<Base*>* iterator() const;
	/*virtual*/ Base* get(int index) const;
    	/*virtual*/ int size() const;
};

#endif
