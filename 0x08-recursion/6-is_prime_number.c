#include "main.h"

/**
* is_prime_number - is program to check for prime numbers
* @n: is an int number
* @i - is an int number
* @temp - is an int number
*
* Return: 1 if it is prime number else 0.
*/

int is_prime_number(int n)
{
int i = 2;

if (n < 2)
{
return (0);
}

if (n % i != 0 && n % 5 != 0)
{
return (1);
}

return (0);
}
