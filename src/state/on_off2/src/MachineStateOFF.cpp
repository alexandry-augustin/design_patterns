#include "MachineStateOFF.h"
#include <iostream>
#include "Machine.h"
#include "MachineState.h"
#include "MachineStateON.h"

MachineStateOFF::MachineStateOFF(Machine* machine) 
	:m_machine(machine)
{ 
}

void MachineStateOFF::on()
{
	m_machine->setCurrentState(m_machine->getMachineStateON());
}

void MachineStateOFF::off()
{
	std::cout<<"already [OFF]"<<std::endl;
}

std::string MachineStateOFF::str() const
{
	return "[OFF]";
}
