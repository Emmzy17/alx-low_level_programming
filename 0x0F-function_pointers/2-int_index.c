/**
 * int_index - this function searches for an integer
 * @array: array of integer
 * @size: size of the array
 * @cmp: pointer to function(cmp)
 * Return: ith index of the array or -1 if nothing found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}

