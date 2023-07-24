#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcodes of the main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, num;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
                exit(2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i != num - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
