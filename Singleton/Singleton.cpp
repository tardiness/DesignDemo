#include "Singleton.h"
#include <iostream>

using namespace std;

Singleton* Singleton::_instance = 0;


Singleton::Singleton()
{
	cout << "Singleton" << endl;
}


Singleton * Singleton::instance()
{
	if (_instance== 0) {
		_instance = new Singleton();
	}
	return _instance;
}

Singleton::~Singleton()
{
}
