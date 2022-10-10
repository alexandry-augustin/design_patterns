#ifndef MACHINESTATE_H
#define MACHINESTATE_H
#include <string>
struct MachineState
{
	virtual void		on()=0;
	virtual void		off()=0;
	virtual std::string	str() const=0;
};
#endif
