#include <iostream>
#include <string>

#ifndef CHAPTER2_H
#define CHAPTER2_H

class Chapter2
{
public:
	void DisplayAddress(); //Question 1
	int FurlongConverter(); //Question 2
	void TextRepeater(); //Question 3
	void AgeInMonths(); //Question 4

private:
	void RepeatText(std::string text, int times);
};

#endif