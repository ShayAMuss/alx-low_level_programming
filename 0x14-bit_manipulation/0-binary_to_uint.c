#include "main.h"

/**
* binary_to_uint - Program to convert binary to unsigned int
* @b: is pointint to a string of 0 and 1 chars
* @val - is unsigned int number to convert
* Return: Returns the converted number or 0.
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;

if (b == NULL)
return (0);

if (b[i] != '0' && b[i] != '1')
{
	return (0);
}

while (b[i] == '0' || b[i] == '1')
{
val <<= 1;
val += b[i] - '0';
i++;
}
return (val);
}
