#pragma once
#ifndef OBSERVER_H
#define OBSERVER_H

#include <list>
typedef int STATE;

class Observer;

class Subject
{
public:
	Subject() :m_SubjectState(-1) {};
	virtual ~Subject();

	void Notify();
	void Attach(Observer* pObserver);
	void Detach(Observer* pObserver);

	virtual void SetState(STATE nState);
	virtual STATE GetState();
protected:
	STATE m_SubjectState;
	std::list<Observer*> m_listObserver;
};

class Observer
{
public:
	Observer():m_ObserverState(-1) {};
	virtual ~Observer() {};
	virtual void Update(Subject* pSubject);
protected:
	STATE m_ObserverState;
};

class ConcreateSubject : public Subject
{
public:
	ConcreateSubject() :Subject() {};
	~ConcreateSubject() {};
	virtual void SetState(STATE nState);
	virtual STATE GetState();
};

class ConcreateObserver : public Observer
{
public:
	ConcreateObserver() :Observer() {};
	~ConcreateObserver() {};

	virtual void Update(Subject* pSubject);
};

#endif // !OBSERVER_H