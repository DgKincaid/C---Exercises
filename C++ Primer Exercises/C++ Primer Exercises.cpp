// C++ Primer Exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Chapter2.h"

using namespace std;

int main()
{
	Chapter2 chapter2 = Chapter2();

	//chapter2.DisplayAddress();
	//cout << chapter2.FurlongConverter() << endl;
	//chapter2.TextRepeater();
	chapter2.AgeInMonths();
	return 0;
}

