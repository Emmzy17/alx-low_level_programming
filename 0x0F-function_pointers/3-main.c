#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs arithmetics based on the argurement
 * Return: int
 */
int main(int argc, char *argv[]) 
{
	int a, b;
	int (*operation)(int, int);
	if (argc != 4)
	{
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation) 
	{
		printf("Error\n");
		return (2);
	}
	printf("%d\n", operation(a, b));
	return (0);
}
