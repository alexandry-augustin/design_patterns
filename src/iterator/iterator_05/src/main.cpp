#include <iostream>
#include <cassert>
#include "BaseAggregate.h"
#include "BaseIterator.h"

int main()
{
	BaseAggregate aggregate;
	for(int i=0; i<10; ++i) aggregate.add(9-i);
	aggregate.size(5);
	
	for(Iterator<int>* it=aggregate.iterator(); !it->isDone(); it->next())
		std::cout<<it->currentItem()<<" ";
	std::cout<<std::endl;
	//TODO delete it;

	return 0;
}

