#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * jack_bauer - Program entry point
 * printf: Function to print time
 * @h: an int number
 * @m: an int number
 *
 * Return: 0 on success.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
		printf("\n\t%02d:%02d", h, m);
	}
}
}
