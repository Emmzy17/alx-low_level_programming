#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - single linked list
 * @str: string - (malloc'ed string)
 * @len: lenght of the string
 * @next: points to the nex node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif
