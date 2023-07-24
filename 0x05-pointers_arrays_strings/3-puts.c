#include "main.h"
/**
 * _puts - Prints a string
 * @str : Address of the string
 * Return: 0 is always sucess
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
