#include "Machine.h"
#include <iostream>
#include <string>
#include "MachineState.h"
#include "MachineStateOFF.h"
#include "MachineStateON.h"
Machine::Machine():
	m_machineStateON(NULL),
	m_machineStateOFF(NULL),
	m_currentState(NULL)
{
	m_machineStateON=new MachineStateON(this);
	m_machineStateOFF=new MachineStateOFF(this);
	m_currentState=m_machineStateOFF;
}
Machine::~Machine()
{
	if(m_machineStateON!=NULL)
	{
		delete m_machineStateON;
		m_machineStateON=NULL;
	}
	if(m_machineStateOFF!=NULL)
	{
		delete m_machineStateOFF;
		m_machineStateOFF=NULL;
	}
}
void Machine::setCurrentState(MachineState* state) 
{ 
	std::cout<<getCurrentState()->str()<<"->"<<state->str()<<std::endl;
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
