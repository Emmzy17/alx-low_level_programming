#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a 
 * newly allocated space in memory
 * @str: string to duplicate it's also a pointer 
 *
 * Returns: a pointer to the new location
 */
char *_strdup(char *str)
{
	int length;
	char *new_str;

	while (*str != '\0')
		length++;
	new_str = (char *)malloc(lenght * sizeof(char));
	
	for (i = 0; i <= length; i++)
		new_str[i] =  str[i];
	new_str[length];
	return new_str;
}
