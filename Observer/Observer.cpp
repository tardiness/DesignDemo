#include "Observer.h"
#include <iostream>
#include <algorithm>

using namespace std;

Subject::~Subject() {
	list<Observer*>::iterator ite1, ite2, temp;
	for (ite1 = m_listObserver.begin(), ite2 = m_listObserver.end(); ite1 != ite2;) {
		temp = ite1;
		++ite1;
		delete(*temp);
	}
	m_listObserver.clear();
}
void Subject::Notify()
{
	cout << "Notify Observer's State" << endl;
	list<Observer*>::iterator ite1, ite2;
	for (ite1 = m_listObserver.begin(), ite2 = m_listObserver.end(); ite1 != ite2; ite1++) {
		(*ite1)->Update(this);
	}
}
void Subject::Attach(Observer * pObserver)
{
	cout << "Attach on Observer" << endl;
	m_listObserver.push_back(pObserver);
}
void Subject::Detach(Observer * pObserver)
{
	list<Observer*>::iterator ite;
	ite = find(m_listObserver.begin(), m_listObserver.end(), pObserver);
	if (m_listObserver.end() != ite) {
		m_listObserver.erase(ite);
	}
	cout << "Detach an Observer" << endl;
}
void Subject::SetState(STATE nState)
{
	cout << "SetState by Subject" << endl;
	m_SubjectState = nState;
}
STATE Subject::GetState()
{
	cout << "GetState by Subject" << endl;
	return m_SubjectState;
}


void Observer::Update(Subject * pSubject)
{
}

void ConcreateSubject::SetState(STATE nState)
{
	cout << "SetState by ConcreateSubject" << endl;
	m_SubjectState = nState;
}

STATE ConcreateSubject::GetState()
{
	cout << "GetState by ConcreateSubject" << endl;
	return m_SubjectState;
}

void ConcreateObserver::Update(Subject * pSubject)
{
	if (pSubject == NULL) {
		return;
	}
	m_ObserverState = pSubject->GetState();
	cout << "the SubjectState is " << m_ObserverState << endl;
}
