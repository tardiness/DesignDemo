#pragma once
class AbstractClass
{
public:
	AbstractClass();
	virtual ~AbstractClass();

	virtual void TemplateMethod();
protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

class ConcreateClass : public AbstractClass
{
public:
	ConcreateClass();
	~ConcreateClass();
protected:
	virtual void PrimitiveOperation1();
	virtual void PrimitiveOperation2();
};

