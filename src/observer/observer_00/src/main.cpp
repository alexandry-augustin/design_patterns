//#include <iostream>
#include "Document.h"
#include "View.h"

int main()
{
	Document doc;
	View v1(&doc);
	View v2(&doc);
	doc.setState("Hello World!");

	return 0;
}
