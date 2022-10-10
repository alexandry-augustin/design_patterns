#include "Base.h"

Base::Base(int n)
	: m_n(n)
{
}

void Base::setN(int n)
{
	m_n=n;
}

int Base::getN()
{
	return m_n;
}

