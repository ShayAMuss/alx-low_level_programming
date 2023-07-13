#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @string: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *string)
{
	int j = 0, i;
	char *arr;

	if (string == NULL)
	{
		return (NULL);
	}

	while (*(string + j) != '\0')
	{
		j++;
	}

	arr = malloc((j + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		arr[i] = string[i];
	}

	return (arr);
}
