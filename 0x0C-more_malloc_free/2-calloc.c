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
	unsigned int total_size;
	unsigned char *ptr;
	unsigned int i;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	
	total_size = nmemb * size;
	ptr = (unsigned char *)malloc(total_size);

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (void *)ptr;
}
