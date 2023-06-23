#include "main.h"
/**
 * print_numbers - Program entry poin.
 * @c: is an int number.
 *
 * Return: 0 on success.
 */

void print_numbers(void)
{
int c;

for (c = '0'; c <= '9'; c++)
putchar (c);
putchar('\n');
return (0);
}
