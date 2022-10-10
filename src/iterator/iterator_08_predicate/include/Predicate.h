#ifndef PREDICATE_H
#define PREDICATE_H

template<typename T>
struct Predicate
{
	virtual bool operator()(T t)=0;	
};

#endif
