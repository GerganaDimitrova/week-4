// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "does not exist";
	}
	if (a + b > c || a + c > b || b + c > a)
	{
		if (a == b == c)
		{
			cout << "Equilateral triangle";
		}
		else if (a == b || a == c || c == b)
		{
			cout << "Isosceles triangle";
		}
		else
		{
			cout << "Scalene triangle";
		}
	}
    return 0;
}

