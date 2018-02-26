#include "Composite.h"
#include <iostream>

using namespace std;

int main()
{
	Leaf* pleaf1 = new Leaf();
	Leaf* pleaf2 = new Leaf();

	Composite* pComposite = new Composite();
	pComposite->Add(pleaf1);
	pComposite->Add(pleaf2);
	pComposite->Operation();
	pComposite->GetChild(2)->Operation();

	delete pComposite;

	system("pause");
	return 0;
}