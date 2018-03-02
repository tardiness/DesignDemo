#include "State.h"
#include <iostream>
using namespace std;

int main()
{
	State* stateA = new ConcreateStateA();
	Context* c = new Context(stateA);
	c->Request();
	c->Request();
	c->Request();
	c->Request();

	delete c;

	system("pause");
	return 0;
}