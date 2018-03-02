#include "Iterator.h"
#include <iostream>
using namespace std;

ConcreateAggregate::ConcreateAggregate(int nSize):m_Data(NULL),m_Size(nSize)
{
	m_Data = new DATA[m_Size];
	for (int i = 0; i < nSize;++i) {
		m_Data[i] = i;
	}
}

ConcreateAggregate::~ConcreateAggregate()
{
	delete m_Data;
	m_Data = NULL;
}

Iterator * ConcreateAggregate::CreateIterator(Aggregate* pAggregate)
{
	return new ConcreateIterator(this);
}

int ConcreateAggregate::GetSize()
{
	return m_Size;
}

DATA ConcreateAggregate::GetItem(int Index)
{
	if (Index < m_Size) {
		return m_Data[Index];
	}
	else {
		return -1;
	}
}

ConcreateIterator::ConcreateIterator(Aggregate * pAggregate):m_Aggregate(pAggregate),m_Index(0)
{
}

void ConcreateIterator::First()
{
	m_Index = 0;
}

void ConcreateIterator::Next()
{
	if (m_Index < m_Aggregate->GetSize()) {
		++m_Index;
	}
}

bool ConcreateIterator::IsDone()
{
	return m_Index == m_Aggregate->GetSize();
}

DATA ConcreateIterator::CurrentItem()
{
	return m_Aggregate->GetItem(m_Index);
}
