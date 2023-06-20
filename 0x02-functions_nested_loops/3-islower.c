#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - Program entry point
 * _islower: Function to check lowercase alphabets
 * @c: is an int number
 *
 * Return: 1 on success else 0.
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
putchar('\n');
}
