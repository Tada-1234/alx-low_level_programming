#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "main.h"
/**
 * unsigned int binary_to_uint - converts binary to decimal
 * @b: char containing number
 *
 * Return: unsigned decimal number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j, k, decimal;

	i = 1;
	j = 0;
	decimal = 0;
	if (b == NULL)
	{
		return (0);
	}
	else
	{
		k = (unsigned int)atoi(b);
		if (k == 0)
		{
			return (0);
		}
		while (k > 0)
		{
			j = k % 10;
			decimal = decimal + j * i;
			k = k / 10;
			i = i * 2;
		}
	}
	return (decimal);
}
