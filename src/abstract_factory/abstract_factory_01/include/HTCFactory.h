#ifndef HTCFACTORY_H
#define HTCFACTORY_H

#include "AbstractPhoneFactory.h"

class ISmart;
class IDumb;

class HTCFactory: public AbstractPhoneFactory
{
public:
	ISmart* GetSmart();
	IDumb* GetDumb();
};
#endif
