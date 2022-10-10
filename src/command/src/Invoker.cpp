#include "Invoker.h"
#include <iostream> 

void Invoker::add(Command* command) 
{ 
	std::cout<<"[Invoker::add]"<<std::endl;
	m_commands.push_back(command); 
}

void Invoker::run() 
{
	std::cout<<"[Invoker::run]"<<std::endl;
	std::vector<Command*>::iterator it=m_commands.begin();
	while(it!=m_commands.end())
		(*it++)->execute();
}
