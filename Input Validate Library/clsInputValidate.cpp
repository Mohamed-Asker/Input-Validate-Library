#include <iostream>
#include "clsInputValidate.h"



//Operations:
//Operation(1):
bool clsInputValidate::isNumberBetweenI(int number, int from, int to)
{
	return (number >= from && number <= to);
}

//Operation(2):
bool clsInputValidate::isNumberBetweenS(short number, short from, short to)
{
	return (number >= from && number <= to);
}

//Operation(3):
bool clsInputValidate::isNumberBetweenD(double number, double from, double to)
{
	return (number >= from && number <= to);
}

//Operation(4):
bool clsInputValidate::isNumberBetweenF(float number, float from, float to)
{
	return (number >= from && number <= to);
}

//Operation(5):
int clsInputValidate::ReadIntNumber(std::string msg,std::string ErrorMsg)
{
	int number;
	std::cout << msg << ": ";
	while (true)
	{
		bool isValid = std::cin >> number && true;
		if (!isValid)
		{
			std::cin.clear();
			std::cout << ErrorMsg;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (isValid)
			return number;
	}
}