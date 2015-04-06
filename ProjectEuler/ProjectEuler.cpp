// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

#include "AllProblems.h"
using namespace std;

void PrintPage1()
{
	/*cout << "Problem 1's result: " << problem1() << "\n";
	cout << "Problem 2's result: " << problem2() << "\n";*/
	cout << "Problem 3's result: " << problem3() << "\n";
}

int _tmain(int argc, _TCHAR* argv[])
{
	PrintPage1();
	cin.get();

	return 0;
}