#include "main.h"

/**
* _pow_recursion - prints the result of x raise to the power of y
* @x: is an int number
* @y: is an int number
* Return: the result.
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
return (x * _pow_recursion(x, (y - 1)));
}
