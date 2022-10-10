#ifndef SAMSUNGFACTORY_H
#define SAMSUNGFACTORY_H

#include "AbstractPhoneFactory.h"

class ISmart;
class IDumb;

class SamsungFactory: public AbstractPhoneFactory
{
public:
	ISmart* GetSmart();
	IDumb* GetDumb();
};
#endif
