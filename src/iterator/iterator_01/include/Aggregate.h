#ifndef AGGREGATE_H
#define AGGREGATE_H

class Iterator;

class Aggregate
{
public:
	virtual Iterator* iterator() const=0; //factory method
};

#endif
