// GE_Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

int test_assert(int x)
{
	assert(x <= 46);
	return x;
}

int main()
{
	int i,n;
	int numbers[47];
	time_t t;
	n = 20;

	/* Intializes random number generator */
	srand((unsigned) time(&t));

	for (i = 0; i < n; i++)
	{
		test_assert(i);
		printf("i = %d\n", rand() % 47);

		if (i == numbers[i]) {
			printf("equal numbers detected");
			printf("i = %d\n", rand() % 47);
		}
	}
	while (1) {

	}
	return 0;
}

