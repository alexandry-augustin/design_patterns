#ifndef MACHINESTATEON_H
#define MACHINESTATEON_H

#include "MachineState.h"
#include <string>

class Machine;

class MachineStateON: public MachineState
{
	Machine* m_machine;

public:
	MachineStateON(Machine* machine);

	void on();
	void off();

	std::string str() const;
};

#endif
