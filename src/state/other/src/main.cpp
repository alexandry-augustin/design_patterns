#include "Machine.h"
#include <iostream>
using namespace std;

int main()
{
	void(Machine:: *ptrs[])()={ Machine::off, Machine::on };
	Machine fsm;
	int num;
	while(1)
	{
		cout << "Enter 0/1: ";
		cin >> num;
		(fsm. *ptrs[num])();
	}

	return 0;
}
