#include <iostream>
#include <cassert>
#include "shared_ptr.h"

class base
{
	int _n;
public:
	base(int n): _n(n) { /*std::cout<<"[base::base] ["<<_n<<"]"<<std::endl;*/ }
	~base() { /*std::cout<<"[base::~base] ["<<_n<<"]"<<std::endl;*/ }
	int get_n() const { return _n; }
	void set_n(int n) { _n=n; }
};

int main()
{
	{
		shared_ptr<base> ptr(new base(5));

		assert(ptr->get_n()==5);
	}
	return 0;
}
