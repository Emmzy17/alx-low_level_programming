#include "main.h"
/**
 * puts_half - Prints half of a string
 * @s: String pointer
 * Return: 0 is sucess
 */

void puts_half(char *str)
{
	int index = 0, n;

	while (str[index] != '\0')
		index++;
	if (index  + 1 % 2 != '0')
	{
		n = (index - 1) / 2;
	}
	else
	{
		n = index / 2;
	}		
	n++;
	for (index = n; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n')
}
