//adapted from https://gist.github.com/pazdera/1147487

// no abstraction_interface
// use default implementations

#include <cassert>

struct implementation_interface
{
	virtual int retrieve()=0;
};

class implementation_00:
	public implementation_interface
{
public:
	/*virtual*/ int retrieve()
	{
		return 0;
	}
};

class implementation_01:
	public implementation_interface
{
public:
	/*virtual*/ int retrieve()
	{
		return 1;
	}
};

class abstraction
{
protected:
	implementation_interface* _pimpl;
public:
	abstraction(implementation_interface* pimpl):
		_pimpl(pimpl)
	{
	}
	virtual int get()=0;
};

class abstraction_00:
	public abstraction
{
public:
	abstraction_00():
		abstraction(new implementation_00())
	{
	}
	/*virtual*/ int get()
	{
		return _pimpl->retrieve();
	}
};

class abstraction_01:
	public abstraction
{
public:
	abstraction_01():
		abstraction(new implementation_01())
	{
	}
	/*virtual*/ int get()
	{
		return _pimpl->retrieve();
	}
};

int main()
{
	{
		abstraction*			abs=0;
		
		abs=new abstraction_00();
		assert(abs->get()==0);
	
		abs=new abstraction_01();
		assert(abs->get()==1);
	}
	return 0;
}
