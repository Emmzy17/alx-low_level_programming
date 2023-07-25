#include "main.h"
/**
 * puts_half - Prints half of a string
 * @s: String pointer
 * Return: 0 is sucess
 */

void puts_half(char *s)
{
	int a = 0;

	while (*s != '\0')
		a++;
	int length = (a - 1) / 2;
	for (length; s[length] != '\0';length++)
		_putchar(s[length]);
	_putchar('\n');
}
