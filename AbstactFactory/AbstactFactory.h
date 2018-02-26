#pragma once
class Product1;
class Product2;


class AbstactFactory
{
public:
	virtual ~AbstactFactory();
	virtual Product1* createProduct1() = 0;
	virtual Product2* createProduct2() = 0;

protected:
	AbstactFactory();
};

class ConcreteFactory1 : public AbstactFactory
{
public:
	ConcreteFactory1();
	~ConcreteFactory1();

	Product1* createProduct1();
	Product2* createProduct2();

private:

};


