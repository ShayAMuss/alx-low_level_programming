#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - creates a password
 *
 * Return:0;
 */
int main(void)
{
	int k, s, c;

	srand(time(NULL));
	c = 2772;
	k = 0;

	while (k < (c - 122))
	{
		s = (rand() % (122 - 97 + 1)) + 97;/*to print mostly lowercaseletters*/
		printf("%c", s);
		k = k + s;
	}

	s = c - k;
	printf("%c", s);

	return (0);
}
