#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs arithmetics based on the argurement
 * @argc: arguement count
 * @argv: araray of arguements
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(a, b));
	return (0);
}
