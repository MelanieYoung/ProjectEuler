#include "AllProblems.h"
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

#pragma region [-- Problems 1 to 5 --]
// Multiples of 3 and 5
int Problem1()
{
	int sum = 0;

	for (int i = 3; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return sum;
}

//Even Fibonacci numbers
int Problem2()
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

// Largest prime factor
int Problem3()
{
	unsigned long long int bigNumber = 600851475143;

	for (unsigned long long int i = 1; i < bigNumber; i++)
	{
		if (bigNumber%i == 0)
			bigNumber = bigNumber / i;
	}

	return bigNumber;
}

// Largest palindrome product
int Problem4()
{
	unsigned long int largestPalindrome = 0, product = 0, currentPalindrome = 0;
	int stringSize = 0, navigator = 0;
	bool palindromeFound = false;

	for (int largest = 999; largest > 101; largest--)
	{
		for (int smallest = 999; smallest > 101; smallest--)
		{
			product = smallest * largest;

			string resultingString = to_string(product);
			stringSize = resultingString.length();
			navigator = stringSize;

			for (int i = 0; i < stringSize / 2; i++)
			{
				navigator--;
				if (resultingString[i] != resultingString[navigator])
					break;

				if (i == (stringSize / 2) - 1)
				{
					currentPalindrome = stoi(resultingString);
					palindromeFound = true;
				}
			}

			if (palindromeFound)
			{
				if (largestPalindrome < currentPalindrome)
				{
					largestPalindrome = currentPalindrome;
					palindromeFound = false;
				}
			}
		}
	}

	cout << "Biggest palindrome found: " << largestPalindrome << "\n";;
	return largestPalindrome;
}

// Smallest multiple
unsigned long int Problem5()
{
	unsigned long int smallestDivisible = 2520;
	bool smallestDivisibleFound = false;
	while (!smallestDivisibleFound)
	{
		smallestDivisible += 10;
		for (int i = 1; i <= 20; i++)
		{
			if (smallestDivisible % i != 0)
				break;

			if (i == 20)
				smallestDivisibleFound = true;
		}
	}

	return smallestDivisible;
}
#pragma endregion

#pragma region [-- Problems 6 to 10 --]
// Sum square difference
unsigned long int Problem6()
{
	unsigned long int sumOfSquares = 0, squareOfSums = 0, difference = 0;

	for (int i = 1; i <= 100; i++)
	{
		sumOfSquares += i*i;
		squareOfSums += i;
	}

	difference = (squareOfSums * squareOfSums) - sumOfSquares;

	return difference;
}

// 10001st prime
long int Problem7()
{
	return 0;
}
#pragma endregion
