#define DLL_EXPORT

#include<iostream>
#include "Sample.h"

extern "C"
{
	DECLDIR double Add(double a, double b)
	{
		return a + b;
	}

	DECLDIR double Multiply(double a, double b)
	{
		return a * b;
	}
	DECLDIR double Divide(double a, double b)
	{
		return a / b;
	}

	DECLDIR double Subtract(double a, double b)
	{
		return a - b;
	}
}