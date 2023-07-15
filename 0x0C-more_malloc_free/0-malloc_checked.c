#include "main.h"

/**
 * malloc_checked - Function to allocate memory
 * @b: unsigned int number to the function
 * @i - prt to allocated memory
 * Return: return the pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
		return (ptr);

}
