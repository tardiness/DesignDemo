#include "Bridge.h"
#include <iostream>

using namespace std;

int main()
{
	Implementor* pImplementor1 = new ConcreateImplementorA();
	Abstraction* pAbstraction1 = new Abstraction(pImplementor1);
	pAbstraction1->Operation();

	Implementor* pImplementor2 = new ConcreateImplementorB();
	Abstraction* pAbstraction2 = new Abstraction(pImplementor2);
	pAbstraction2->Operation();

	delete pAbstraction1;
	delete pAbstraction2;

	system("pause");
	return 0;
}