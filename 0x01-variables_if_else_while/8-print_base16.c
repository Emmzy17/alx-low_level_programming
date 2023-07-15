#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'Prints hex digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "0123456789abcdef";
	int i;

	for (i = 0; alpha[i] != '\0'; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
