#pragma once

#include <string>
#include <list>

typedef std::string STATE;

class FlyWeight
{
public:
	virtual ~FlyWeight() {};
	STATE GetIntrinsicState();
protected:
	FlyWeight(const STATE& state) :m_State(state) {};
private:
	STATE m_State;
};

class FlyWeightFactory
{
public:
	FlyWeightFactory() {};
	~FlyWeightFactory();

	FlyWeight* getFlyWeight(const STATE& key);
private:
	std::list<FlyWeight*> m_listFlyWeight;
};

class concreateFlyWeight :public FlyWeight
{
public:
	concreateFlyWeight(const STATE& state) :FlyWeight(state) {};
	virtual ~concreateFlyWeight();
	virtual void Operation(STATE& ExtrinsicState);
};

