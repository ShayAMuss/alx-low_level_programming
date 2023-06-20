#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isalpha - Program entry point
 * _putchar: Function to check alphabets
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
_putchar('\n');
}
