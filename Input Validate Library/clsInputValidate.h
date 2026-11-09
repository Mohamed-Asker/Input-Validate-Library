#pragma once
#include <iostream>


class clsInputValidate
{
public:

	//Operations:
	//Operation(1):
	static bool isNumberBetweenI(int number, int from, int to);

	//Operation(2):
	static bool isNumberBetweenS(short number, short from, short to);

	//Operation(3):
	static bool isNumberBetweenD(double number, double from, double to);

	//Operation(4):
	static bool isNumberBetweenF(float number, float from, float to);

	//Operation(5):
	static int ReadIntNumber(std::string msg = "Enter Number", std::string ErrorMsg = "\nInvalid input,\nEnter again: ");

	//Operation(6):
	static double ReadDblNumber(std::string msg = "Enter Number", std::string ErrorMsg = "\nInvalid input,\nEnter again: ");

	//Operation(7):
	static int ReadIntNumberBetween(std::string msg, int from, int to, std::string ErrorMsg = "\nNumber is not within range.\n");

	//Operation(8):
	static double ReadDblNumberBetween(std::string msg, double from, double to, std::string  ErrorMsg = "\nNumber is not within range.\n");

	//Operation(9):
	static int ReadPostiveIntNumber(std::string msg = "Enter Postive Number", std::string ErrorMes = "\nPlease enter a number greater than zero.\n");
	
	//Operation(10):
	static double ReadPostiveDblNumber(std::string msg = "Enter Postive Number", std::string ErrorMes = "\nPlease enter a number greater than zero.\n");
};