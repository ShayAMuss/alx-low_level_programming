#include "main.h"

/**
 * *create_array - Program entry point
 * @arr - array pointer
 * @c: is a character to function
 * @i - is an unsigned int number
 * @size: is an unsigned int number
 *
 * Return: array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));

	if (arr == 0 || size == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
