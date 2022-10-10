#ifndef AGGREGATE_H
#define AGGREGATE_H

template <typename T>
class Iterator;

template<typename T>
class Aggregate
{
public:
	virtual Iterator<T>* iterator() const=0;
	virtual T get(int index) const=0;
	virtual int size() const=0;
};

#endif
