#include "main.h"
/* _memset - fills the first n bytes of the memory area pointed to by s
 * @s: pointer to string address
 * @b: constant byte
 * @n: n-bytes of memory
 * Return: Char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s); 
}
