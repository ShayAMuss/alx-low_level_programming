#include <stdio.h>

/**
 * more_numbers - Program entry poin.
 * @c - is an int number.
 * @n: is an int number.
 *
 * Return: nothing on success.
 */

void more_numbers(void)
{
int c;
int n;

for (c = 0; c < 10; c++)
{
for (n = 0; n <=14; n++)
{
printf("%d", n, c );
}
putchar('\n');
}
}
