#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints Alphabetical characters'
 * Return: Always 0 (Success)
 */
int main()
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	
	int i;
	
	for ( i = 0; alpha[i]== '\0'; i++)
	{
		putchar(alpha[i]);
	}	
	
	putchar('\n');
	
	return 0;
}