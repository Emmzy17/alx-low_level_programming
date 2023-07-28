#include "main.h"
/**
 * _strcat - Adds two string together
 * @dest: The string that another string is added to
 * @src: The string being added to another string
 * Return: A string
 */

char *_strcat(char *dest,char  *src)
{
	char *s = dest;
	
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
