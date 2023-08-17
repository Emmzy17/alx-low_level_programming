/**
 * int_index - this function searches for an integer
 * @array: array of integer
 * @size: size of the array
 * cmp: pointer to function(cmp)
 */
int int_inde(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return;
	if(size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp[i] != 0)
			return (i);
	return (-1);
}

