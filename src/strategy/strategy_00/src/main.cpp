#include <cassert>
#include <iostream>

struct strategy
{
	virtual int get()=0;
};

class strategy_00:
	public strategy
{
public:
	/*virtual*/ int get()
	{
		return 1+1;
	}
};

class strategy_01:
	public strategy
{
public:
	/*virtual*/ int get()
	{
		return 2;
	}
};

class context
{
	strategy*	_strat;
public:
	context(strategy* strat):
		_strat(strat)
	{
	}
	int get()
	{
		return _strat->get();
	}
};

int main()
{
	{
		context* c=new context(new strategy_00());
		assert(c->get()==2);
	}
	return 0;
}
