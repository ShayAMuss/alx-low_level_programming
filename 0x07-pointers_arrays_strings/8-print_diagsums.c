#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 *
 * @a: the name of the array
 * @size: the size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int suM = 0;

	for (i = 0; i < size ; i++)
	{
		sum = sum + a[i * size + i];
	}
	for (i = (size - 1); i >= 0; --i)
	{
		suM += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum, suM);
}
