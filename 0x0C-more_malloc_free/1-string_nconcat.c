#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1, length_s2, j;
	char *s;

	if (s1 == NULL)
	{
		length_s1 = 0;
	}
	else
	{
		for (length_s1 = 0; s1[length_s1]; length_s1++)
		;
	}
	if (s2 == NULL)
	{
		length_s2 = 0;
	}
	else
	{
		for (length_s2 = 0; s2[length_s2]; length_s2++)
		;		;
	}
	if (length_s2 > n)
		length_s2 = n;
	s = malloc(sizeof(char) * (length_s1 + length_s2 + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < length_s1; j++)
		s[j] = s1[j];
	for (j = 0; j < length_s2; j++)
		s[j + length_s1] = s2[j];
	s[length_s1 + length_s2] = '\0';
	return (s);
}
