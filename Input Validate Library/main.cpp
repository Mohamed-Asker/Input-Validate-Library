#include <iostream>
#include "clsInputValidate.h"


int main()
{
	
	double B = clsInputValidate::ReadDblNumberBetween("Enter Number Between 5.5 and 10.5",5.5,10.5);
	std::cout << B << "\n";
	system("pause>0");
	return 0;
}