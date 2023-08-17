#include <stddef.h>
/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array.
 * @array: A pointer to the array of integers
 * @size: The size of the array
 * @action: A pointer to the function to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);

	}
}
