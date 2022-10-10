#ifndef ABSTRACTPHONEFACTORY_H
#define ABSTRACTPHONEFACTORY_H

class ISmart;
class IDumb;

class AbstractPhoneFactory
{	
public:
	enum PHONE_FACTORIES
	{
		SAMSUNG,
		HTC,
		NOKIA
	};

	virtual ISmart* GetSmart()=0;
	virtual IDumb* GetDumb()=0;

	static AbstractPhoneFactory* CreateFactory(AbstractPhoneFactory::PHONE_FACTORIES factory);
};
#endif
