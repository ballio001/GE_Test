// GE_Test.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <list>
#include <time.h>

using namespace std;

int test_assert(int x = 1 )
{
	assert(x <= 47);
	return x;
}

int main()
{
	//int counter = 0;
	int n = 6;
	list <int*> numbers;
	int randomNumber;

	for (int i = 0; i < n; i++)
	{
		test_assert(i);
		randomNumber = rand() % 47;
		//printf("i = %d\n", rand() % 47);
		for (int j = 0; j < n; j++)
		{
			if (i == j) {
				randomNumber = rand() % 47;
				//numbers->push_back(randomNumber);
				printf("equal numbers detected\n");
			}
			else {
				printf("i = %d\n", randomNumber);
			}
		}
	}

	//while (counter <= 10)
	//{
	//	cout << "Number: ";
	//	cin >> number[];
	//	counter++; 
	//	cout << "The entered numbers are: " << endl;
	//	cout << number << endl;
	//}

	while (1) {
		//keeps the cmd open
	}
	return 0;
}


