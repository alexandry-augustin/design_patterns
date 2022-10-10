#ifndef AGGREGATE_H
#define AGGREGATE_H

class Iterator;

class Aggregate
{
public:
	virtual Iterator* iterator() const=0;
	virtual int get(int index) const=0;
	virtual int size() const=0;
};

#endif
