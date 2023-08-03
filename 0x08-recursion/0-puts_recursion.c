#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string pointer 
 * Return: character of string
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
}
