#include "AbstractPhoneFactory.h"
#include "IDumb.h"
#include "ISmart.h"
#include <iostream>

int main(int argc, char* argv[])
{
	AbstractPhoneFactory* factory=AbstractPhoneFactory::CreateFactory(AbstractPhoneFactory::SAMSUNG);

	std::cout<<"Dumb phone from Samsung: "<<factory->GetDumb()->Name()<<std::endl;
	delete factory->GetDumb();
	std::cout<<"Smart phone from Samsung: "<<factory->GetSmart()->Name()<<std::endl;
	delete factory->GetSmart();
	delete factory;

	factory=AbstractPhoneFactory::CreateFactory(AbstractPhoneFactory::HTC);
	std::cout<<"Dumb phone from HTC: "<<factory->GetDumb()->Name()<<std::endl;
	delete factory->GetDumb();
	std::cout<<"Smart phone from HTC: "<<factory->GetSmart()->Name()<<std::endl;
	delete factory->GetSmart();
	delete factory;
	
	factory=AbstractPhoneFactory::CreateFactory(AbstractPhoneFactory::NOKIA);
	std::cout<<"Dumb phone from Nokia: "<<factory->GetDumb()->Name()<<std::endl;
	delete factory->GetDumb();
	std::cout<<"Smart phone from Nokia: "<<factory->GetSmart()->Name()<<std::endl;	
	delete factory->GetSmart();

	return 0;
}
//Dumb phone from Samsung: Primo
//Smart phone from Samsung: GalaxyS2
//Dumb phone from HTC: Genie
//Smart phone from HTC: Titan
//Dumb phone from Nokia: Asha
//Smart phone from Nokia: Lumia
