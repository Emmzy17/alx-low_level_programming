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
	for (a = a-1/2; s[a] != '\0'; a++)
		_putchar(s[a]);
	_putchar('\n');
}
