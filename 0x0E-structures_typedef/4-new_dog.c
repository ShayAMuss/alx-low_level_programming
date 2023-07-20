#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
/**
 * new_dog - entry point
 * @name: Name character
 * @age: Age character
 * @owner: Owner character
 * Return: Always my_dog or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_Dog;
char *my_Dog_name, *my_Dog_owner;

my_Dog = malloc(sizeof(dog_t));

if(my_Dog == NULL)
{
	return (NULL);
}
my_Dog_name = _strdup(name);
if (my_Dog_name == NULL)
{
	free(my_Dog);
	return (NULL);
}

my_Dog_owner = _strdup(owner);
if (my_Dog_owner == NULL)
{
	free(my_Dog_name);
	free(my_Dog);
	return (NULL);
}
my_Dog->name = my_Dog_name;
my_Dog->age = age;
my_Dog->owner = my_Dog_owner;
return (my_Dog);
}
