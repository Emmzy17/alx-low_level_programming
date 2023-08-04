#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two argument
 * @argc: argument count
 * @argv: arguements
 *
 * Return: 0 is sucess
 */
int main(int argc, char *argv[])
{
	int arg1 = strtol( argv[1], NULL, 10);
	int arg2 = strtol( argv[2], NULL, 10);
	
	if (argc > 3 || argc < 3)
	{	
		printf("Error");
		return (1);
	}

	(void)argc;
	printf("%d\n", arg1 * arg2);
	return(0);
}
