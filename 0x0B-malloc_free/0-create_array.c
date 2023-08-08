#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars, and initializes it with a specific char.
 * @c: char c
 * @size: size of our data type
 *
 * Return: Char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	
	if (array == NULL)
		free(array);
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
