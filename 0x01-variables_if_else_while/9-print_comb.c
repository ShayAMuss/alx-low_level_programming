#include <stdio.h>
/**
 * main - Program entry point
 * putchar: Function to print alphabets
 *
 * Return: 0 on success.
 */
int main(void)
{
int c = '0';

while (c <= '9')
{
putchar(c);
c++;
if (c <= '9')
{
putchar(',');
}
putchar(' ');
}
putchar('\n');
return (0);
}
