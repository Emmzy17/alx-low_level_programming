#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all digits with characters'
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
