#ifndef _SAMPLE_DLL_
#define _SAMPLE_DLL_

#ifdef DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif

extern "C"
{
	DECLDIR double Add(double a,double b);
	DECLDIR double Multiply(double a, double b);
	DECLDIR double Divide(double a, double b);
	DECLDIR double Subtract(double a, double b);
}

#endif