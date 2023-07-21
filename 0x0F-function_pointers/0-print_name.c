#include "function_pointers.h"
/**
 * print_name - Entry point
 * @f: pointer to void function
 * @neme: pointer to print_name fumction
 *
 * Return: Nothing.
 */
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL)
		return;
	       
	f(name);
}
