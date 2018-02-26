#include <iostream>
#include "Singleton.h"

using namespace std;

int main() {
	Singleton *singleton = Singleton::instance();

	system("pause");
	return 0;
}