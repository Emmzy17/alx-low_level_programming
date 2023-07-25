#include "main.h"
/**
 * _strcpy - copy string from source to destination
 * @dest: Place to copy string to
 * @src: Place toc copy string from
 * Return: @dest is sucess
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return(dest);
}
