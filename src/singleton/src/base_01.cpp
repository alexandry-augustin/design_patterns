#include "base_01.h"
#include <cassert>
#include <iostream>

base_01* base_01::_instance=new base_01; //eager initialization

base_01::base_01():
	_n(0)
{
	assert(_instance==0);
	std::cout<<"base_01::base_01"<<std::endl;
}

base_01* base_01::instance()
{
	assert(_instance!=0);
	std::cout<<"entering base_01::instance"<<std::endl;
	std::cout<<"exiting base_01::instance"<<std::endl;
	return _instance;
}

int base_01::get()
{
	return _n++;
}
