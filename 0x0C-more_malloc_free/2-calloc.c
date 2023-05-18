#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - creates an array
 * @nmemb: the number of elements
 * @size: the number of bytes per character
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	memset(s, 0, (nmemb * size));
	return (s);
}
