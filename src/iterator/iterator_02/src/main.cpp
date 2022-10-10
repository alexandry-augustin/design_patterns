#include <iostream>
#include "MyAggregate.h"
#include "MyIterator.h"

int main()
{
	MyAggregate my_aggregate;
	for(int i=0; i<10; ++i) my_aggregate.add(9-i);
	
	for(Iterator* it=my_aggregate.iterator(); !it->isDone(); it->next())
		std::cout<<it->currentItem()<<" ";
	std::cout<<std::endl;
	//TODO delete it;
	
//	std::vector<int> v;
//	for(int i=0; i<10; ++i) v.push_back(i);
//	for(std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
//		std::cout<<*it<<" ";
//	std::cout<<std::endl;
	
	Iterator* it=my_aggregate.iterator();
	for(it->first(); !it->isDone(); it->next())
		std::cout<<it->currentItem()<<" ";
	std::cout<<std::endl;
	
	it->first();
	while(!it->isDone())
	{
		std::cout<<it->currentItem()<<" ";
		it->next();
	}
	std::cout<<std::endl;
	
	delete it;
}
