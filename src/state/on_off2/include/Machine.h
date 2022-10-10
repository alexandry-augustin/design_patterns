#ifndef MACHINE_H
#define MACHINE_H

#include <string>

class MachineState;

class Machine
{
	MachineState* m_machineStateON;
	MachineState* m_machineStateOFF;

	MachineState* m_currentState;

public:
	Machine();
	~Machine();

	void setCurrentState(MachineState* state);
	MachineState* getCurrentState() const;

	MachineState* getMachineStateON() const;
	MachineState* getMachineStateOFF() const;

	void on();
	void off();

	std::string str() const;
	std::string stateStr(MachineState* state) const;
};

#endif
