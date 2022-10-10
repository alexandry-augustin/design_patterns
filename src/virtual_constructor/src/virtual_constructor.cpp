#include <iostream>
#include <string>

class base
{
public:
	base()
	{
		//during a constructor call, the virtual mechanism does not operate
		//(early binding occurs) -- thinking in cpp vol.2
		std::cout<<"[base::base]"<<str()<<std::endl;
	}

	void call() const
	{
		//late binding
		std::cout<<"[base::base]"<<str()<<std::endl;
	}

	virtual std::string str() const
	{
		return "base";
	}
};

class sub: public base
{

public:
	sub()
	{
		std::cout<<"[sub::sub]"<<str()<<std::endl;
	}

	/*virtual*/ std::string str() const
	{
		return "sub";
	}
};

int main()
{
	sub s;	
	s.call();

	return 0;
}
