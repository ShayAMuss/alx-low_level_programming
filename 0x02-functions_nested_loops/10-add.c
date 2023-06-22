#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <limits.h>
/**
 * add - Program entry point
 * @n: is an int number
 * @j - is an int number
 * @r - is a result of int numbers
 *
 * Return: r on success.
 */
int add(int n, int j)
{
int r;

r = n + j;
return (r);
}
