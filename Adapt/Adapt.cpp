#include "Adapt.h"
#include <iostream>

using namespace std;

Target::Target()
{
	cout << "Target init()" << endl;
}

Target::~Target()
{
}

void Target::request()
{
}

Adaptee::Adaptee()
{
	cout << "Adaptee init()" << endl;
}

Adaptee::~Adaptee()
{
}

void Adaptee::specialRequest()
{
	cout << "specialRequest of adaptee" << endl;
}

Adaptor::Adaptor(Adaptee * pAdaptee)
	:m_adaptee(pAdaptee)
{
}

Adaptor::~Adaptor()
{
	delete m_adaptee;
	m_adaptee = NULL;
}

void Adaptor::request()
{
	cout << "request of adaptor" << endl;
	m_adaptee->specialRequest();
}
