#include "main.h"
#include <ctype.h>
/**
 * _islower - print 1 if the value is lowercase or 0 otherwise
 * @c: passed alphabetic value
 *
 * Return: returns 1 or 0
 */

int _islower(int c)
{
	int value;

	value = islower(c);
	if (value != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
