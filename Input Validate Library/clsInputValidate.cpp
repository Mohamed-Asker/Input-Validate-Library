#include <iostream>
#include "clsInputValidate.h"



//Operations:
//Operation(1):
bool clsInputValidate::isNumberBetween(int number, int from, int to)
{
	return (number >= from && number <= to);
}

//Operation(2):
bool clsInputValidate::isNumberBetween(short number, short from, short to)
{
	return (number >= from && number <= to);
}

//Operation(3):
bool clsInputValidate::isNumberBetween(double number, double from, double to)
{
	return (number >= from && number <= to);
}

//Operation(4):
bool clsInputValidate::isNumberBetween(float number, float from, float to)
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

//Operation(6):
double clsInputValidate::ReadDblNumber(std::string msg, std::string ErrorMsg)
{
	double number;
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

//Operation(7):
int clsInputValidate::ReadIntNumberBetween(std::string msg, int from, int to, std::string ErrorMsg)
{
	int number;
	while (true)
	{
		number = ReadIntNumber(msg);
		bool isValid = isNumberBetween(number, from, to);
		if (!isValid)
			std::cout << ErrorMsg;
		if (isValid)
			return number;
	}
}

//Operation(8):
double clsInputValidate::ReadDblNumberBetween(std::string msg, double from, double to, std::string  ErrorMsg)
{
	double number;
	while (true)
	{
		number = ReadDblNumber(msg);
		bool isValid = isNumberBetween(number, from, to);
		if (!isValid)
			std::cout << ErrorMsg;
		if (isValid)
			return number;
	}
}

//Operation(9):
int clsInputValidate::ReadPostiveIntNumber(std::string msg, std::string ErrorMes)
{
	int number;
	while (true)
	{
		number = ReadIntNumber(msg);
		bool isValid = number > 0;
		if (!isValid)
			std::cout << ErrorMes;
		if (isValid)
			return number;
	}
}

//Operation(10):
double clsInputValidate::ReadPostiveDblNumber(std::string msg, std::string ErrorMes)
{
	double number;
	while (true)
	{
		number = ReadDblNumber(msg);
		bool isValid = number > 0;
		if (!isValid)
			std::cout << ErrorMes;
		if (isValid)
			return number;
	}
}