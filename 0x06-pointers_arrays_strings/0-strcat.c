#include "main.h"
#include <stdio.h>

/**
* *strcat - is program to concatenate two strings
* @*dest - is a pointer to char
* @*src - is a pointer to char
*
* Return: nothing.
*/
 
char *_strcat(char *dest, char *src)
{
int i;

int j = strlen(dest);

for (i = 0; src[i] != '\0'; i++)
{
dest[i + j] = src[i];
}

dest[i + j] = '\0';

return(0);
}
