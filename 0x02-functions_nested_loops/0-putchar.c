#include "main.h"

/**
 * main - Print _putchar
 * Return: Always 0
 */
int main(void)
{
	char putchar[] = "_putchar";

	int i;
	
	for (i = 0; putchar[i] != '\0'; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar('\n');
	return (0);
}
