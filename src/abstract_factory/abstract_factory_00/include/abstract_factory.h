#ifndef FACTORY_H
#define FACTORY_H

class product_00;
class product_01;

class abstract_factory
{
	static abstract_factory* create(int n);

	virtual product_00* get_product_00()=0;
	virtual product_01* get_product_01()=0;
};
#endif
