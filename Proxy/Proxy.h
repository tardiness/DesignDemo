#pragma once
#ifndef PROXY_H
#define PROXY_H

class Subject
{
public:
	Subject() {};
	~Subject() {};
	virtual void request() = 0;
};

class RealSubject : public Subject
{
public:
	RealSubject();
	~RealSubject() {};

	virtual void request();
private:

};

class Proxy : public Subject
{
public:
	Proxy();
	virtual ~Proxy();
	virtual void request();
private:
	RealSubject * m_pRealSubject;
};

#endif // !PROXY_H
