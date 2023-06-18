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

while (c < '10')
{
putchar(c);
c++;
if (c <= '8')
{
putchar(',');
}
putchar(' ');
}
putchar('\n');
return (0);
}
