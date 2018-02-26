#pragma once
#include <list>
using namespace std;

class Component
{
public:
	Component();
	~Component() {};

	virtual void Operation() = 0;

	virtual void Add(Component* pChild);
	virtual void Remove(Component* pChild);
	virtual Component* GetChild(int index);

};

class Leaf : public Component
{
public:
	Leaf();
	~Leaf();

	virtual void Operation();
};

class Composite : public Component
{
public:
	Composite() {};
	virtual ~Composite();

	virtual void Operation();

	virtual void Add(Component* pChild);
	virtual void Remove(Component* pChild);
	virtual Component* GetChild(int index);
private:
	list<Component*> m_ListOfComponent;
};

