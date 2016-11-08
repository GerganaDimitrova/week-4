// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please enter three digit number: " << endl;
	cin >> n;
	int x, y, z, P, S;

	x = n % 10;
	y = (n / 10) % 10;
	z = n / 100;
	P = x*y*z;
	S = x + y + z;

	if (x*y*z >= 100 && x*y*z <= 999) {
		
		cout << "Yes" << P - S;
	}
	else {
		cout << "No" << P << endl;
	}
    return 0;
}

