#include <stdlib.h>
#include <time.h>
/**
 * main - Program entry point
 * srand - Function for random selection
 *
 * Return : 0 on success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("\n%d is positive", n);
}
if (n = 0) {
	printf("\n%d is zero", n);
}
if (n < 0) {
	printf("\n%d is negative", n);
}
	return (0);
}
