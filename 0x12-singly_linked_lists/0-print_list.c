#include <stdio.h>
#include "list.h"
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
		printf("[%zu] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
