#include "main.h"

/**
* _puts_recursion - prints a string, followed by new line
* @s: is pointer to char
* Return: nothing.
*/

void _puts_recursion(char *s)
{
int i=0;

while (s[i] != '\0')
{
	putchar(s[i]);
i++;
}
putchar('\n');
}
