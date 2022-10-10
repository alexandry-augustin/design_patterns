#include "MachineStateON.h"
#include "Machine.h"
#include "MachineState.h"
#include "MachineStateOFF.h"

MachineStateON::MachineStateON() { cout<<"   ON-constructor "; }
MachineStateON::~MachineStateON() { cout<<"   destructor-ON"<<endl; }

void MachineStateON::off(Machine* machine)
{
	cout<<"   going from ON to OFF";
	machine->setCurrentState(new MachineStateOFF());
	delete this;
}
