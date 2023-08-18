#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - selects the function for an operator
 * @s: operator
 * Return: a pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_add},
		{NULL, NULL},
	};
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
