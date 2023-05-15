#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if the input is uppercase
 * @c: holds the value we want to evaluate
 *
 * Return: 0 or 1.
 */
int _isupper(int c)
{
	int x;

	x = isupper(c);
	if (x > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
