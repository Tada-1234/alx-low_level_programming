#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if the input is a digit
 * @c: input int
 *
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	int x;

	x = isdigit(c);
	if (x > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
