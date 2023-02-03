//
// pch.cpp
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

//Равносторонний треугольник
bool EquilateralTriange(double a, double b, double c)
{
	if ((a == b) && (b == c))
		return true;
	else
		return false;
}


//Равнобедренный треугольник
bool IsoscelesTriangle(double a, double b, double c)
{
	if (a == b && b != c || a == c && c != b || c == b && b != a)
		return true;
	else
		return false;
}

//Разносторонний треугольник
bool VersatileTriangle(double a, double b, double c)
{
	if ((a != b) && (b != c))
		return true;
	else
		return false;

}


//Проверка на существование треугольника
bool CheckNumber(double a, double b, double c)
{
	if ((a + b > c && a + c > b && b + c > a) && (a > 0 && b > 0 && c > 0))
		return true;
	else
		return false;
}


//Вычисление площади треугольника
double GetSquare(double a, double b, double c)
{
	if (CheckNumber(a, b, c))
	{
		double p = (a + b + c) / 2;
		double square = sqrt(p * (p - a) * (p - b) * (p - c));
		return round(square * 100) / 100;
	}
	else
		return NULL;
}
