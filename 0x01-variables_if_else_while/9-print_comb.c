#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'Prints Digit combination'
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
