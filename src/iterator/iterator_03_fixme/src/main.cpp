//http://www.codeproject.com/Articles/362986/Understanding-and-Implementing-the-Iterator-Patter
#include <iostream>
#include "MyAggregate.h"
#include "MyIterator.h"

int main()
{
	
	MyAggregate my_aggregate;
	for(int i=0; i<10; ++i) my_aggregate.add(9-i);
	Iterator* it=my_aggregate.iterator();
	for(int i=it->first(); !it->isDone(); i=it->next())
		std::cout<<it->currentItem()<<" ";
	std::cout<<std::endl;
	delete it;
	
//	std::vector<int> v;
//	for(int i=0; i<10; ++i) v.push_back(i);
//	for(std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
//		std::cout<<*it<<" ";
//	std::cout<<std::endl;
	
}

