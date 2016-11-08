// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	char a, b;

	cout << "Enter number";
	cin >> num;

	cout << "Enter 2 symbols";
	cin >> a >> b;

	for (int i = 1; i < num; i++) {
		for (int j = 0; j < i; j++)
		{
			cout << a;
		}
		for (int j = num; j > i; j--)
		{
			cout << b;
		}
		cout << endl;
	}
    return 0;
}

