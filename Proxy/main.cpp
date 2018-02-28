#include "Proxy.h"
#include <iostream>

using namespace std;

int main()
{
	Subject* pProxy = new Proxy();
	pProxy->request();

	delete pProxy;

	system("pause");
	return 0;
}