#include "StockAgent.h"
#include <iostream> 
#include "Command.h"

StockAgent::StockAgent()
{
}

StockAgent::~StockAgent()
{
/*	if(!m_commandList.empty())
	for(int i=0; i<m_commandList.size(); ++i)
		delete m_commandList[i];*/
}

void StockAgent::order(Command* command)
{
	m_commandList.push_back(command);
	//command->execute(); //uncomment to use m_commandList to keep history of the commands (StockAgent::execute becomes useless)
}

void StockAgent::execute()
{
	if(!m_commandList.empty())
	for(int i=0; i<m_commandList.size(); ++i)
		m_commandList[i]->execute();
}
