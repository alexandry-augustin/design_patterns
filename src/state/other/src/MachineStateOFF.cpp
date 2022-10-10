#include "MachineStateOFF.h"
#include "Machine.h"
#include "MachineState.h"
#include "MachineStateON.h"

MachineStateOFF::MachineStateOFF() { cout<<"   OFF-constructor "; };
MachineStateOFF::~MachineStateOFF() { cout<<"   destructor-OFF\n"; };

void MachineStateOFF::on(Machine* machine)
{
	cout<<"   going from OFF to ON";
	machine->setCurrentState(new MachineStateON());
	delete this;
}
