#include "Adapt.h"
#include <iostream>

using namespace std;

int main()
{
	Adaptee* adaptee = new Adaptee();
	Target* target = new Adaptor(adaptee);
	target->request();

	delete target;

	system("pause");
	return 0;
}