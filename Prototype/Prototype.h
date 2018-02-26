#pragma once
class Prototype
{
public:
	Prototype();
	virtual ~Prototype();

	virtual	Prototype *clone() = 0;
};

class ConcreatePrototype1 :public Prototype
{
public:
	ConcreatePrototype1();
	ConcreatePrototype1(const ConcreatePrototype1&);
	~ConcreatePrototype1();

	virtual Prototype *clone();
};
class ConcreatePrototype2 :public Prototype
{
public:
	ConcreatePrototype2();
	ConcreatePrototype2(const ConcreatePrototype2&);
	~ConcreatePrototype2();

	virtual Prototype *clone();
};