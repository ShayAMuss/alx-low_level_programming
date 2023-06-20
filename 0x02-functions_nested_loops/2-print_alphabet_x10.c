#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - Program entry point
 * _putchar: Function to print alphabets
 *
 * Return: 0 on success.
 */
void print_alphabet_x10(void)
{
int c = 'a';
int j, n = 10;

for (j = 0; j <= n; j++)
{	
for (; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
