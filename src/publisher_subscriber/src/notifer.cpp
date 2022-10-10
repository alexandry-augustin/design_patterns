#include <cassert>
#include <string>
#include "notifier_01.h"

class base_00: public notifier<int>::observer
{
	int _n;
public:
	base_00(int n=0):
		notifier<int>::observer(),
		_n(n)
	{
		/*notifier<int>::observer::*/add();
	}
	int get() const { return _n; }
	/*virtual*/ void update(int& n) { _n=n; }
};

class base_01: public notifier<std::string>::observer
{
	std::string _str;
public:
	base_01():
		notifier<std::string>::observer()
	{
		/*notifier<int>::observer::*/add();
	}
	std::string get() const { return _str; }
	/*virtual*/ void update(std::string& str) { _str=str; }
};

int main(int argc, char* argv[])
{
	{
		base_00 b_00, b_01;
		base_01 b_02;

		int n=9;
		notifier<int>::notify(n);

		std::string str("abc");
		notifier<std::string>::notify(str);

		assert(b_00.get()==9);
		assert(b_01.get()==9);
		assert(b_02.get()=="abc");
	}
	return 0;
}
