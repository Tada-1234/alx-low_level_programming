#include "main.h"
/**
 * print_diagonal - prints the \ diagonally
 * @n: holds the number of \
 *
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int a, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (a = 0; a < j; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
