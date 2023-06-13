#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the bit at a particular position
 * @n: decimal number
 * @index: point to extract number from
 *
 * Return: the bit at that position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i, j, mask;

	mask = (1 << index);
	j = mask & n;
	i = (j >> index);
	return (i);
}
