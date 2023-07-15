#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: 'Prints Alphabetical characters'
 * Return: Always 0 (Success)
 */
int main()
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	
	int i;
	
	for ( i = 0; i < strlen(alpha); i++)
	{
		putchar(alpha[i]);
	}	
	
	putchar('\n');
	
	return 0;
}
