#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string
 * @c: character to locate
 * Return: character pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
		s++;
	else
		return (s);
	}
	if (c == '\0')
	{
	return (s);
	}
	
	return (NULL);
}
