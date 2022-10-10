#include <iostream>
#include "List.h"
#include "ListIterator.h"
#include "Stack.h"
#include "StackIterator.h"

bool operator==(const Stack& left, const Stack& right)
{
	Iterator* left_it=left.iterator();
	Iterator* right_it=right.iterator();
	for(left_it->first(), right_it->first(); !left_it->isDone(); left_it->next(), right_it->next())
		if(left_it->currentItem()!=right_it->currentItem())
			break;

	bool ret=left_it->isDone() && right_it->isDone();
	delete left_it;
	delete right_it;

	return ret;
}

int main()
{
	{
		Stack my_stack;
		for(int i=0; i<10; ++i) my_stack.push(i);
		Iterator* stack_it=my_stack.iterator();
		for(stack_it->first(); !stack_it->isDone(); stack_it->next())
			std::cout<<stack_it->currentItem()<<" ";
		std::cout<<std::endl;
		delete stack_it;
	/*}
	{*/
		Stack my_stack_2;
		for(int i=0; i<10; ++i) my_stack_2.push(9-i);
		std::cout<<(my_stack==my_stack_2)<<std::endl;
	}
	{
		List my_list;
		for(int i=0; i<10; ++i) my_list.push_back(9-i);
		Iterator* list_it=my_list.iterator();
		for(list_it->first(); !list_it->isDone(); list_it->next())
			std::cout<<list_it->currentItem()<<" ";
		std::cout<<std::endl;
		delete list_it;
	}
//	std::vector<int> v;
//	for(int i=0; i<10; ++i) v.push_back(i);
//	for(std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
//		std::cout<<*it<<" ";
//	std::cout<<std::endl;
}
