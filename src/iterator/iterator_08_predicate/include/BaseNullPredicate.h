#ifndef BASENULLPREDICATE_H
#define BASENULLPREDICATE_H

#include "Base.h"

class BaseNullPredicate:
	public Predicate<Base*>
{
public:
	
	/*virtual*/ bool operator()(Base* base)
	{
		return true;
	}
};

#endif
