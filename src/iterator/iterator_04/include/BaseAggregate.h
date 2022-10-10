#ifndef BASEAGGREGATE_H
#define BASEAGGREGATE_H

class Base;

#include <vector>
#include "Aggregate.h"

class BaseAggregate: public Aggregate<Base*>
{
	std::vector<Base*> _values;

public:
	BaseAggregate();

	void add(Base* base);
	/*virtual*/ Iterator<Base*>* iterator() const;
	Iterator<Base*>* odd_iterator() const;
	Iterator<Base*>* even_iterator() const;
	/*virtual*/ Base* get(int index) const;
    	/*virtual*/ int size() const;
};

#endif
