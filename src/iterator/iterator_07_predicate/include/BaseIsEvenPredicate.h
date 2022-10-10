#ifndef BASEISEVENPREDICATE_H
#define BASEISEVENPREDICATE_H

#include "Base.h"

class BaseIsEvenPredicate:
	public Predicate<Base*>
{
public:
	
	/*virtual*/ bool operator()(Base* base)
	{
		return (base->getN()%2==0);
	}
	
};

#endif
