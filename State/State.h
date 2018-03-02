#pragma once

#ifndef State_H
#define State_H

class State;

class Context
{
public:
	Context(State* pState);
	~Context();
	void Request();
	void ChangeState(State* pState);
private:
	State * m_State;
};

class State
{
public:
	State() {};
	virtual ~State() {};
	virtual void Handle(Context* pContext) = 0;
};

class ConcreateStateA:public State
{
public:
	ConcreateStateA() {};
	virtual ~ConcreateStateA() {};
	virtual void Handle(Context* pContext);
};

class ConcreateStateB :public State
{
public:
	ConcreateStateB() {};
	virtual ~ConcreateStateB() {};
	virtual void Handle(Context* pContext);
};

#endif // !State_H