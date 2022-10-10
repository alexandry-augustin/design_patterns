#ifndef MACHINESTATE_H
#define MACHINESTATE_H

#include <iostream>
using namespace std;

class Machine;

class MachineState
{
public:
    virtual void on(Machine* machine) { cout<<"   already ON"<<endl; }
	virtual void off(Machine* machine) { cout<<"   already OFF"<<endl; }
};

#endif