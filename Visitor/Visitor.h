#pragma once

class Visitor;

class Element
{
public:
	~Element();
	virtual void Accept(Visitor& pVisitor) = 0;
protected:
	Element() {};
};

class ConcreateElementA :public Element
{
public:
	~ConcreateElementA() {};
	virtual void Accept(Visitor& pVisitor);
};

class ConcreateElementB :public Element
{
public:
	~ConcreateElementB() {};
	virtual void Accept(Visitor& pVisitor);
};

class Visitor
{
public:
	~Visitor() {};
	virtual void VisitConcreateElementA(ConcreateElementA* pConcreateElementA) = 0;
	virtual void VisitConcreateElementB(ConcreateElementB* pConcreateElementB) = 0;
protected:
	Visitor() {};
};

class ConcreateVisitorA :public Visitor
{
public:
	~ConcreateVisitorA() {};
	virtual void VisitConcreateElementA(ConcreateElementA* pConcreateElementA);
	virtual void VisitConcreateElementB(ConcreateElementB* pConcreateElementB);
};

class ConcreateVisitorB :public Visitor
{
public:
	~ConcreateVisitorB() {};
	virtual void VisitConcreateElementA(ConcreateElementA* pConcreateElementA);
	virtual void VisitConcreateElementB(ConcreateElementB* pConcreateElementB);
};
