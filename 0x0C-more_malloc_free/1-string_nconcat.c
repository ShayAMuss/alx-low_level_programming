#include "main.h"

/**
 * *string_nconcat - Concatenates two strings
 * @s1: String of destiny, pointer to a char[]
 * @s2: Source string, pointer to a char[]
 * @n: Integer parameter
 * Return: Char[] concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	char *s;
	unsigned int counterS = 0, counterD = 0,  i, j;

	for (s = s2; *s != '\0'; s++)
		counterS++;
s1 = malloc(sizeof(char) * (n + counterD + 1));
	if (s1 == NULL)
	{
		return (NULL);
	}
		for (d = s1; *d != '\0'; d++)
			counterD++;

	j = counterD;
	if (n >= counterS)
		n = counterS;
	for (i  = 0; i < n; i++)
	{
		s1[j] = s2[i];
		j++;
	}
	for (i =0; i < j; i++)
	{
		s1[j] = s2[i + 1];
	}
if (s1 == NULL)
{
	s1 = "";
}
	return (s1);
}
