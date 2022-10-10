#include "NokiaFactory.h"
#include "ISmart.h"
#include "IDumb.h"
#include "Lumia.h"
#include "Asha.h"

ISmart* NokiaFactory::GetSmart()
{
	return new Lumia();
}
IDumb* NokiaFactory::GetDumb()
{
	return new Asha();
}
