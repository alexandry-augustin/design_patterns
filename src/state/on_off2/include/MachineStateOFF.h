#ifndef MACHINESTATEOFF_H
#define MACHINESTATEOFF_H

#include "MachineState.h"
#include <string>

class Machine;

class MachineStateOFF: public MachineState
{
	Machine* m_machine;

public:
	MachineStateOFF(Machine* machine);

	void on();
	void off();

	std::string str() const;
};

#endif
