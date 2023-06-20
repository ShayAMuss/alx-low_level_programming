#include <stdio.h>
#include "main.h"
/**
 * main - Program entry point
 * _putchar: Function to print alphabets
 * print_alphabet: Fuction to print alphabet
 *
 * Return: 0 on success.
 */
void print_alphabet(void)
{
int c = 'a';

for (; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
