#include <stdio.h>
/**
 * main - Program entry point
 * putchar: Function to print alphabets
 *
 * Return: 0 on success.
 */
int main(void)
{
	char c = 'a';
	char i = 'A';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
putchar('\n');
return (0);
}
