#ifndef VIEW_H
#define VIEW_H

#include <string>
//#include <list>
#include "Observer.h"

class Subject;

class View: public Observer
{
//	std::list<Subject*>	m_subject;
	Subject*		m_subject;

public:
	View(Subject* subject);

	void update(Subject* subject, const std::string& state);
};

#endif
