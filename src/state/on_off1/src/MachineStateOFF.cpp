#include "MachineStateOFF.h"
#include <iostream>
#include "Machine.h"
#include "MachineState.h"
#include "MachineStateON.h"

void MachineStateOFF::on(Machine* machine)
{
	std::cout<<"[OFF]->[ON]"<<std::endl;
	machine->setCurrentState(new MachineStateON());
	delete this;
}

void MachineStateOFF::off(Machine* machine)
{
	std::cout<<"already [OFF]"<<std::endl;
}

std::string MachineStateOFF::str() const
{
	return "[OFF]";
}
