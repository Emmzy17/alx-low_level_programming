#include "main.h"
/**
 * _strcpy - It copies a string from src to dest
 * @dest: Char address to copy src to
 * @src: char address to copy string from
 * Return: A char pointer
 */

char *_strncpy(char* dest, char* src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}