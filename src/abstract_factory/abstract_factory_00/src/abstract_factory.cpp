#include <cassert>
#include "abstract_factory.h"
#include "factory_00.h"
#include "factory_01.h"

static abstract_factory* create(int n)
{
	switch(n)
	{
		case 0:		return new factory_00();
		//case 1:		return new factory_01();
		default:	assert(false);
	}
}

