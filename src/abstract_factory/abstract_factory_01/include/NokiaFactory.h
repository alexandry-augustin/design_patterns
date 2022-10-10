#ifndef NOKIAFACTORY_H
#define NOKIAFACTORY_H

#include "AbstractPhoneFactory.h"

class ISmart;
class IDumb;

class NokiaFactory: public AbstractPhoneFactory
{
public: 
	ISmart* GetSmart();
	IDumb* GetDumb();
};
#endif
