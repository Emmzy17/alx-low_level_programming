#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: nth index of the array
 * Retun: 0 is sucess
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	printf('\n');
}