#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Program entry point
 * @n: is an int number
 * @m: is an int number
 *
 * Return: 0 on success.
 */
int print_last_digit(int n)
{
int m;

m = n % 10;
if (n < 0)
m = m * -1;
_putchar(m + '0');
return (m);
}
