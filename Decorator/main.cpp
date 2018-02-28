#include "Decorator.h"
#include <iostream>

using namespace std;

int main()
{
	Component* pComponent = new ConcreateComponent();
	Decorator* pDecorator1 = new ConcreateDecorator(pComponent);
	Decorator* pDecorator2 = new ConcreateDecoratorA(pComponent);

	pDecorator1->Operation();
	pDecorator2->Operation();

	delete pDecorator1;
	//delete pDecorator2;

	system("pause");
	return 0;
}