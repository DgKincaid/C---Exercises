#include "stdafx.h"
#include <iostream>
#include <string>
#include "Chapter2.h"

using namespace std;

void Chapter2::DisplayAddress()
{
	std::cout << "Name: Fred" << endl << "Address: 23 Fren Drive" << endl;
}

int Chapter2::FurlongConverter()
{
	int furlong = 0;
	int yards = 0;

	std::cout << "Enter Yards: ";
	std::cin >> furlong;

	yards = furlong * 220;

	return yards;
}

void Chapter2::TextRepeater()
{
	std::string phrase1;
	std::string phrase2;

	cout << "Enter a phrase: " << endl;
	cin >> phrase1;

	cout << "Enter a second phrase: " << endl;
	cin >> phrase2;

	RepeatText(phrase1, 2);
	RepeatText(phrase2, 2);
}

void Chapter2::AgeInMonths()
{
	int ageYears;

	cout << "Enter Age in years: ";
	cin >> ageYears;

	cout << endl << "Your Age in months is: " << ageYears*12 << endl;
}

//Private Functions
void Chapter2::RepeatText(std::string text, int times)
{
	for (int i = 0; i < times; i++)
	{
		cout << text << endl;
	}
}