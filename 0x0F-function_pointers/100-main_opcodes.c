#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcodes for main function
 * @argc - count of argurements
 * @argv - arguements
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int num_bytes;
	unsigned char *function_ptr;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	if (num_bytes < 0)
	{	
		printf("Error\n");
		exit(2);
	}
	function_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
		printf("%02x", function_ptr[i]);

	printf("\n");

	return (0);
}
