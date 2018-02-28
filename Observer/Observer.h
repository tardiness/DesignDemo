#pragma once
#include <list>
#ifndef OBSERVER_H
#define OBSERVER_H

typedef int STATE;

class Subject
{
public:
	Subject() :m_SubjectState(-1) {};
	virtual ~Subject();

	void Notify();
	void Attach(Observer* pObserver);
	void Detach(Observer* pObserver);
protected:
	STATE m_SubjectState;
	std::list<Observer*> m_listObserver;
};

class Observer
{
public:
	Observer():m_ObserverState(-1) {};
	virtual ~Observer();
	virtual void Update(Subject* pSubject);
protected:
	STATE m_ObserverState;
};


#endif // !OBSERVER_H

