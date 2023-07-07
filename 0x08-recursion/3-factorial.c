#include "main.h"

/**
* factorial - prints the factorial of n
* @n: is an int number
* Return: the factorial of n.
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
