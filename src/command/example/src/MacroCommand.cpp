#include "Command.h"
#include "MacroCommand.h"

void MacroCommand::push(Command* command)
{
	m_queue.push(command);
}

/*virtual*/ void MacroCommand::execute()
{
	for(std::queue<Command*>::iterator it=m_queue.begin(); it!=m_queue.end(); ++it)
		it->execute();
}
