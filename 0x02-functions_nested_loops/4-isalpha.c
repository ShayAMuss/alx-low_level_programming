#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - Program entry point
 * _isalpha: Function to check alphabets
 * @c: is an int number
 *
 * Return: 1 on success else 0.
 */

int _isalpha(int c)
{

if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
putchar('\n');
}
