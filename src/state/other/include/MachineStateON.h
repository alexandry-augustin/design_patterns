#ifndef MACHINESTATEON_H
#define MACHINESTATEON_H

class Machine;
class MachineState;

class MachineStateON: public MachineState
{
public:
    MachineStateON();
    ~MachineStateON();

	void off(Machine* machine);
};
#endif