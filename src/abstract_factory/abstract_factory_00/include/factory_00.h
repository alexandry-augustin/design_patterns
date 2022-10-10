#ifndef FACTORY_00_H
#define FACTORY_00_H

#include "abstract_factory.h"

class product_00;
class product_01;

class factory_00: public abstract_factory
{
public:
	/*virtual*/ product_00* get_product_00();
	/*virtual*/ product_01* get_product_01();
};

#endif
