#ifndef MACHINESTATE_H
#define MACHINESTATE_H

class Machine;

class MachineState
{
public:
	virtual void on(Machine* machine)=0;
	virtual void off(Machine* machine)=0;
};
#endif
