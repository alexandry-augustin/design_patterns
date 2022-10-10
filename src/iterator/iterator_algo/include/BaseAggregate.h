#ifndef BASEAGGREGATE_H
#define BASEAGGREGATE_H

class Base;

#include <vector>
#include "Aggregate.h"

class BaseAggregate: public Aggregate<int>
{
	std::vector<int>	_values;

public:
	BaseAggregate();

	/*virtual*/ Iterator<int>* iterator() const;
	/*virtual*/ int get(int index) const;
	/*virtual*/ void add(int value);
	/*virtual*/ void remove(int index);
    	/*virtual*/ int size() const;
};

#endif
