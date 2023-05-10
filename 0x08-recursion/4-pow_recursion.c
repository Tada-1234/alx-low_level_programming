#include "main.h"
/**
 * _pow_recursion - returns the value of x ^ y
 * @x: the one being raised
 * @y: the power
 *
 * Return: int which is x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
