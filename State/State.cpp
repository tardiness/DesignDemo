#include "State.h"
#include <iostream>
using namespace std;

Context::Context(State * pState):m_State(pState)
{
}

Context::~Context()
{
	delete m_State;
	m_State = NULL;
}

void Context::Request()
{
	if (m_State != NULL) {
		m_State->Handle(this);
	}
}

void Context::ChangeState(State* pState)
{
	if (m_State != NULL) {
		delete m_State;
		m_State = NULL;
	}
	m_State = pState;
}

void ConcreateStateA::Handle(Context * pContext)
{
	cout << "Handle by ConcreateStateA" << endl;
	if (pContext != NULL) {
		pContext->ChangeState(new ConcreateStateB());
	}
}

void ConcreateStateB::Handle(Context * pContext)
{
	cout << "Handle by ConcreateStateB" << endl;
	if (pContext != NULL) {
		pContext->ChangeState(new ConcreateStateA());
	}
}
