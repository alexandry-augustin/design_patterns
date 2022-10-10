#include <iostream>
#include "OpenCommand.h"
#include "Receiver.h"

OpenCommand::OpenCommand(Receiver* receiver)
	: m_receiver(receiver)
{
}

void OpenCommand::setReceiver(Receiver* receiver)
{
	std::cout<<"[OpenCommand::setReceiver]"<<std::endl;
	m_receiver=receiver;
}

void OpenCommand::execute()
{
	std::cout<<"[OpenCommand::execute]"<<std::endl;
	if(m_receiver!=NULL)
	{
	     m_receiver->action();
	}
}
