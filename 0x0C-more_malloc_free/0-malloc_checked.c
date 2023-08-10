#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: Size of memory to be allocated
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b * sizeof(unsigned int));

	if (!mem)
		return NULL;
	return mem;
}
