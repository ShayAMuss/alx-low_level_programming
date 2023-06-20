#include <stdio.h>
#include <main.h>
#include <unistd.h>
/**
 * main - Program entry point
 * putchar: Function to print alphabets
 *
 * Return: 0 on success.
 */
 void print_alphabet(void)
{
int c = 'a';

for (;c <= 'z'; c++)
{
_putchar(c);
}

_putchar('\n');
return (0);
}
