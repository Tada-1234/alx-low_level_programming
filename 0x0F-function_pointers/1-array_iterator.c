#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function given as a parameter on element of array
 * @array: array to be used
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
