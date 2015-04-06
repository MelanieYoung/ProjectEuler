#include "AllProblems.h"
#include "stdafx.h"
#include <iostream>
using namespace std;

int problem1()
{
	int sum = 0;

	for (int i = 3; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return sum;
}

int problem2()
{
	int fibonacci = 1, previous = 1, sum = 0;
	for (fibonacci = 1; fibonacci < 4000000; fibonacci += previous)
	{
		previous += fibonacci;
		if (fibonacci % 2 == 0)
			sum += fibonacci;
		if (previous % 2 == 0)
			sum += previous;
	}

	return sum;
}

int problem3()
{
	unsigned long long int maxPrime = 0, bigNumber = 600851475143;
	for (unsigned long long int i = 600851475141; i >= 0; i-= 2)
	{
		cout << i << "\n";
		if (bigNumber%5 && bigNumber%i == 0)
		{
			maxPrime = i;
			break;
		}
	}

	return maxPrime;
}