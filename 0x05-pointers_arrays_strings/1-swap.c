#include "main.h"
/**
 * swap_int - Swaps two integers a and b
 * @a : first int
 * @b : second int
 * Return: 0 is sucesss
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
