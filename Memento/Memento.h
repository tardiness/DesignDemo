#pragma once
#include <string>
using namespace std;

typedef string State;

class Memento;

class Originator
{
public:
	Originator(const State& rState);
	Originator();
	~Originator();

	Memento* CreateMemento();
	void SetMemento(Memento* pMenento);
	State GetState();
	void SetState(const State& rState);
	void RestoreState(Memento* pMemento);
	void PrintState();
private:
	State m_State;
};

class Memento
{
private:
	friend class Originator;
	Memento(const State& rState):m_State(rState) {};
	void SetState(const State& rState);
	State GetState();
	
	State m_State;
};

