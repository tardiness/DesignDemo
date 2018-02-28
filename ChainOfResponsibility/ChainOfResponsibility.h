#pragma once
#include <stdio.h>

class Handler
{
public:
	Handler(Handler * pSuccessor = NULL);
	virtual ~Handler();
	virtual void handleRequest() = 0;
protected:
	Handler * m_pSuccessor;
};

class ConcreateHandler1 : public Handler
{
public:
	ConcreateHandler1(Handler * pSuccessor = NULL) :Handler(pSuccessor) {};
	~ConcreateHandler1() {};
	virtual void handleRequest();
};
class ConcreateHandler2 : public Handler
{
public:
	ConcreateHandler2(Handler * pSuccessor = NULL) :Handler(pSuccessor) {};
	~ConcreateHandler2() {};
	virtual void handleRequest();
};


