#include "main.h"

/**
 * _calloc -  a function that allocates memory for an array, using malloc.
 * @nmemb: nmemb elements of an array.
 * @size: size bytes of each array.
 *
 * Return: A void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	
	unsigned int total_size = nmemb * size;

	void *ptr = malloc(total_size);

	if (!ptr)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);

	return (ptr);
}
