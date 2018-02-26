#include "Builder.h"
#include <iostream>

using namespace std;

Builder::Builder()
{
	cout << "Builder create" << endl;
}


Builder::~Builder()
{
}

Director::Director(Builder * pBuilder)
	:m_pBuilder(pBuilder)
{
}

Director::~Director()
{
	delete m_pBuilder;
	m_pBuilder = NULL;
}

void Director::Constuct()
{
	m_pBuilder->BuilderPartA();
	m_pBuilder->BuilderPartB();
}

void ConcreateBuilder1::BuilderPartA()
{
	cout << "BuilderPartA by ConcreateBuilder1" << endl;
}

void ConcreateBuilder1::BuilderPartB()
{
	cout << "BuilderPartB by ConcreateBuilder1" << endl;
}

void ConcreateBuilder2::BuilderPartA()
{
	cout << "BuilderPartA by ConcreateBuilder2" << endl;
}

void ConcreateBuilder2::BuilderPartB()
{
	cout << "BuilderPartB by ConcreateBuilder2" << endl;
}
