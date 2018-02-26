#pragma once

class Component
{
public:
	Component();
	~Component() {};

	virtual void Operation() = 0;
};

class Decorator : public Component
{
public:
	Decorator(Component * pComponent) :m_pComponent(pComponent) {};
	virtual ~Decorator();

protected:
	Component * m_pComponent;
};

class ConcreateComponent : public Component
{
public:
	ConcreateComponent() {};
	~ConcreateComponent() {};

	virtual void Operation();
};

class ConcreateDecorator : public Decorator
{
public:
	ConcreateDecorator(Component* pComponent) :Decorator(pComponent) {};
	~ConcreateDecorator() {};

	virtual void Operation();
private:
	void AddBehavior();
};

