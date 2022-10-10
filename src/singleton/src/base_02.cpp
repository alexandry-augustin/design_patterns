#include "base_02.h"
#include <iostream>

base_02::base_02():
	_n(0)
{
	std::cout<<"base_02::base_02"<<std::endl;
}

base_02* base_02::instance_00()
{
	std::cout<<"entering base_02::instance_00"<<std::endl;
	static base_02* instance=new base_02();//guaranteed to be created and destroyed only once
	std::cout<<"exiting base_02::instance_00"<<std::endl;
	return instance;
}

base_02& base_02::instance_01()
{
	std::cout<<"entering base_02::instance_01"<<std::endl;
	static base_02 instance; //guaranteed to be created and destroyed only once
	std::cout<<"exiting base_02::instance_01"<<std::endl;
	return instance;
}

int base_02::get()
{
	return _n++;
}
