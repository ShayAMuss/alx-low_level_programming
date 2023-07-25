#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by \n
 * @n: Number of integers passed to the function
 * @separator: is the string to printed between numbers
 * @j - an int number
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
char *j;
unsigned int sum;

if (n == 0)
{
	printf("\n");
}

va_start(ap, n);

for (sum = 0; sum < n; sum++)
{
	j = va_arg(ap, char *);
	if (!n)
	{
		printf(" ");
	}
	else
	if (j == NULL)
	{
		printf("(nil)");
	}
	else
		if (separator == NULL)
		{
			return;
		}
		else
		{
			if (sum == n - 1)
			{
				printf("%s\n", j);
			}
			else
			{
				printf("%s%s", j, separator);
			}
		}
	va_end(ap);
}

}
