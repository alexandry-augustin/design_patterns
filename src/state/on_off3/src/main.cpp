#include <iostream>
#include "Machine.h"
int main(int argc, char* argv[])
{
	Machine machine;
	char a;
	while(1)
	{
		std::cout<<"[0:off] [1:on] [q:quit]: ";
		std::cin>>a;
		switch(a)
		{
			case '0': machine.off(); break;
			case '1': machine.on(); break;
			case 'q': return 0;
		}
	}
	return 0;
}
