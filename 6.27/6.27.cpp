// 6.27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

double maximum(double a, double b, double c)
{
	double max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}

	return max;
}

int main()
{
	std::cout << maximum(1, 2, 3) << std::endl;
	std::cout << maximum(1, 3, 2) << std::endl;
	std::cout << maximum(3, 1, 2) << std::endl;

	std::cout << maximum(1, 4, 4) << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
