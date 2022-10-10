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
		return 0;
	}
};

class strategy_01:
	public strategy
{
public:
	/*virtual*/ int get()
	{
		return 1;
	}
};

class context
{
	strategy*	_strat;
public:
	context():
		_strat(0)
	{
	}
	void set_strategy(strategy* strat)
	{
		_strat=strat;
	}
	int get()
	{
		assert(_strat!=0);
		return _strat->get();
	}
};

int main()
{
	{
		context* c=new context();
		strategy* strat_00=new strategy_00();
		strategy* strat_01=new strategy_01();

		c->set_strategy(strat_00);
		assert(c->get()==0);

		c->set_strategy(strat_01);
		assert(c->get()==1);
	}
	return 0;
}
