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

for (c = 'a'; c <= 'z'; c++)
{
_islower(c);
return (1);
}
if (c < '97' || c > '122')
{
return (0);
}
putchar('\n');
}
