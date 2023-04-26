#include "main.h"
#include <ctype.h>
/**
 * _isalpha - determine if an input is a alphabetic letter
 * @c: passed alphabetic or numeric value
 *
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	int value;

	value = isalpha(c);
	if (value != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
