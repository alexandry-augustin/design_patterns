#include <iostream>
#include <cassert>
#include "BaseAggregate.h"
#include "BaseIterator.h"
#include "Algorithm.h"

int main()
{
	BaseAggregate aggregate;
	for(int i=0; i<10; ++i) aggregate.add(9-i);
	
//	size(aggregate, );
	
	Iterator<int>* it=aggregate.iterator();
	it->first();
	while(!it->isDone())
	{
		std::cout<<it->currentItem()<<" ";
		
		advance(it, 1);
	}
	std::cout<<std::endl;
	
	for(int i=0; i<aggregate.size(); ++i)
	{
		set(it, i);
		
		std::cout<<it->currentItem()<<" ";
	}
	std::cout<<std::endl;
	
	it=find(&aggregate, 5);
	assert(it!=NULL);
	std::cout<<it->currentItem()<<std::endl;
	
	aggregate.add(98);
	std::cout<<aggregate.get(aggregate.size()-1)<<std::endl;
	
	aggregate.remove(aggregate.size()-1);
	std::cout<<aggregate.get(aggregate.size()-1)<<std::endl;
	
	it->last();
	insert(&aggregate, it, 99);
	std::cout<<it->currentItem()<<std::endl;
	
	it->last();
	remove(&aggregate, it);
	std::cout<<it->currentItem()<<std::endl;
	
	return 0;
}
