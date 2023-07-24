#include "main.h"
#include <stdio.h>
/**
 * _strlen - Gets the lenght of a string 
 * @s - pointer to the stack section of the string 
 * Return: 0 is alwats sucess 
 */

int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	printf("%d", count);
	return (0);
}

