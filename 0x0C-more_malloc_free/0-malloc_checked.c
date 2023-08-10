#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: Size of memory to be allocated
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return mem;
}
