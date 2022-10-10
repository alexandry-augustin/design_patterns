#include "MachineStateON.h"
#include <iostream>
#include "Machine.h"
#include "MachineState.h"
#include "MachineStateOFF.h"
MachineStateON::MachineStateON(Machine* machine):
	m_machine(machine)
{
}
void MachineStateON::on()
{
	std::cout<<"already [ON]"<<std::endl;
}
void MachineStateON::off()
{
	m_machine->setCurrentState(m_machine->getMachineStateOFF());
}
std::string MachineStateON::str() const
{
	return "[ON]";
}
