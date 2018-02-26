#pragma once
class Product;

class Factory
{
public:
	virtual ~Factory();
	virtual Product* createProduct() = 0;
protected:
	Factory();
};

class ConcreteFactory : public Factory
{
public:
	~ConcreteFactory();
	ConcreteFactory();
	Product* createProduct();
protected:
	
private:

};


