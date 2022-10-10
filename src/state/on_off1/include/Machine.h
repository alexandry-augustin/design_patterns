#ifndef MACHINE_H
#define MACHINE_H

#include <string>

class MachineState;

class Machine
{
	MachineState* currentState;
public:
	Machine();

	void setCurrentState(MachineState* state);

	void on();
	void off();

	std::string str() const;
};
#endif
