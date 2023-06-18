#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program entry point
 * srand - Function for random selection
 *
 * Return: 0 on success.
 */
int main(void)
{
	int n,i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i=n%10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n,i);
}
if (i == 0)
{
	printf("Last digit of %d is %d is 0\n", n,i);
}
if (n < 6 && n != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n,i);
}
	return (0);
}
