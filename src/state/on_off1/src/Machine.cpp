#include "Machine.h"
#include "MachineState.h"
#include "MachineStateOFF.h"

Machine::Machine()
{
	currentState=new MachineStateOFF();
}

void Machine::setCurrentState(MachineState* state) 
{ 
	currentState=state; 
}

void Machine::on() 
{ 
	currentState->on(this); 
}

void Machine::off() 
{ 
	currentState->off(this); 
}

std::string Machine::str() const
{
	return "";
}
