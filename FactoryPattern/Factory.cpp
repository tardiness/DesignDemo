#include "..\AbstactFactory\AbstactFactory.h"
#include "..\AbstactFactory\AbstactFactory.h"
#include "Factory.h"
#include "Product.h"
#include <iostream>

using namespace std;


Factory::Factory()
{
}


Factory::~Factory()
{
}

ConcreteFactory::ConcreteFactory()
{
	cout << "ConcreteFactory" << endl;
}

ConcreteFactory::~ConcreteFactory()
{
}

Product * ConcreteFactory::createProduct()
{
	return new ConereteProduct();
}
