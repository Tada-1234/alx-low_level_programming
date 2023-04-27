#include "main.h"
/**
 * print_line - prints a straight line
 * @n: holds length of line
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
