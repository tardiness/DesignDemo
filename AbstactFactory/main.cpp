#include "AbstactFactory.h"
#include "AbstactProduct.h"
#include <iostream>;

using namespace std;

int main() {

	AbstactFactory *factory = new ConcreteFactory1();
	Product1 *product1 = factory->createProduct1();
	Product2 *product2 = factory->createProduct2();

	product1->Operation();
	product2->Operation();


	delete factory;
	delete product1;
	delete product2;

	system("pause");
	return 0;
}