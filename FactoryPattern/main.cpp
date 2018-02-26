#include "Factory.h"
#include "Product.h"
#include <iostream>

using namespace std;

int main() {
	Factory *factory = new ConcreteFactory();
	factory->createProduct();

	delete factory;

	system("pause");
	return 0;
}