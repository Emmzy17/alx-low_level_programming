#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'Prints Alphabetical characters except q and e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; alpha[i] != '\0'; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
