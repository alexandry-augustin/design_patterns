#ifndef MACHINESTATEOFF_H
#define MACHINESTATEOFF_H

#include "MachineState.h"
#include <string>

class Machine;

class MachineStateOFF: public MachineState
{
public:
	void on(Machine* machine);
	void off(Machine* machine);

	std::string str() const;
};
#endif
