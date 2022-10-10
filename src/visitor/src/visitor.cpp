#include <cassert>
#include <vector>
#include <iostream>

class base_01;
class base_02;

struct visitor
{
	virtual void visit(base_01*)=0;
	virtual void visit(base_02*)=0;
};

struct base_00
{
	virtual void accept(visitor*)=0;
	virtual int get_n() const=0;
};

class base_01: public base_00
{
	int _n;
public:
	base_01(int n): _n(n)
	{
		assert(_n%2!=0);
	}
	/*virtual*/ void accept(visitor* v)
	{
		v->visit(this);
	}
	/*virtual*/ int get_n() const
	{
		return _n;
	}
};

class base_02: public base_00
{
	int _n;
public:
	base_02(int n): _n(n)
	{
		assert(_n%2==0);
	}
	/*virtual*/ void accept(visitor* v)
	{
		v->visit(this);
	}
	/*virtual*/ int get_n() const
	{
		return _n;
	}
};

struct visitor_00: public visitor
{
	/*virtual*/ void visit(base_01* b)
	{
		assert(b->get_n()%2!=0);
	}
	/*virtual*/ void visit(base_02* b)
	{
		assert(b->get_n()%2==0);
	}
};

class visitor_01: public visitor
{
	int _total;
public:
	/*virtual*/ void visit(base_01* b)
	{
		_total+=b->get_n();
	}
	/*virtual*/ void visit(base_02* b)
	{
		_total+=b->get_n();
	}
	int get_total() const
	{
		return _total;
	}
};

int main()
{
	{
		std::vector<base_00*> v;
		v.push_back(new base_01(1));
		v.push_back(new base_02(2));
		v.push_back(new base_01(3));
		v.push_back(new base_02(4));

		visitor_00* v_00=new visitor_00();
		visitor_01* v_01=new visitor_01();

		for(std::vector<base_00*>::iterator it=v.begin(); it!=v.end(); ++it)
		{
			(*it)->accept(v_00);
			(*it)->accept(v_01);
		}
		assert(v_01->get_total()==10);
	}
}
