#include "HTCFactory.h"
#include "ISmart.h"
#include "IDumb.h"
#include "Titan.h"
#include "Genie.h"

ISmart* HTCFactory::GetSmart()
{
	return new Titan();
}
IDumb* HTCFactory::GetDumb()
{
	return new Genie();
}
