#include "main.h"
/*_memset - fills the first n bytes of the memory area pointed to by s 
 * with a constant byte b
 * @s: pointer to string address
 * @b: constant byte
 * @n: n-bytes of memory
 * Return: Char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
		*s = b;
		*(s + 1);
	*s = '\n';
	return (*s); 
}
