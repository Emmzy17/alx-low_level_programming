#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'Prints Digit combination' 
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i;

	for (i = 0; i < 10; i++)
	{
		putchar(' '+i+',' + '0');
	}
	putchar('\n');
	return (0);
}
