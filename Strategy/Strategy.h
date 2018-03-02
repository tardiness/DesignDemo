#pragma once
#ifndef Strategy_H
#define Strategy_H

class Strategy;

class Context
{
public:
	Context(Strategy* pStrategy);
	~Context();

	void ContextInterface();
private:
	Strategy* m_Strategy;
};

class Strategy
{
public:
	Strategy() {};
	virtual ~Strategy() {};
	virtual void AlgorithmInterface() = 0;
};

class ConcreateStrategyA:public Strategy
{
public:
	ConcreateStrategyA() {};
	virtual ~ConcreateStrategyA() {};
	virtual void AlgorithmInterface();
};

#endif // !Strategy_H