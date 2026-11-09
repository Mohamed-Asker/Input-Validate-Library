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

};