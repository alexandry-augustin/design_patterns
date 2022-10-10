#include "base_00.h"
#include <iostream>

base_00* base_00::_instance=0;

base_00::base_00():
	_n(0)
{
	std::cout<<"base_00::base_00"<<std::endl;
}

base_00* base_00::instance()
{
	std::cout<<"entering base_00::instance"<<std::endl;
	if(base_00::_instance==0) //lazy init
		base_00::_instance=new base_00();
	std::cout<<"exiting base_00::instance"<<std::endl;
	return _instance;
}

int base_00::get()
{
	return _n++;
}
