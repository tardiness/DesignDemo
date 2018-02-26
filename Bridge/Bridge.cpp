#include "Bridge.h"
#include <iostream>

using namespace std;

Abstraction::Abstraction(Implementor * pImplementor)
	:m_pImplementor(pImplementor)
{
}

Abstraction::~Abstraction()
{
	delete m_pImplementor;
	m_pImplementor = NULL;
}

void Abstraction::Operation()
{
	m_pImplementor->OperationImpl();
}

Implementor::Implementor()
{
	cout << "Implementor init();" << endl;
}

Implementor::~Implementor()
{
}

ConcreateImplementorA::~ConcreateImplementorA()
{
}

void ConcreateImplementorA::OperationImpl()
{
	cout << "OperationImpl of ConcreateImplementorA" << endl;
}

ConcreateImplementorB::~ConcreateImplementorB()
{
}

void ConcreateImplementorB::OperationImpl()
{
	cout << "OperationImpl of ConcreateImplementorB" << endl;
}