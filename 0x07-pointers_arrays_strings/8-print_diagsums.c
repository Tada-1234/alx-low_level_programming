#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array pointer
 * @size: size of the square array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		int b = 0;

		for (j = 0; j < size; j++)
		{
			sum1 += *(a + (i + b) + j);
			sum2 += *(a + (size - b) + (size - b));
			b++;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
