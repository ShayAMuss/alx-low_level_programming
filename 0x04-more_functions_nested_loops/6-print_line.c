#include "main.h"

/**
 * print_line - Program entry point.
 * @n: - is an int number.
 *
 * Return: nothing.
 */

void print_line(int n)
{
char c = '_';
int j;

for (j = 0; j < n; j++)
{
if (n > 0)
{
putchar(c);
}
}
putchar('\n');
}
