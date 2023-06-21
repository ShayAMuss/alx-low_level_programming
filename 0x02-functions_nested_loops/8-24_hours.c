#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * jack_bauer - Program entry point
 * jack_bauer: Function to print time in minutes
 * printf: Function to print time
 * @hrs: is an int number
 * @min: is an int number
 *
 * Return: 0 on success.
 */
void jack_bauer(void)
{
	int hrs, min;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
		printf("%02d:%02d \n", hrs, min);
	}
}
}
