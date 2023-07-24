#include "main.h"
#include <stdio.h>
/**
 * _strlen - Gets the lenght of a string
 * @S - pointer to the stack section of the string
 * Return: 0 is alwats sucess
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

