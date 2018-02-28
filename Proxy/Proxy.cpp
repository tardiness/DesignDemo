#include "Proxy.h"
#include <iostream>

using namespace std;


Proxy::Proxy():m_pRealSubject(NULL)
{
	cout << "Proxy init()" << endl;
}

Proxy::~Proxy()
{
	delete m_pRealSubject;
	m_pRealSubject = NULL;
}

void Proxy::request()
{
	if (m_pRealSubject == NULL) {
		cout << "request of proxy" << endl;
		m_pRealSubject = new RealSubject();
	}
	m_pRealSubject->request();
}

RealSubject::RealSubject()
{
	cout << "RealSubject init()" << endl;
}

void RealSubject::request()
{
	cout << "request of RealSubject" << endl;
}
