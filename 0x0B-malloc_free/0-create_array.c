#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char an initializes with char
 * @size: the size of the array
 * @c: the char to initialize with
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *s;
		unsigned int i;

		i = 0;
		s = malloc(size * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
		while (i < size)
		{
			s[i] = c;
			i++;
		}
		return (s);
	}
}
