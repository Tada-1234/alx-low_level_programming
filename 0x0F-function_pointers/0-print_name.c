#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: The character to print
 * @f: the function to use
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
