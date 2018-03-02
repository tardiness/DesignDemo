#pragma once

typedef int DATA;

class Iterator;

class Aggregate
{
public:
	Aggregate() {};
	~Aggregate() {};

	virtual Iterator* CreateIterator(Aggregate* pAggregate) = 0;
	virtual int GetSize() = 0;
	virtual DATA GetItem(int Index) = 0;
};

class Iterator
{
public:
	Iterator() {};
	virtual ~Iterator() {};

	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual DATA CurrentItem() = 0;
};

class ConcreateAggregate :public Aggregate
{
public:
	ConcreateAggregate(int nSize);
	~ConcreateAggregate();

	virtual Iterator* CreateIterator(Aggregate* pAggregate);
	virtual int GetSize();
	virtual DATA GetItem(int Index);
private:
	int m_Size;
	DATA* m_Data;
};

class ConcreateIterator :public Iterator
{
public:
	ConcreateIterator(Aggregate* pAggregate);
	~ConcreateIterator() {};

	virtual void First();
	virtual void Next();
	virtual bool IsDone();
	virtual DATA CurrentItem();

private:
	Aggregate * m_Aggregate;
	int m_Index;
};

