#ifndef MACHINESTATEOFF_H
#define MACHINESTATEOFF_H
#include "MachineState.h"
#include <string>
class Machine;
class MachineStateOFF:
	public MachineState
{
	Machine* m_machine;
public:
	MachineStateOFF(Machine* machine);
	/*virtual*/ void on();
	/*virtual*/ void off();
	/*virtual*/ std::string str() const;
};
#endif
