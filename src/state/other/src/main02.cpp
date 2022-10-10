#include <iostream>
using namespace std;

class Vehicle 
{
	VehState* mState;

	friend class VehState;
	void changeState (VehState* newState); // { mState = newState; }

public:
	Vehicle ();

	void turnOn(); // { mState->turnOn(*this); }
	void engageGear(); // { mState->engageGear (*this); }
	void disengageGear(); //{ mState->disengageGear (*this); }
	void turnOff(); //{ mState->turnOff (*this); }
};

struct VehState 
{
	virtual void turnOn(Vehicle&); // allows changing Vehicle object state pointer
	virtual void engageGear(Vehicle&); // same as above

	virtual void disengageGear(Vehicle&);
	virtual void turnOff(Vehicle&);
protected:
	void changeState (Vehicle& veh, VehState* newState) { veh.changeState(newState); }
};

struct MovingState: public VehState 
{
	static MovingState& theMovingState(); // Singleton design pattern
	virtual void disengageGear(Vehicle& veh);
};

struct IdleState: public VehState 
{
	static IdleState& theIdleState(); // Singleton design pattern
	virtual void engageGear(Vehicle& veh) {changeState(veh, &MovingState::theMovingState()); }
};

struct OffState: public VehState 
{
	static OffState& theOffState(); // Singleton design pattern
	virtual void turnOn(Vehicle& veh) { changeState(veh, &IdleState::theIdleState()); }
};

Vehicle::Vehicle():mState(&OffState::theOffState()) { }
void Vehicle::turnOn() { mState->turnOn(*this); }
void Vehicle::engageGear() { mState->engageGear (*this); }
void Vehicle::disengageGear() { mState->disengageGear (*this); }
void Vehicle::turnOff() { mState->turnOff (*this); }
void Vehicle::changeState(VehState* newState) { mState=newState; }