#include "Memento.h"
#include <iostream>
using namespace std;

Originator::Originator(const State & rState):m_State(rState)
{
}

Originator::Originator()
{
}

Originator::~Originator()
{
}

Memento * Originator::CreateMemento()
{
	return new Memento(m_State);
}

void Originator::SetMemento(Memento * pMenento)
{
}

State Originator::GetState()
{
	return m_State;
}

void Originator::SetState(const State & rState)
{
	m_State = rState;
}

void Originator::RestoreState(Memento * pMemento)
{
	if (pMemento != NULL) {
		m_State = pMemento->GetState();
	}
}

void Originator::PrintState()
{
	cout << "State=" << m_State << endl;
}

void Memento::SetState(const State & rState)
{
	m_State = rState;
}

State Memento::GetState()
{
	return m_State;
}
