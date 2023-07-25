#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers, followed by \n
 * @n: Number of integers passed to the function
 * @separator: is the string to printed between numbers
 * @j: int number
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
int j;
unsigned int sum;

if (!n)
{
	printf("\n");
	return;
}

va_start(ap, n);
for (sum = 0; sum < n; sum++)
{
 j = va_arg(ap, int);
if (separator == NULL)
{
if (sum == n - 1)
{
	printf("%d\n", j);
}
else
{
	printf("%d", j);
}
}
else
{
	if (sum == n -1)
	{
		printf("%d\n", j);
	}
	else
	{
		printf("%d%s", j, separator);
	}
}
}
va_end(ap);
}
