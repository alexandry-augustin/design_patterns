#include <cassert>
#include <iostream>
#include "base_00.h"
#include "base_01.h"
#include "base_02.h"

int main()
{
	//base_01 already exist at this stage
	{
		assert(base_00::instance()->get()==0);
		assert(base_01::instance()->get()==0);
		assert(base_02::instance_00()->get()==0);
		assert(base_02::instance_01().get()==0);
	}
}
