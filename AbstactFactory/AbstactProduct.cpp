#include "AbstactProduct.h"
#include <iostream>

using namespace std;



AbstactProduct::AbstactProduct()
{
}


AbstactProduct::~AbstactProduct()
{
}

Product1::Product1()
{
	cout << "Product1 create..." << endl;
}

Product1::~Product1()
{
	cout << "Product1 delete..." << endl;
}

int Product1::Operation()
{
	cout << "Product1 operate..." << endl;
	return 0;
}

Product2::Product2()
{
	cout << "Product2 create..." << endl;
}

Product2::~Product2()
{
	cout << "Product2 delete..." << endl;
}

int Product2::Operation()
{
	cout << "Product2 operate..." << endl;
	return 0;
}
