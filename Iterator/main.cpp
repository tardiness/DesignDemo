#include "Iterator.h"
#include <iostream>
using namespace std;

int main()
{
	Aggregate* pAggregate = new ConcreateAggregate(6);
	//Iterator* pIterator = new ConcreateIterator(pAggregate);
	Iterator* pIterator = pAggregate->CreateIterator(pAggregate);

	for (; false == pIterator->IsDone(); pIterator->Next()) {
		cout<< pIterator->CurrentItem() <<endl;
	}

	system("pause");
	return 0;
}