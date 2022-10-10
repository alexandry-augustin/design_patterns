#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include <queue>

class Command;

class MacroCommand: public Command
{
	std::queue<Command*> m_queue;

public:
	void push(Command* command);

	/*virtual*/ void execute();
};
#endif
