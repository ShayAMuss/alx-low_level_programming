#include "main.h"

/**
 * print_most_numbers - Program entry poin.
 * @c - is an int number.
 *
 * Return: nothing on success.
 */

void print_most_numbers(void)
{
int c;

for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
putchar (c);
}
}
putchar('\n');
}
