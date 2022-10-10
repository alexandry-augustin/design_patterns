#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <list>
#include "Subject.h"

class Observer;

class Document: public Subject
{
	std::string		m_state;
	std::list<Observer*>	m_obs;

public:
	~Document();

	void attach(Observer* obs);
	void detach(Observer* obs);
	void notify(const std::string& state);
	void setChanged();
	void clearChanged();

	std::string getState() const;
	void setState(const std::string& state);
};

#endif
