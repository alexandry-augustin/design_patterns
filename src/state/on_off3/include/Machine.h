#ifndef MACHINE_H
#define MACHINE_H
#include <string>
class MachineState;
class Machine
{
	MachineState* m_currentState;
	MachineState* m_machineStateON;
	MachineState* m_machineStateOFF;
public:
	Machine();
	~Machine();

	MachineState*	getCurrentState() const;
	MachineState*	getMachineStateON() const;
	MachineState*	getMachineStateOFF() const;
	void		setCurrentState(MachineState* state);
	void		on();
	void		off();
};
#endif
