#include <stdio.h>
/**
 * main - Program entry point
 * putchar: Function to print alphabets
 *
 * Return: 0 on success.
 */
int main (void)
{
	char c = 'a';
	int n;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar("\n");
	return (0);
}
