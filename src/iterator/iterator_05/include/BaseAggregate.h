#ifndef BASEAGGREGATE_H
#define BASEAGGREGATE_H

class Base;

#include <vector>
#include "Aggregate.h"

class BaseAggregate: public Aggregate<int>
{
	std::vector<int>	_values;
	int			_size;

public:
	BaseAggregate();

	void add(int n);
	void size(int size);
	/*virtual*/ Iterator<int>* iterator() const;
	/*virtual*/ int get(int index) const;
    	/*virtual*/ int size() const;
};

#endif
