#include "AbstractPhoneFactory.h"
#include "ISmart.h"
#include "IDumb.h"
#include "SamsungFactory.h"
#include "HTCFactory.h"
#include "NokiaFactory.h"

/*static*/ AbstractPhoneFactory* AbstractPhoneFactory::CreateFactory(AbstractPhoneFactory::PHONE_FACTORIES factory)
{
	if(factory==AbstractPhoneFactory::SAMSUNG)
		return new SamsungFactory();
	else if(factory==AbstractPhoneFactory::HTC)
		return new HTCFactory();
	else if(factory==AbstractPhoneFactory::NOKIA)
		return new NokiaFactory();
}
