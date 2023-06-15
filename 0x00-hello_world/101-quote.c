#include <stdio.h> 
#include <unistd.h>
/**
 * write - Progarm entry point
 * main - Program entry point
 * @argc: Number of argument
 * @argv: Number of argument
 *
 * Return: 0 on success.
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (0);
}
