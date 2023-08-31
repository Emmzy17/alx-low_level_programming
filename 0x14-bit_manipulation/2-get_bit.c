#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number toe be indexed
 * @index: index of the number n
 * Return: a number 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) *s)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
