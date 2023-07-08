#include "main.h"
#include <string.h>

/**
* is_palindrome - is program to compare two strings
* @s: is a pointer to char
* @i - is an int number
* @n - is an int number
* @c - is an int number
*
* Return: 1 if it is palindrome else 0.
*/

int is_palindrome(char *s)
{

int i = 0, n, c = 0;

n = strlen(s);

if (i < n / 2)
{
i++;
if (s[i] == s[n - i - 1])
c++;
}

if (c == i)
{
return (1);
}
else
return (0);

return (0);

}
