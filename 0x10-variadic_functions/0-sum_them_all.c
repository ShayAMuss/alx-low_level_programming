#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function returns the sum of all its parameters
 * @n: is constant unsigned int
 * @ap - Variable of type va_list
 * @j - an int number
 * @sum - an int number
 * Return: Returns the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int j;
int sum = 0;

if (n == 0)
{
	return (0);
}

va_start(ap, n);
for (j = 0; j < n; j++)
{
sum += va_arg(ap, const unsigned int);
}
va_end(ap);

return (sum);
}
