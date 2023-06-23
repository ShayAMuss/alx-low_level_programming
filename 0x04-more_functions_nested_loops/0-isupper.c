#include <stdio.h>
#include "main.h"
/**
 * _isupper - Program entry point.
 * @c: is an int number.
 *
 * Return: always success.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
