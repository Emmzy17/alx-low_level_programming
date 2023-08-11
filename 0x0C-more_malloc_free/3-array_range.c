#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum value in the range
 * @max: maximum value in the range
 *
 * Return: An array
 */
int *array_range(int min, int max)
{
	int size;
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	
	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));
	
	if (!arr)
	       return (NULL);	
	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}

	return (arr);
}

