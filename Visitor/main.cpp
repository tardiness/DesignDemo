#include "Visitor.h"
#include <iostream>
using namespace std;

int main()
{
	Visitor* v1 = new ConcreateVisitorA();
	Visitor* v2 = new ConcreateVisitorB();
	Element* e1 = new ConcreateElementA();
	Element* e2 = new ConcreateElementB();

	e1->Accept(*v1);
	e1->Accept(*v2);
	e2->Accept(*v1);
	e2->Accept(*v2);

	delete v1, e1;

	system("pause");
	return 0;
}