#include "function_pointers.h"
/**
 * array_iterator - calls afunction given a parameter on echelement of array
 * @array: integer array
 * @size: size of the array
 * @action: function pointer
 * Retrun: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
		size_t i;

for (i = 0; i < size; i++)
	action(array[i]);
}
