#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: number
 * @index: index of the bit to set
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask =  1UL << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}

