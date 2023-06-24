#include "main.h"
/**
 * print_triangle - Program entry point.
 * @i - is int number.
 * @k - is char
 * @n - is an int number
 * @size: is an int number.
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i;
	char k;
	int n;

	k = '#';
	for (i = 1; i <= size; i++)
	{
		for (n = 0; n < size; n++)
		{
			if ((n + i) < size)
				_putchar(' ');
			if ((n + i) >= size)
				_putchar(k);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
