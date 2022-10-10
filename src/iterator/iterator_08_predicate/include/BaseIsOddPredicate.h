#ifndef BASEISODDPREDICATE_H
#define BASEISODDPREDICATE_H

#include "Base.h"

class BaseIsOddPredicate:
	public Predicate<Base*>
{
public:
	
	/*virtual*/ bool operator()(Base* base)
	{
		return (base->getN()%2!=0);
	}
};

#endif
