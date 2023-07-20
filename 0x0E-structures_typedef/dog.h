#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Therd member
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *string);
dog_t *new_dog(char *name, float age, char *owner);
int _putchar(char c);
void free_dog(dog_t *d);

#endif
