// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num, n;
	cin >> n;
	int numMax = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		cout << "Insert number: ";
		cin >> num;
		if (num < 0 && num > numMax) 
		{
			numMax = num;
		}
	}
	if (numMax == INT_MIN)
	{
		cout << "You have to insert a negative number." << endl;
	}
	else
	{
		cout << numMax;
	}
    return 0;
}

