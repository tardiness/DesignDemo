#include "FlyWeight.h"
#include <iostream>


inline STATE FlyWeight::GetIntrinsicState()
{
	return m_State;
}

FlyWeightFactory::~FlyWeightFactory()
{
	std::list<FlyWeight*>::iterator ite1, ite2, temp;
	for (ite1 = m_listFlyWeight.begin(), ite2 = m_listFlyWeight.end(); ite1 != ite2;) {
		temp = ite1;
		++ite1;
		delete(*temp);
	}
	m_listFlyWeight.clear();
}

FlyWeight * FlyWeightFactory::getFlyWeight(const STATE & key)
{
	std::list<FlyWeight*>::iterator ite1, ite2;
	for (ite1 = m_listFlyWeight.begin(), ite2 = m_listFlyWeight.end(); ite1 != ite2;ite1++) {
		if ((*ite1)->GetIntrinsicState() == key) {
			std::cout << "the flyweight" << key << "already exits" << std::endl;
			return (*ite1);
		}
	}
	std::cout << "create new flyweight" << std::endl;
	FlyWeight* flyweight = new concreateFlyWeight(key);
	m_listFlyWeight.push_back(flyweight);
}

concreateFlyWeight::~concreateFlyWeight()
{
}

void concreateFlyWeight::Operation(STATE & ExtrinsicState)
{
}
