#include "main.h"
#include <stdio.h>
/**
 * set_bit - changes a bit at a position
 * @n: number to scan through
 * @index: the position to change number at
 *
 * Return: changed number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int shift;

	shift = n | (1 << index);
	return (shift);
}
