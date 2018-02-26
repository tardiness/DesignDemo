#pragma once

class Implementor;

class Abstraction
{
public:
	Abstraction(Implementor* pImplementor);
	virtual ~Abstraction();
	void Operation();
protected:
	Implementor * m_pImplementor;
};

class Implementor
{
public:
	Implementor();
	~Implementor();

	virtual void OperationImpl() = 0;
};

class ConcreateImplementorA : public Implementor
{
public:
	ConcreateImplementorA() {};
	virtual ~ConcreateImplementorA();
	virtual void OperationImpl();
};

class ConcreateImplementorB : public Implementor
{
public:
	ConcreateImplementorB() {};
	virtual ~ConcreateImplementorB();
	virtual void OperationImpl();
};