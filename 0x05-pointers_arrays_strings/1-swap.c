#include "main.h"
/**
 * swap_int - swaps the values of the 2 ints
 * @a: pointer to the first int
 * @b: pointer to the second int
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
