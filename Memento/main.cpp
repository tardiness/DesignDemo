#include "Memento.h"
#include <iostream>
using namespace std;

int main()
{
	Originator* o1 = new Originator("old");
	o1->PrintState();

	Memento* m1 = o1->CreateMemento();

	o1->SetState("new");
	o1->PrintState();

	o1->RestoreState(m1);
	o1->PrintState();

	delete o1;
	delete m1;

	system("pause");
	return 0;
}