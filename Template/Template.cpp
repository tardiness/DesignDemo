#include "Template.h"
#include <iostream>

using namespace std;


AbstractClass::AbstractClass()
{
	cout << "AbstractClass init()" << endl;
}


AbstractClass::~AbstractClass()
{
}

void AbstractClass::TemplateMethod()
{
	PrimitiveOperation1();
	PrimitiveOperation2();
}

ConcreateClass::ConcreateClass()
{
	cout << "ConcreateClass init()" << endl;
}

ConcreateClass::~ConcreateClass()
{
}

void ConcreateClass::PrimitiveOperation1()
{
	cout << "PrimitiveOperation1" << endl;
}

void ConcreateClass::PrimitiveOperation2()
{
	cout << "PrimitiveOperation2" << endl;
}
