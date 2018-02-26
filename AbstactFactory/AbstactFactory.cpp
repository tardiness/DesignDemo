#include "AbstactFactory.h"
#include "AbstactProduct.h"
#include <iostream>

using namespace std;



AbstactFactory::AbstactFactory()
{
}


AbstactFactory::~AbstactFactory()
{
}

ConcreteFactory1::ConcreteFactory1()
{
	cout << "ConcreteFactory1  create..." << endl;
}

ConcreteFactory1::~ConcreteFactory1()
{
	cout << "ConcreteFactory1 delete..." << endl;
}

Product1 * ConcreteFactory1::createProduct1()
{
	return new Product1();
}

Product2 * ConcreteFactory1::createProduct2()
{
	return new Product2();
}
