#include "Machine.h"
#include "MachineState.h"
#include "MachineStateOFF.h"

Machine::Machine()
{
	currentState=new MachineStateOFF();
	cout<<endl;
}

void Machine::setCurrentState(MachineState* state) { currentState=state; }
void Machine::on() { currentState->on(this); }
void Machine::off() { currentState->off(this); }