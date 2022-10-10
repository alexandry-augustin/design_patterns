#include "Machine.h"
#include <iostream>
#include <string>
#include "MachineState.h"
#include "MachineStateOFF.h"
#include "MachineStateON.h"

Machine::Machine()
{
	m_machineStateON=new MachineStateON(this);
	m_machineStateOFF=new MachineStateOFF(this);

	m_currentState=m_machineStateOFF;
}

Machine::~Machine()
{
	delete m_machineStateON;
	delete m_machineStateOFF;
}

void Machine::setCurrentState(MachineState* state) 
{ 
	std::cout<<stateStr(getCurrentState())<<"->"<<stateStr(state)<<std::endl;
	m_currentState=state; 
}

MachineState* Machine::getCurrentState() const
{
	return m_currentState;
}

MachineState* Machine::getMachineStateON() const
{
	return m_machineStateON;
}

MachineState* Machine::getMachineStateOFF() const
{
	return m_machineStateOFF;
}

void Machine::on() 
{ 
	getCurrentState()->on(); 
}

void Machine::off() 
{ 
	getCurrentState()->off(); 
}

std::string Machine::str() const
{
	return "["+stateStr(getCurrentState())+"]";
}

std::string Machine::stateStr(MachineState* state) const
{
	std::string str;

	if(state==getMachineStateON())
		str=static_cast<MachineStateON*>(getMachineStateON())->str();

	if(state==getMachineStateOFF())
		str=static_cast<MachineStateOFF*>(getMachineStateOFF())->str();

	return str;
}
