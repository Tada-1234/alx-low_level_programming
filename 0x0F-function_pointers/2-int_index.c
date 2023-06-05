#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the function not 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		int temp;

		temp = cmp(*(array + i));
		if (temp != 0)
		{
			return (i);
		}
	}
	return (-1);
}
