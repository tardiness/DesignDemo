#include "Command.h"
#include <iostream>

using namespace std;

int main()
{
	Receiver* pReceiver = new Receiver();
	Command* pCommand = new ConcreateCommand(pReceiver);
	Invoker* pInvoker = new Invoker(pCommand);
	pInvoker->Invoke();

	delete pInvoker;

	system("pause");
	return 0;
}