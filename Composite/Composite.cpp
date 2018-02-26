#include "Composite.h"
#include <iostream>
#include <algorithm>

using namespace std;

Component::Component()
{
}

void Component::Add(Component * pChild)
{
}

void Component::Remove(Component * pChild)
{
}

Component * Component::GetChild(int index)
{
	return nullptr;
}

Leaf::Leaf()
{
}

Leaf::~Leaf()
{
}

void Leaf::Operation()
{
	cout << "Operation of leaf" << endl;
}


Composite::~Composite()
{
	list<Component*>::iterator ite1, ite2, temp;
	for (ite1 = m_ListOfComponent.begin(), ite2 = m_ListOfComponent.end(); ite1 != ite2;) {
		temp = ite1;
		++ite1;
		delete(*temp);
	}
}

void Composite::Operation()
{
	cout << "Operation of Composite" << endl;
	list<Component*>::iterator ite1, ite2;
	for (ite1 = m_ListOfComponent.begin(), ite2 = m_ListOfComponent.end(); ite1 != ite2; ++ite1) {
		(*ite1)->Operation();
	}
}

void Composite::Add(Component * pChild)
{
	m_ListOfComponent.push_back(pChild);
}

void Composite::Remove(Component * pChild)
{
	list<Component*>::iterator ite;
	ite = find(m_ListOfComponent.begin(), m_ListOfComponent.end(), pChild);
	if (ite != m_ListOfComponent.end()) {
		m_ListOfComponent.erase(ite);
	}
}

Component * Composite::GetChild(int index)
{
	if (index<=0 || index > m_ListOfComponent.size()) {
		return NULL;
	}
	list<Component*>::iterator ite1, ite2;
	int i;
	for (i = 1, ite1 = m_ListOfComponent.begin(), ite2 = m_ListOfComponent.end(); ite1 != ite2; ++ite1, ++i) {
		if (i == index) {
			break;
		}
	}
	return *ite1;
}
