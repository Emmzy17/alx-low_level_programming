#include "main.h"
/**
 * print_rev - Prints a string reversed
 * @s: Character pointer
 * Return: 0 is a sucess
 */

void print_rev(char *s)
{
	int j, k;

	j = 0;
	while (s[j] != '\0')
		j++
	for (k = j - 1; k >= 0; k--)
	{
		_putchar(s[k])
	}
	_putchar('\n');
}
