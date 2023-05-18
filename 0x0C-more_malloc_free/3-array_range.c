#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create array of integers between min & max
 * @min: minimum value in array
 * @max: maximum size in array
 *
 * Return: array of ints
 */
int *array_range(int min, int max)
{
	int i, j, k;
	int *s;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(((max + 1) - min) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	j = max;
	i = min;
	k = 0;
	while (i <= j)
	{
		s[k] = i++;
		k++;
	}
	return (s);
}
