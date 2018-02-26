#pragma once
class Singleton
{
public:
	static Singleton* instance();
	virtual ~Singleton();
protected:
	Singleton();
private:
	static Singleton * _instance;
};

