#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - Program entry point
 * _putchar: Function to print sign
 * @n: is an int number
 *
 * Return: 1 on success else 0.
 */

int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
