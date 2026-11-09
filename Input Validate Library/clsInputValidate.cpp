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