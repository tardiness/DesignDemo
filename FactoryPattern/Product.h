#pragma once
class Product
{
public:
	virtual ~Product();
protected:
	Product();
};

class ConereteProduct : public Product {
public:
	~ConereteProduct();
	ConereteProduct();

};

