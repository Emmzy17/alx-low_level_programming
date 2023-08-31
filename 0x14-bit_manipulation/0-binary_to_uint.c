#include "main.h"
/**
 * binary_to_uint - Converts binary to an unsigned int
 * @b: binary
 * Return: Unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b != '\0'; ++b)
	{
		result <<= 1;

		if (*b == '1')
		{
			result += 1;
		}
		else if (*b != '0')
		{
			return (0);
		}
	}

	return (result);
}
