#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * File_name : 0-positive_of_negative
 * Authour : Emmanuel Adoyi
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	/*
	 * Main : this function checks whether a random number is positive
	 *
	 * Prints: N is positive or negative or zero
	 * Return 0: Success
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
