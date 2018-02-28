#include "Decorator.h"
#include <iostream>

using namespace std;

Decorator::~Decorator()
{
	delete m_pComponent;
	m_pComponent = NULL;
}

void ConcreateComponent::Operation()
{
	cout << "Operation of ConcreateComponent" << endl;
}

void ConcreateDecorator::Operation()
{
	m_pComponent->Operation();
	AddBehavior();
}

void ConcreateDecorator::AddBehavior()
{
	cout << "AddBehavior of ConcreateDecorator" << endl;
}

void ConcreateDecoratorA::Operation()
{
	m_pComponent->Operation(); 
	ChangeState();
}

void ConcreateDecoratorA::ChangeState()
{
	cout << "ChangeState of ConcreateDecoratorA" << endl;
}
