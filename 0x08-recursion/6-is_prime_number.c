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
int i, temp = 0;

for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
{
temp++;
break;
}
}

if (temp == 0 && n >= 2)
{
return (1);
}
else
{
return (0);
}

return (0);
}
