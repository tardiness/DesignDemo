#include "Visitor.h"
#include <iostream>

using namespace std;

Element::~Element()
{
}

void ConcreateElementA::Accept(Visitor & pVisitor)
{
	pVisitor.VisitConcreateElementA(this);
}

void ConcreateElementB::Accept(Visitor & pVisitor)
{
	pVisitor.VisitConcreateElementB(this);
}

void ConcreateVisitorA::VisitConcreateElementA(ConcreateElementA * pConcreateElementA)
{
	cout << "VisitConcreateElementA by ConcreateVisitorA" << endl;
}

void ConcreateVisitorA::VisitConcreateElementB(ConcreateElementB * pConcreateElementB)
{
	cout << "VisitConcreateElementB by ConcreateVisitorA" << endl;
}

void ConcreateVisitorB::VisitConcreateElementA(ConcreateElementA * pConcreateElementA)
{
	cout << "VisitConcreateElementA by ConcreateVisitorB" << endl;
}

void ConcreateVisitorB::VisitConcreateElementB(ConcreateElementB * pConcreateElementB)
{
	cout << "VisitConcreateElementB by ConcreateVisitorB" << endl;
}
