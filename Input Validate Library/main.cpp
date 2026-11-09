#include <iostream>
#include "clsInputValidate.h"


int main()
{
	
	double B = clsInputValidate::ReadPostiveDblNumber();
	std::cout << B << "\n";
	system("pause>0");
	return 0;
}