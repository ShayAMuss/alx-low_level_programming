#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _abs - Program entry point
 * _abs: Function to print absolute value
 * @n: is an int number
 *
 * Return: 0 on success.
 */
int _abs(int n)
{

if (n < 0)
{
n = ((-1) * n);
_putchar(n);
}
putchar('\n');
return (0);
}

