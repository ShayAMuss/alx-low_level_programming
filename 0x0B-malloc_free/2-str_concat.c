#include "main.h"

/**
 * *str_concat - Function that concatenates two strings.
 * @s1: Pointer to a char
 * @s2: Pointer to a char
 *
 * Return: pointer to new string, NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
int i, j = 0, j1 = 0, j2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + j) != '\0')
{
j++;
}
while (*(s2 + j1) != '\0')
{
j1++;
}
j2 = j + j1;

arr = (char *) malloc((j2 + 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
	for (i = 0; i < j; i++)
{
		arr[i] = s1[i];
}
for (i = 0; i < j1; i++)
{
arr[i + j] = s2[i];
}
return (arr);
}
