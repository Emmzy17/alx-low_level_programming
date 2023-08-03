#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string pointer
 *
 * Return: character of string
 */
void _puts_recursion(char *s)
{
	if (*s)
		_putchar('\n');
		_puts_recursion(s + 1);
		
	else
		_putchar('\n');
}
