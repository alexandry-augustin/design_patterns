#include <iostream>
#include <cassert>
#include "Base.h"
#include "BaseAggregate.h"
#include "BaseIterator.h"
#include "BaseEvenIterator.h"
#include "BaseOddIterator.h"

int main()
{
	BaseAggregate base_aggregate;
	for(int i=0; i<10; ++i) base_aggregate.add(new Base(9-i));
	
	for(Iterator<Base*>* it=base_aggregate.iterator(); !it->isDone(); it->next())
		std::cout<<it->currentItem()->getN()<<" ";
	std::cout<<std::endl;
	//TODO delete it;

	for(Iterator<Base*>* it=base_aggregate.even_iterator(); !it->isDone(); it->next())
		std::cout<<it->currentItem()->getN()<<" ";
	std::cout<<std::endl;
	//TODO delete it;
	
	for(Iterator<Base*>* it=base_aggregate.odd_iterator(); !it->isDone(); it->next())
		std::cout<<it->currentItem()->getN()<<" ";
	std::cout<<std::endl;
	//TODO delete it;
	
	//TODO delete it;
	// ++it	it->next()
	// *it	it->currentItem()
	
//	std::vector<Base*> v;
//	for(int i=0; i<10; ++i) v.push_back(new Base(9-i));
//	for(std::vector<Base*>::iterator it=v.begin(); it!=v.end(); ++it)
//		std::cout<<(*it)->getN()<<" ";
//	std::cout<<std::endl;
	
	Iterator<Base*>* it=base_aggregate.iterator();
	for(it->first(); !it->isDone(); it->next())
		std::cout<<it->currentItem()->getN()<<" ";
	std::cout<<std::endl;
	
	it->first();
	while(!it->isDone())
	{
		std::cout<<it->currentItem()->getN()<<" ";
		it->next();
	}
	std::cout<<std::endl;
	
	delete it;
}

