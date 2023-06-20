#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - Program entry point
 * _islower: Function to check lowercase alphabets
 *
 * Return: 1 on success else 0.
 */

int _islower( int c )
{
c = 'a';
if (c <= 'z')
{
_islower(c);
c++;
return (1);
}
else
{
return (0);
}
putchar('\n');
}
