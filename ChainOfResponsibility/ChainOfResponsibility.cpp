#include "ChainOfResponsibility.h"
#include <iostream>

using namespace std;


Handler::Handler(Handler * pSuccessor)
	:m_pSuccessor(pSuccessor)
{
	cout << "Handler init();" << endl;
}

Handler::~Handler()
{
	delete m_pSuccessor;
	m_pSuccessor = NULL;
}

void ConcreateHandler1::handleRequest()
{
	if (m_pSuccessor != NULL) {
		m_pSuccessor->handleRequest();
	}
	else {
		cout << "handleRequest of ConcreateHandler1" << endl;
	}
}

void ConcreateHandler2::handleRequest()
{
	if (m_pSuccessor != NULL) {
		m_pSuccessor->handleRequest();
	}
	else {
		cout << "handleRequest of ConcreateHandler2" << endl;
	}
}
