#ifndef INVOKER_H 
#define INVOKER_H

#include "Command.h"
#include <vector> 

class Invoker
{
	std::vector<Command*> m_commands;

public:
	void add(Command* command);
	void run();
};
#endif
