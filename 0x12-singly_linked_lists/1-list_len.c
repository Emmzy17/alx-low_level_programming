#include <stdio.h>
#include "lists.h"
/**
 * size_t list_len - returns the number of elements in a linked list
 * @h: node struct
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while(h)
	{
		len++;
	}
	return (len);
}
