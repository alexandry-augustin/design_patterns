#ifndef MACHINESTATEOFF_H
#define MACHINESTATEOFF_H

class Machine;
class MachineState;

class MachineStateOFF: public MachineState
{
public:
    MachineStateOFF();
    ~MachineStateOFF();

    void on(Machine* machine);
};
#endif