#include "ChainOfResponsibility.h"
#include <iostream>
using namespace std;

int main()
{
	Handler* pConcreateHandle1 = new ConcreateHandler1();
	Handler* pConcreateHandle2 = new ConcreateHandler2(pConcreateHandle1);
	pConcreateHandle2->handleRequest();

	delete pConcreateHandle2;

	system("pause");
	return 0;
}