#include <iostream>
#include <cassert>
#include "Base.h"
#include "BaseAggregate.h"
#include "BaseTypeIterator.h"

int main()
{
	BaseAggregate base_aggregate;
	for(int i=0; i<10; ++i) base_aggregate.add(new Base(i, (i%2==0?Base::TYPE_A:Base::TYPE_B)));
	
	Base::Type type=Base::TYPE_B;
	for(Iterator<Base*>* it=base_aggregate.iterator(type); !it->isDone(); it->next())
		std::cout<<it->currentItem()->getValue()<<" ";
	std::cout<<std::endl;
	//TODO delete it;
}

