#include "main.h"

/**
 * *create_array - a function that creates an array of chars, and initializes it with a specific char.
 * @c: char c
 * @size: size of our data type
 *
 * Return: Char pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL
	char *A =(char *)malloc(size * sizeof(char));
	if (*A)
	{
		return *A
	}
	else
	{
		return NULL
	}
}
