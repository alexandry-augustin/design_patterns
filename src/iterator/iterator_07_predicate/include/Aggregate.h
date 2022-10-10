#ifndef AGGREGATE_H
#define AGGREGATE_H

template <typename T>
class Iterator;
template<typename T>
struct Predicate;

template<typename T>
class Aggregate
{
public:
	virtual Iterator<T>* iterator(Predicate<T>* predicate) const=0;
	virtual T get(int index) const=0;
	virtual int size() const=0;
};

#endif
