#include "MachineStateON.h"
#include <iostream>
#include "Machine.h"
#include "MachineState.h"
#include "MachineStateOFF.h"

void MachineStateON::off(Machine* machine)
{
	std::cout<<"[ON]->[OFF]"<<std::endl;
	machine->setCurrentState(new MachineStateOFF());
	delete this;
}

void MachineStateON::on(Machine* machine)
{
	std::cout<<"already [ON]"<<std::endl;
}

std::string MachineStateON::str() const
{
	return "[ON]";
}
