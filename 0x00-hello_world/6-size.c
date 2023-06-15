#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
 * main - Program entry point
 * @argc: Number of argument
 * @argv: Number of argument
 *
 * Return: 0 on success.i
 */
int main(int argc, char** argv)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
