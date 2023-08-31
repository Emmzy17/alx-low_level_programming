#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: Number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if ((n & mask))
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
