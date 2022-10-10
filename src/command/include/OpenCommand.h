#ifndef OPENCOMMAND_H
#define OPENCOMMAND_H

#include <string>
#include "Command.h" 

class Receiver;

class OpenCommand: public Command
{
	Receiver* m_receiver;

public:
	OpenCommand(Receiver* receiver=NULL);

	void setReceiver(Receiver* receiver);
	void execute();
};
#endif
