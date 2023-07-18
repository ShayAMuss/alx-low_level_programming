#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - inits the dog
 * @d: new dog character
 * @name: name character
 * @age: is float age number
 *
 * Return: Nothing.
 */
 void init_dog(struct dog *d, char *name, float age, char *owner)
 {
d->owner = owner;
d->name = name;
d->age = age;
 }
