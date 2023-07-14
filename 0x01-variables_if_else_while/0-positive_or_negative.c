#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main : this function checks whether a random number
 * is positivee or negative or zero
 * Parameters : N is a random number integer
 * Return: 0- Success
*/                
int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
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
