#include <iostream>
#include "View.h"
#include "Subject.h"

View::View(Subject* subject)
	:m_subject(subject)
{
//	m_subject.push_back(subject);
//	m_subject.front()->attach(this);

	m_subject->attach(this);
}
void View::update(Subject* subject, const std::string& state)
{
/*	if(subject==m_subject)
	{	
		static_cast<Document*>(subject);	
	}*/
	std::cout<<"[View::update] [message:"<<state<<"]."<<std::endl;
}
