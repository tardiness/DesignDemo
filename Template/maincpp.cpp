#include "Template.h"
#include <iostream>

using namespace std;

int main()
{
	AbstractClass* pAbstractClass = new ConcreateClass();
	pAbstractClass->TemplateMethod();

	delete pAbstractClass;

	system("pause");
	return 0;
}