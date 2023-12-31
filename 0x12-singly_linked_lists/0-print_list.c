#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the element of list_t
 * @h: pointer to the struct list_t
 * Return: size of struct
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nodes++;
		h = h->next;
	}

	return (nodes);
}
