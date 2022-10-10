#ifndef MACHINESTATEON_H
#define MACHINESTATEON_H

#include "MachineState.h"
#include <string>

class Machine;

class MachineStateON: public MachineState
{
public:
	void on(Machine* machine);
	void off(Machine* machine);

	std::string str() const;
};
#endif
