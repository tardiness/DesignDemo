#include "Prototype.h"
#include <iostream>

using namespace std;


Prototype::Prototype()
{
	cout << "Prototype init()" << endl;
}


Prototype::~Prototype()
{
	cout << "Prototype destory()" << endl;
}

ConcreatePrototype1::ConcreatePrototype1()
{
	cout << "ConcreatePrototype1 init()" << endl;
}

ConcreatePrototype1::ConcreatePrototype1(const ConcreatePrototype1 &)
{
	cout << "copy form ConcreatePrototype1 init()" << endl;
}

ConcreatePrototype1::~ConcreatePrototype1()
{
	cout << "copy form ConcreatePrototype1 destory()" << endl;
}

Prototype * ConcreatePrototype1::clone()
{
	return new ConcreatePrototype1(*this);
}

ConcreatePrototype2::ConcreatePrototype2()
{
	cout << "ConcreatePrototype2 init()" << endl;
}

ConcreatePrototype2::ConcreatePrototype2(const ConcreatePrototype2 &)
{
	cout << "copy form ConcreatePrototype2 init()" << endl;
}

ConcreatePrototype2::~ConcreatePrototype2()
{
	cout << "copy form ConcreatePrototype2 destory()" << endl;
}

Prototype * ConcreatePrototype2::clone()
{
	return new ConcreatePrototype2();
}
