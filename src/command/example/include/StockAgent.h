//Invoker
#ifndef STOCKAGENT_H
#define STOCKAGENT_H

#include <vector>

class Command;

class StockAgent
{
	//order history
	std::vector<Command*> m_commandList;

public:
	StockAgent();
	~StockAgent();

	void order(Command* command);
	void execute();
};
#endif
