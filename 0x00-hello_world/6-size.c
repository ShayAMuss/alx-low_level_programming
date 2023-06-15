#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
 * main - Program entry point
 * @argc: Number of argument
 * @argv: Number of argument
 *
 * Return: 0 on success.
 */
int main(int argc, char** argv)
{
	printf("\nSize of a char data type is %d", sizeof(char));
	printf("\nSize of an int data type is %d", sizeof(int));
	printf("\nSize of a long int data type is %d", sizeof(long int));
	printf("\nSize of a long long int data type is %ld", sizeof(long long int));
	printf("\nSize of a float data type is %d", sizeof(float));
	return (0);
}
