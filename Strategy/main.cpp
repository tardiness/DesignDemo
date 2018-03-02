#include "Strategy.h"
#include <iostream>

using namespace std;

int main()
{
	Strategy* pStrategy = new ConcreateStrategyA();
	Context* c = new Context(pStrategy);

	c->ContextInterface();

	delete c;

	system("pause");
	return 0;
}