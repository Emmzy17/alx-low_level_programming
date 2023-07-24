#include "main.h"
/**
 * puts2 Prints every other character of a string
 * @str: char to print
 * Return: 0 is sucess
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
