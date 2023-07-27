#include "main.h"
/**
 * _strcat - Adds two string together
 * @dest: The string that another string is added to
 * @src: The string being added to another string
 * Return: A string
 */

char *_strcat(*dest, *src)
{
	char *concat;
	
	concat = *dest + *src;
	return (concat);
}

