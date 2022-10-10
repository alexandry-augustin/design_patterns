#ifndef MACHINE_H
#define MACHINE_H

class MachineState;

class Machine
{
  class MachineState* currentState;

public:
    Machine();

    void setCurrentState(MachineState* state);
    void on();
	void off();
};

#endif