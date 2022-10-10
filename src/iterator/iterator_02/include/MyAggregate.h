#ifndef MYAGGREGATE_H
#define MYAGGREGATE_H

#include <vector>
#include "Aggregate.h"

class MyAggregate: public Aggregate
{
	std::vector<int> _values;

public:
	MyAggregate();

	void add(int value);
	/*virtual*/ Iterator* iterator() const;
	/*virtual*/ int get(int index) const;
    	/*virtual*/ int size() const;
};

#endif
