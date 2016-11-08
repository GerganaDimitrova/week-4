// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	num >= 5 && num <= 20;

	switch (num) {
	case (5):
	case (7):
	case (9):
	case (11):
	case (13):
	case (15):
	case (17):
	case (19): cout << "Odd"; break;
	case (6):
	case (8):
	case (10):
	case (12):
	case (14):
	case (16):
	case (18):
	case (20): cout << "Even"; break;
	}

    return 0;
}

