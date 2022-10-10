#include "Base.h"

Base::Base(int n, Base::Type type): 
	m_n(n),
	m_type(type)
{
}

int& Base::getValue()
{
	return m_n;
}

Base::Type& Base::getType()
{
	return m_type;
}

