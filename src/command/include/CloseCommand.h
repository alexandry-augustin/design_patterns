#ifndef CLOSECOMMAND_H
#define CLOSECOMMAND_H

#include <string>
#include "Command.h" 

class Receiver;

class CloseCommand: public Command
{
	Receiver* m_receiver;

public:
	CloseCommand(Receiver* receiver=NULL);

	void setReceiver(Receiver* receiver);
	void execute();
};
#endif
