#include <iostream>
#include "Builder.h"

using namespace std;

int main()
{
	Builder *builder1 = new ConcreateBuilder1();
	Director *director1 = new Director(builder1);
	director1->Constuct();

	Builder *builder2 = new ConcreateBuilder2();
	Director *director2 = new Director(builder2);
	director2->Constuct();

	delete builder1;
	delete builder2;

	system("pause");
	return 0;
}