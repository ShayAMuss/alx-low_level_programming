#include <stdio.h>
/**
 * main - Program entry point
 * putchar: Function to print alphabets
 *
 * Return: 0 on success.
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{	
	if (c < '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar(c);
	}
putchar('\n');
return (0);
}
