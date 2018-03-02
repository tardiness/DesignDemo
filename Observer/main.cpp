#include "Observer.h"
#include <iostream>

using namespace std;

int main()
{
	Observer* pObserver1 = new ConcreateObserver();
	Observer* pObserver2 = new ConcreateObserver();

	Subject* p = new ConcreateSubject();

	p->Attach(pObserver1);
	p->Attach(pObserver2);
	p->SetState(4);
	p->Notify();

	p->Detach(pObserver1);
	p->SetState(10);
	p->Notify();

	delete p;

	system("pause");
	return 0;
}