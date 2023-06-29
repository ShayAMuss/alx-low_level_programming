#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CHARS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};':\"\\|,.<>/?`~"
void randomPasswordGeneration(int N)
{
	int i = 0;
	int randomizer = 0;

	srand((unsigned int)(time(NULL)));
	char password[N + 1];
	randomizer = rand() % 4;
	for (i = 0; i < N; i++) {

		if (randomizer == 1) {
			password[i] = CHARS[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2) {
			password[i] = CHARS[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3) {
			password[i] = CHARS[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = CHARS[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
