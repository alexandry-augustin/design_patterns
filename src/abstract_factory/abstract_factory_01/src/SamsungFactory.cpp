#include "SamsungFactory.h"
#include "ISmart.h"
#include "IDumb.h"
#include "GalaxyS2.h"
#include "Primo.h"

ISmart* SamsungFactory::GetSmart()
{
	return new GalaxyS2();
}
IDumb* SamsungFactory::GetDumb()
{
	return new Primo();
}
