#ifndef MACHINESTATEON_H
#define MACHINESTATEON_H
#include "MachineState.h"
#include <string>
class Machine;
class MachineStateON:
	public MachineState
{
	Machine* m_machine;
public:
	MachineStateON(Machine* machine);
	/*virtual*/ void on();
	/*virtual*/ void off();
	/*virtual*/ std::string str() const;
};
#endif
