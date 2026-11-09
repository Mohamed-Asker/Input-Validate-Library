#include <iostream>
#include "clsInputValidate.h"


int main()
{
	
	int B = clsInputValidate::ReadIntNumberBetween("Enter Number Between 1 and 10",1,10);
	std::cout << B << "\n";
	system("pause>0");
	return 0;
}