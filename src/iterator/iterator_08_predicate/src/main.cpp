#include <iostream>
#include <cassert>
#include "Base.h"
#include "Predicate.h"
#include "BaseIsOddPredicate.h"
#include "BaseIsEvenPredicate.h"
#include "BaseNullPredicate.h"
#include "BaseAggregate.h"
#include "FilterIterator.h"
#include "Predicate.h"

int main()
{
	BaseAggregate base_aggregate;
	for(int i=0; i<10; ++i) base_aggregate.add(new Base(9-i));
	
	//for(Iterator<Base*>* it=base_aggregate.iterator(new BaseNullPredicate()); !it->isDone(); it->next())
	//or
	for(Iterator<Base*>* it=base_aggregate.iterator(); !it->isDone(); it->next())
		std::cout<<it->currentItem()->getN()<<" ";
	std::cout<<std::endl;
	//TODO delete it;
	//TODO delete BaseNullPredicate;
	
	for(Iterator<Base*>* it=base_aggregate.iterator(new BaseIsOddPredicate()); !it->isDone(); it->next())
		std::cout<<it->currentItem()->getN()<<" ";
	std::cout<<std::endl;
	//TODO delete it;
	//TODO delete BaseIsOddPredicate;
	
	for(Iterator<Base*>* it=base_aggregate.iterator(new BaseIsEvenPredicate()); !it->isDone(); it->next())
		std::cout<<it->currentItem()->getN()<<" ";
	std::cout<<std::endl;
	//TODO delete it;
	//TODO delete BaseIsEvenPredicate;
	
	//TODO delete all Base*;
	
	return 0;
}
