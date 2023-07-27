#include "main.h"
/**
 * _strcat - Adds two string together
 * @dest: The string that another string is added to
 * @src: The string being added to another string
 * Return: A string
 */

char *_strcat(*dest, *src)
{
	int index = 0;
	int length = 0;

	while (dest[length] != '\0')
		length++;
	while (src[index] != '\0')
		dest[length] = src[index];
		length++;
		index++;
	dest[length] = '\0';
	return (desr);
}

