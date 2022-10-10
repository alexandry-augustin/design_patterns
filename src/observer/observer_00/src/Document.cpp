#include <iostream>
#include "Document.h"
#include "Observer.h"

Document::~Document()
{
	std::list<Observer*>::iterator it=m_obs.begin();
//	for(std::list<Observer*>::iterator it=m_obs.begin(); it!=m_obs.end(); ++it)
//	detach(*it);
//	while(!m_obs.empty())
//	{
//		detach(*it);
//		++it;
//	}
}
void Document::attach(Observer* obs)
{
	m_obs.push_back(obs);
}
void Document::detach(Observer* obs)
{
	m_obs.remove(obs);
}
void Document::notify(const std::string& state)
{
	for(std::list<Observer*>::iterator it=m_obs.begin(); it!=m_obs.end(); ++it)
		(*it)->update(this, state);
}
void Document::setChanged()
{
}
void Document::clearChanged()
{
}
std::string Document::getState() const
{
	return m_state;
}

void Document::setState(const std::string& state)
{
	std::cout<<"[Document::setState] [state:"<<state<<"]."<<std::endl;

	m_state=state;
	notify(state);
}

