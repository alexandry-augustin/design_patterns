#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class Subject;

struct Observer
{
	virtual void update(Subject* subject, const std::string& state)=0;
};

#endif
