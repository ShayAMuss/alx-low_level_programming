#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
/**
 * times_table - Program entry point
 * @j - is an int number
 * @n - is an int number
 * @r - is an int number
 *
 * Return: 0 on success.
 */
void times_table(void)
{
     int n;
     int j;
     int r;

for (n = 0; n <= 9; n++)
{
     for (j = 0; j <= 9; j++)
     {
     if (n >= 0 && j == 9)
     {
	     r = n * j;
     printf("%d$", r);
     }
     else
     {
     r = n * j;
     printf("%d, ", r);
     }
     }
  printf("\n");
}
}
