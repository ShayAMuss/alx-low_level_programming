#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <limits.h>
/**
 * print_to_98 - Program entry point
 * @n: is an int number
 *
 * Return: 0 on success.
 */
void print_to_98(int n)
{

if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else if (n >= 98)
{
while (n > 98)
{
printf("%d, ", n);
--n;
}
}
if (n == 98)
{
printf("%d", n);
printf("\n");
}
}
