#include <iostream>
#include <string>
#include <sstream>

class Prototype
{
public:
	virtual ~Prototype() { }
	virtual Prototype* clone() const=0;
};

class Base: public Prototype
{
	int m_n;
public:
	Base(int n): m_n(n) { }
	Base(const Base& b): m_n(b.m_n) { }
	virtual Prototype* clone() const
	{
		return new Base(*this);
	}
	void set_n(int n) { m_n=n; }
	int get_n() const { return m_n; }
	std::string str() const
	{
		std::stringstream oss;
		oss<<"[value: "<<m_n<<"]";
		return oss.str();
	}
};

int main(int argc, char* argv[])
{
	Prototype* b=new Base(1000);
	for(int i=1; i<10; ++i)
	{
		Base* b_clone=dynamic_cast<Base*>(b->clone());
		b_clone->set_n(b_clone->get_n()*i);
		std::cout<<b_clone->str()<<std::endl;
		delete b_clone;
	}
	delete b;

	return 0;
}
