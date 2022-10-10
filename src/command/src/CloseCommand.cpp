#include <iostream>
#include "CloseCommand.h"
#include "Receiver.h"

CloseCommand::CloseCommand(Receiver* receiver)
	: m_receiver(receiver)
{
}

void CloseCommand::setReceiver(Receiver* receiver)
{
	std::cout<<"[CloseCommand::setReceiver]"<<std::endl;
	m_receiver=receiver;
}

void CloseCommand::execute()
{
	std::cout<<"[CloseCommand::execute]"<<std::endl;
	if(m_receiver!=NULL)
	{
	     m_receiver->action();
	}
}
