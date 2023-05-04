#include "main.h"
/**
 * reverse_array - reverses order of numbers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, arr_len;

	i = 0;
	while (i < n)
	{
		i++;
	}
	arr_len = i;
	for (j = 0; j < (arr_len / 2); j++)
	{
		int c;

		c = a[j];
		a[j] = a[arr_len - j - 1];
		a[arr_len - j - 1] = c;
	}
}
