#include "main.h"

/**
 * str_nconcat - concantenates two strings
 * @s1: string to add
 * @s2: second string
 * @n: n bytes to uses to concate s2 to s1
 *
 * Return: A char pointer of the concantenated strings 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_of_s1 = 0, length_of_s2 = 0, i, j;
	char *result;
	char *temp_s1 = s1;
	char *temp_s2 = s2;

	while(*s1)
	{
		length_of_s1++;
		temp_s1++;
	}
	while(*s2)
	{	
		length_of_s2++;
		temp_s2++;
	}
	if (n >= length_of_s2)
		n = length_of_s2;

	result = (char *)malloc(length_of_s1 + n +1);
	if (!result)
		return NULL;
	for (i = 0; i < length_of_s1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];
	result[i] = '\0';
	
	return (result);
}	
