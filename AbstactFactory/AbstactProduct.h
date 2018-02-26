#pragma once
class AbstactProduct
{
public:
	virtual ~AbstactProduct();
	virtual int Operation() = 0;
protected:
	AbstactProduct();
};

class Product1 : public AbstactProduct
{
public:
	Product1();
	~Product1();

	int Operation();

private:

};

class Product2 : public AbstactProduct
{
public:
	Product2();
	~Product2();

	int Operation();

private:

};



