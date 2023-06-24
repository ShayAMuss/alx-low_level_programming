#include "main.h"
/**
 * print_number - Entry point
 *@n: the integer to print
 * Return: no return
 */
void print_number(int n)
{
	if (n < 0)
{
putchar('-');
n = -n;
}

if (n > 9)
print_number(n/10);
putchar('0'+ (n%10));
}
