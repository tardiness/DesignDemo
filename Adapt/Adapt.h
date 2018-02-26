#pragma once
class Target
{
public:
	Target();
	virtual ~Target();

	virtual void request();
};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();

	virtual void specialRequest();
};

class Adaptor : public Target
{
public:
	Adaptor(Adaptee* pAdaptee);
	~Adaptor();

	virtual void request();
private:
	Adaptee * m_adaptee;
};



