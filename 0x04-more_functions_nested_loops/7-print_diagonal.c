#include "main.h"
/**
 * print_diagonal - prints the \ diagonally
 * @n: holds the number of \
 *
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int i, j;
	char back_slash = 92;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(back_slash);
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	_putchar('\n');
}
