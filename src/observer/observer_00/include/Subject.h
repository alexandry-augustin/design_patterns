#ifndef SUBJECT_H
#define SUBJECT_H

class Observer;

struct Subject
{
	virtual void attach(Observer* obs)=0;
	virtual void detach(Observer* obs)=0;
	virtual void notify(const std::string& state)=0;
	virtual void setChanged()=0;
	virtual void clearChanged()=0;
};

#endif
