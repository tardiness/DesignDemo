#include "Strategy.h"
#include <iostream>
using namespace std;

Context::Context(Strategy * pStrategy):m_Strategy(pStrategy)
{
}

Context::~Context()
{
	delete m_Strategy;
	m_Strategy = NULL;
}

void Context::ContextInterface()
{
	if (m_Strategy != NULL) {
		m_Strategy->AlgorithmInterface();
	}
	cout << "ContextInterface " << endl;
}

void ConcreateStrategyA::AlgorithmInterface()
{
	cout << "AlgorithmInterface implement by ConcreateStrategyA" << endl;
}
