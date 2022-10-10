#ifndef MACHINESTATE_H
#define MACHINESTATE_H

class MachineState
{
public:
	virtual void on()=0;
	virtual void off()=0;
};

#endif
