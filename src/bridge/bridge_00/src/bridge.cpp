//adapted from https://gist.github.com/pazdera/1147487

//allows abstractions and implementations to vary independently

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

struct abstraction_interface
{
	virtual int get()=0;
};

class abstraction:
	public abstraction_interface
{
protected:
	implementation_interface* _pimpl;
public:
	abstraction(implementation_interface* pimpl):
		_pimpl(pimpl)
	{
	}
};

class abstraction_00:
	public abstraction
{
public:
	abstraction_00(implementation_interface* pimpl):
		abstraction(pimpl)
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
	abstraction_01(implementation_interface* pimpl):
		abstraction(pimpl)
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
		abstraction_interface*		abs=0;
		implementation_interface*	impl_00=new implementation_00;
		implementation_interface*	impl_01=new implementation_01;
		
		abs=new abstraction_00(impl_00);
		assert(abs->get()==0);
		abs=new abstraction_00(impl_01);
		assert(abs->get()==1);
	
		abs=new abstraction_01(impl_00);
		assert(abs->get()==0);
		abs=new abstraction_01(impl_01);
		assert(abs->get()==1);
	}
	return 0;
}
