#include "FlyWeight.h"
#include <iostream>

using namespace std;

int main()
{
	FlyWeightFactory flyWeightFactory;
	flyWeightFactory.getFlyWeight("hello");
	flyWeightFactory.getFlyWeight("hello1");
	flyWeightFactory.getFlyWeight("hello2");
	system("pause");
	return 0;
}