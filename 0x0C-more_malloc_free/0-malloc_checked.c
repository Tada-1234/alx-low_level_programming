#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: the number of elements
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
