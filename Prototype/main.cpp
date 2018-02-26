#include "Prototype.h"
#include <iostream>

using namespace std;

int main()
{
	Prototype *prototype1 = new ConcreatePrototype1();
	Prototype *prototype2 = prototype1->clone();
	Prototype *prototype3 = new ConcreatePrototype2();
	Prototype *prototype4 = prototype3->clone();

	delete prototype1;
	delete prototype2;
	delete prototype3;
	delete prototype4;

	system("pause");
	return 0;
}